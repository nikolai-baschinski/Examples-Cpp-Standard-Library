#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> a{ 1, 2, 3 };
    std::vector<int> b{ 1, 2, 4 };

    bool result = std::lexicographical_compare(a.begin(), a.end(), b.begin(), b.end());

    std::cout << std::boolalpha << result << "\n"; // true, because 3 < 4

    // std::string overloads operators like <, >, == in a lexicographical manner
    std::string s1 = "abc";
    std::string s2 = "abd";

    if (s1 < s2)
        std::cout << "s1 comes before s2 in the dictionary\n";
}
