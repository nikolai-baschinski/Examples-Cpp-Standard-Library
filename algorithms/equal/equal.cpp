
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector v1{ 1,2,3 };
    vector v2{ 1,2,4 };

    auto rv = equal(v1.begin(), v1.end(), v2.begin());

    rv ? cout << "equal" : cout << "unequal";
    
    std::cout << "\nHello World!\n";
}
