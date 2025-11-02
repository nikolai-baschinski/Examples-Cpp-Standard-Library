#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{ 1,2,3,4 };
    for (const int e : v)
        cout << e << " ";
    cout << endl;

    reverse(v.begin(), v.end());
    for (const int e : v)
        cout << e << " ";
    cout << endl;

    vector<int> v2(4);
    reverse_copy(v.begin(), v.end(), v2.begin());
    for (const int e : v2)
        cout << e << " ";
    cout << endl;

    std::cout << "Hello World!\n";
}
