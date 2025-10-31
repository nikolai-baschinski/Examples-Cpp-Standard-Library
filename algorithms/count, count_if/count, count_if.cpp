#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v{ 1,4,7,8,8,8,1 };

    cout << count(v.begin(), v.end(), 8) << endl;
    cout << count_if(v.begin(), v.end(), [](int i) { return i > 4; } ) << endl;
    std::cout << "Hello World!\n";
}