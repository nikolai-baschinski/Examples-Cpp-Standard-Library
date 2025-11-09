#include <iostream>
#include <set>

// std::set is an associative container that contains a sorted set of unique objects of type Key.
// Sorting is done using the key comparison function Compare.
// Search, removal, and insertion operations have logarithmic complexity.
// Sets are usually implemented as Red–black trees.

using namespace std;

int main()
{
    std::set<int> numbers = { 4, 1, 9, 1, 3 };

    for (int n : numbers)
        std::cout << n << " ";
    cout << endl;

    cout << numbers.contains(5) << endl;
    cout << numbers.contains(9) << endl;

    // search with logarithmic complexity
    numbers.find(78) != numbers.end() ? cout << "found \n" : cout << "not found \n";

    // descending traversing
    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it)
        std::cout << *it << " ";


}