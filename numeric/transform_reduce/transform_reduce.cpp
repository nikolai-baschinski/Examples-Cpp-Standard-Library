#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    vector <int> v1{0,1,2,3};
    vector<int> v2{2,2,2,2};

    // overload 1
    // the forth parameter is the offset
    // sum = 0*2 + 1*2 + 2*2 + 3*2
    // sum = 0 + 2 + 4 + 6
    // sum = 12
    cout << transform_reduce(v1.begin(), v1.end(), v2.begin(), 0) << endl;

    auto transform = [](int a, int b) { return  a - b; };
    auto reduce = [](int x, int y) { return x * y; };
    // overload 3
    
    // 0-2 * 1-2 * 2-2 * 3-2
    // -2 * -1 * 0 * 1
    // rusult is 0
    cout << transform_reduce(v1.begin(), v1.end(), v2.begin(), 0, reduce, transform) << endl;
    
    return 1;
}
