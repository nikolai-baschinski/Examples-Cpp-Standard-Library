#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    vector<int> v{ 1,2,3 };
    cout << accumulate(v.begin(), v.end(), 0) << endl;
    std::cout << "Hello World!\n";
}