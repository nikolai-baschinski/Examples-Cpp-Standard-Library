// The class template std::variant represents a type - safe union.
#include <iostream>
#include <variant>
#include <string>

using namespace std;

int main()
{

    std::variant<int, string> data;
    data = "Hallo!";
    cout << std::get<string>(data) << endl;

    data = 89;
    cout << std::get<int>(data) << endl;

    auto value = std::get_if<string>(&data);
    if(value)
        cout << std::get<string>(data) << endl;
    else
        cout << std::get<int>(data) << endl;

    std::cout << "Hello World!\n";
}