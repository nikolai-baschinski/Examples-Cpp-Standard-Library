#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> v = { 3, 1, 4, 1, 5, 9, 2 };

    std::make_heap(v.begin(), v.end());

    for (int n : v) std::cout << n << " ";
    std::cout << std::endl;

    v.push_back(6);
    std::push_heap(v.begin(), v.end());
    for (int n : v) std::cout << n << " ";
    std::cout << std::endl;

    std::pop_heap(v.begin(), v.end());
    v.pop_back();

    for (int n : v) std::cout << n << " ";
    std::cout << std::endl;
}
