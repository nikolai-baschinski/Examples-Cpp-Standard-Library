#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    cout << std::min({ 1,2,7,9, }) << endl;
    cout << std::max({ 1,2,7,9, }) << endl;

    vector<int> v{ 3,4,7,10, };
    cout << *(std::min_element(v.begin(), v.end())) << endl;
    cout << *(std::max_element(v.begin(), v.end())) << endl;

    auto [min, max] = std::minmax({40,5,7,19});
    cout << "min: " << min << endl;
    cout << "max: " << max << endl;

    std::cout << "Hello World!\n";
}