#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1{ 1,3,6,8,9 };
    vector<int> v2{2,7};
    vector<int> dst;
    std::merge(v1.begin(), v1.end(), v2.begin(), v2.end(), std::back_inserter(dst));

    for (int e : dst)
        cout << e << " ";
    cout << '\n';
    std::cout << "Hello World!\n";
}