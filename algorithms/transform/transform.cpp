#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1{ 1,2,3,4,5 };
    vector<int> v2;

    std::transform(v1.begin(), v1.end(), std::back_inserter(v2), [](int n) {return n * 2;});

    for (auto e : v1)
        cout << e << " ";
    cout << endl;

    for (auto e : v2)
        cout << e << " ";
    cout << endl;


    std::cout << "Hello World!\n";
}
