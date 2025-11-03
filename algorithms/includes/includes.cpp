#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    // all vectors must be sorted!
    vector<int> v1{ 2,3,4,5,6,7,8,9 };
    vector<int> v2{ 4,5,6 };
    vector<int> v3{ 0,7,9 };

    cout << std::includes(v1.begin(), v1.end(), v2.begin(), v2.end()) << endl;
    cout << std::includes(v1.begin(), v1.end(), v3.begin(), v3.end()) << endl;
    
    return 0;
}