#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    vector<int> v{3,7,90,1,0,-6};
    vector<int> result;

    std::adjacent_difference(v.begin(), v.end(), std::back_inserter(result));

    for (auto e : result)
        cout << e << endl;

    std::cout << "Hello World!\n";
}