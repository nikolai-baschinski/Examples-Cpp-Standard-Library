#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(const vector<int> v) {
    for (auto e : v)
        cout << e;
    cout << endl;
}

int main()
{
    vector<int> v{ 1,2,3,4,5,6,7 };
    print(v);
    rotate(v.begin(), v.begin() + 1, v.end());
    print(v);
    rotate(v.begin(), v.begin() + 2, v.end());
    print(v);

    std::cout << "Hello World!\n";
}