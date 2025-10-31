#include <iostream>
#include <vector>
#include <algorithm>

int main()
{

    std::vector v1{ 1,2,3,4 };
    std::vector v2{ 1,0,3,4 };

    auto [it1, it2] = std::mismatch(v1.begin(), v1.end(), v2.begin());

    if (it1 != v1.end() && it2 != v2.end()) {
        std::cout << "First mismatch at position: " << *it1 << " with content " << *it2 << "\n";
    } else {
        std::cout << "Both vectors are identical!\n";
    }
}
