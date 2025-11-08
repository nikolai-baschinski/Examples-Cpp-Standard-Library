#include <iostream>
#include <span>
#include <vector>
#include <array>

// span replaces the classic combination (T*, size_t) 

void print(std::span<int> values) {
    for (int v : values)
        std::cout << v << " ";
    std::cout << '\n';
}

int main() {
    std::vector<int> vec{ 1, 2, 3, 4, 5 };
    int arr[] = { 10, 20, 30, 40, 50 };
    std::array<int, 3> std_arr{ 1, 2, 3 };

    print(vec);
    print(arr);
    print(std_arr);

}