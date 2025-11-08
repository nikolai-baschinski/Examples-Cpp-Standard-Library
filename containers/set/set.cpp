#include <iostream>
#include <set>

// std::set is an associative container that contains a sorted set of unique objects of type Key.
// Sorting is done using a key comparison function

using namespace std;

int main()
{
    std::set<int> numbers = { 4, 1, 9, 1, 3 };

    for (int n : numbers)
        std::cout << n << " ";

    cout << endl;
    cout << numbers.contains(5) << endl;
    cout << numbers.contains(9) << endl;

    numbers.find(78) != numbers.end() ? cout << "found" : cout << "not found";
}