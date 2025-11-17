#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    vector<int> v{ 1,2,3,4,5 };
    vector<int> results;
    partial_sum(v.begin(), v.end(), std::back_inserter(results));

    for (auto e : results)
        cout << e << endl;

    std::cout << "Hello World!\n";
}