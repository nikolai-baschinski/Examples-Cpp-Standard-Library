// remove and remove_if is used to implement the erase–remove idiom in C++
// https://en.wikipedia.org/wiki/Erase%E2%80%93remove_idiom

#include <algorithm>
#include <iostream>
#include <vector>

static void Print(const std::vector<int>& vec) {
    for (auto val : vec) {
        std::cout << val << ' ';
    }
    std::cout << '\n';
}

int main() {
    std::vector<int> v = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    Print(v);

    // Removes all elements with the value 5.
    v.erase(std::remove(v.begin(), v.end(), 5), v.end());
    Print(v);

    // Removes all odd numbers.
    v.erase(std::remove_if(v.begin(), v.end(), [](int val) { return val & 1; }), v.end());
    Print(v);
}
