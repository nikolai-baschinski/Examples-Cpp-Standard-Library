#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{ 44,3,117,4,0,1,7,8 };

    for (int n : v)
        cout << n << " ";
    cout << endl;

    std::partition(v.begin(), v.end(), [](int value) {return value < 4;});
    for (int n : v)
        cout << n << " ";
    cout << endl;

    auto partition_point = std::partition_point(v.begin(), v.end(), [](int value) {return value < 4;});
    cout << "partition point at: " << *partition_point << endl;

    bool partitioned = std::is_partitioned(v.begin(), v.end(), [](int value) {return value < 4;});
    partitioned ? cout << "partitioned" : cout << "not partitioned";
    
}
