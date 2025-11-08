#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_set<int> s{3,6,8,18,10};

    for (auto e : s)
        cout << e << " ";

    cout << s.bucket_count() << endl;
    cout << s.load_factor() << endl;
    std::cout << "Hello World!\n";
}