#include <iostream>
#include <vector>
#include <numeric>
#include <execution>

using namespace std;

// like accumulate but with execution policy

int main()
{
    vector<int> v{ 1,2,3,4,5,6,7,8 };
    cout << reduce(std::execution::par, v.begin(), v.end()) << endl;
    std::cout << "Hello World!\n";
}