#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(const vector<int> v) {
    for (auto e : v)
        cout << e << " ";
    cout << endl;
}

int main()
{
    vector v{1,2,2,3,3,4,5,6,7,7,9};
    print(v);

    auto end = std::unique(v.begin(), v.end());
    v.erase(end, v.end());
    print(v);


    vector in_v{ 1,2,2,3,3,4,5,6,7,7,9 };
    vector<int> out_v;
    
    std::unique_copy(in_v.begin(), in_v.end(), std::back_inserter(out_v));
    print(out_v);

    std::cout << "Hello World!\n";
}
