#include <iostream>
#include <utility>

using namespace std;

std::pair<int, string> function(int val, string str)
{
    return std::make_pair(val, str);
}

int main()
{
    std::pair<std::string, int> p{ "Hello",42 };

    std::cout << "first: " << p.first << ", second: " << p.second << std::endl;

    // structred binding
    auto [val, str] = function(7, "Hi!");
    cout << val << ", " << str << endl;

    std::cout << "Hello World!\n";
}