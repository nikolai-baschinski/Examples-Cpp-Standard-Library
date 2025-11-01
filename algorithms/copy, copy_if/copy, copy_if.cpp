#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    vector<int> v1{ 1,2,3 }; // init with 1,2,3
    vector<int> v2(3); // size 3

    copy(v1.begin(), v1.end(), v2.begin());

    for (const auto& e : v1)
        cout << e;
    cout << endl;
    
    for (const auto& e : v2)
        cout << e;
    cout << endl;

    vector<int> v3;
    copy_if(v1.begin(), v1.end(), std::back_inserter(v3), [](int x) { return x > 1; });
    
    for (const auto& e : v3)
        cout << e;
    cout << endl;
    std::cout << "Hello World!\n";
}
