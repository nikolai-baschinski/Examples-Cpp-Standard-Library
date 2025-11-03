#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v{4, 7, 9, 0, 8, 1, 1, 3};
    for (int e : v)
        cout << e << " ";
    cout << '\n';
    
    std::sort(v.begin(), v.end());
    for (int e : v)
        cout << e << " ";
    cout << '\n';

    cout << std::is_sorted(v.begin(), v.end());
}