#include <iostream>
#include <string>
#include <tuple>

using namespace std;

int main()
{
    tuple<int, string, double> t1(42, "hallo", 7.9);

    cout << std::get<0>(t1) << endl;
    cout << std::get<1>(t1) << endl;
    cout << std::get<2>(t1) << endl;
    // cout << std::get<3>(t1) << endl; // compiler error

    tuple<int, string, double> t2 = t1; // assignment
    cout << std::get<0>(t2) << endl;
    cout << std::get<1>(t2) << endl;
    cout << std::get<2>(t2) << endl;

    auto t3 = make_tuple(-1, "Hi!"); // make_tuple
    cout << std::get<0>(t3) << endl;
    cout << std::get<1>(t3) << endl;

    std::string s;
    double d;
    std::tie(std::ignore, s, d) = t1; // tie with ignore
    cout << s << endl << d << endl;

    return 0;
}
