#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main()
{
    vector<int> v1{ 1,3,-9 };
    vector<int> v2{ -1,5,0 };

    // sum = 1*(-1) + 3*5 + (-9)*0
    // sum = -1 + 15 + 0
    // sum = 14
    int sum = inner_product(v1.begin(), v1.end(), v2.begin(), 0);

    std::cout << sum << endl;;
}
