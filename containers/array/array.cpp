#include <iostream>
#include <array>

using namespace std;

int main()
{
    // fixed size!
    array<int, 3> arr{1,2,3};
    for (auto e : arr)
        cout << e << " ";
    cout << endl;

    // bounds check
    try {
        cout << arr.at(3);
    }
    catch (const std::out_of_range& ex) {
        std::cout << "out of range, " << ex.what() << endl;
    }

    // compiler warning
    // cout << arr[3];

    int* pArr = arr.data();
    for (int i = 0; i < arr.size(); i++) {
        cout << *pArr++ << " ";
    }
    cout << endl;

    arr.fill(-1);
    for (auto e : arr)
        cout << e << " ";
    cout << endl;

    std::cout << "Hello World!\n";
}