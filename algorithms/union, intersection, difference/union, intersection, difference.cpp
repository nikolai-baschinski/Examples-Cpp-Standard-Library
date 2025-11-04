#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void print(const vector<int>& v) {
    for (auto e : v)
        cout << e << " ";
    cout << endl;
}

int main()
{
    vector<int> v1{ 1,2,3,4 };
    vector<int> v2{4,5,6};
    vector<int> dest;

    std::set_union(v1.cbegin(), v1.cend(), v2.cbegin(), v2.cend(), std::back_inserter(dest));
    print(dest);

    dest.clear();
    std::set_intersection(v1.cbegin(), v1.cend(), v2.cbegin(), v2.cend(), std::back_inserter(dest));
    print(dest);

    dest.clear();
    std::set_difference(v1.cbegin(), v1.cend(), v2.cbegin(), v2.cend(), std::back_inserter(dest));
    print(dest);
    std::cout << "Hello World!\n";
}