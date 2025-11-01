#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v1(5);
    fill(v1.begin(), v1.end(), -1);

    for (int e : v1)
        cout << e << " ";
    cout << '\n';

    fill_n(v1.begin(), 3, 42);

    for (int e : v1)
        cout << e << " ";
    cout << '\n';

    std::cout << "Hello World!\n";
}
