// any can store any value
// for less than 4 bytes it stores the data into a union
// for more than 4 bytes it allocates heap memory

#include <iostream>
#include <any>
#include <string>

using namespace std;

int main()
{
    std::any a;
    a = "Hallo"; // const char pointer
    cout << std::any_cast<const char*>(a) << endl;

    a = 2;
    cout << std::any_cast<int>(a) << endl;


    std::cout << "Hello World!\n";
}