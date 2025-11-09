#include <iostream>
#include <unordered_set>

// std::unordered_set is an associative container that contains a set of unique
// objects of type Key.Search, insertion, and removal have average constant - time complexity.

// Internally, the elements are not sorted in any particular order, but organized into buckets.
// Which bucket an element is placed into depends entirely on the hash of its value.
// This allows fast access to individual elements, since once a hash is computed,
// it refers to the exact bucket the element is placed into.

using namespace std;

int main()
{
    unordered_set<int> s{3,6,8,18,10};

    for (auto e : s)
        cout << e << " ";
    cout << endl;

    cout << "bucket_count: " << s.bucket_count() << endl;
    cout << "load_factor: " << s.load_factor() << endl;
    std::cout << "Hello World!\n";
}