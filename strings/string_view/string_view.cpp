#include <iostream>
#include <string_view>

using namespace std;

// string_view contains just a pointer. Calling by is not expensive.
static void printLine(string_view str_v) {
    cout << str_v << endl;
}

int main()
{
    string str{ "hallo string_view"};
    string_view str_v{ "hallo string_view" };

    cout << "sizeof str  : " << sizeof(str) << endl;
    cout << "sizeof str_v: " << sizeof(str_v) << endl;

    printLine(str_v);

    std::cout << "Hello World!\n";
}