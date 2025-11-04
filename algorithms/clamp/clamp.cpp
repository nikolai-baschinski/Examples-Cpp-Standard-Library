#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec{ -129, -128, -1, 0, 42, 127, 128, 255, 256 };
    for (const int v : vec)
        std::cout << v << " ";
    std::cout << "\n\n";

    std::cout << "[raw] "
        "[" << "- 127" << ',' << "127" << "] "
        "[0," << "255" << "]\n";


    for (const int v : vec)
        std::cout << std::setw(4) << v
        << std::setw(11) << std::clamp(v, -127, 127)
        << std::setw(8) << std::clamp(v, 0, 255) << '\n';
}