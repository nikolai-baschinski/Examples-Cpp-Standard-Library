#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(10);
    iota(v.begin(), v.end(), -5);

    for (auto e : v)
        cout << e << endl;

    std::cout << "Hello World!\n";
}