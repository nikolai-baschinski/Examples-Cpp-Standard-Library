#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v{1,4,9,0,4};

    cout << all_of(v.cbegin(), v.cend(), [](int value) {return value >= 0;});
    cout << any_of(v.cbegin(), v.cend(), [](int value) {return value == 0;});
    cout << none_of(v.cbegin(), v.cend(), [](int value) {return value < 0;});
    std::cout << "Hello World!\n";
}

