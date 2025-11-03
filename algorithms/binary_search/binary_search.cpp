#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{2,5,7,8,9,11};

    cout << std::binary_search(v.begin(), v.end(), 9) << endl;
    cout << std::binary_search(v.begin(), v.end(), 10) << endl;
    std::cout << "Hello World!\n";
}