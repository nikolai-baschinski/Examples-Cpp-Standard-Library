#include <iostream>
#include <string>
#include <locale>
#include <io.h>      // für _setmode
#include <fcntl.h>   // für O_TEXT, O_BINARY, _O_U16TEXT usw.


using namespace std;

int main()
{
    string str1{ "Hello String"};
    cout << "std::string: " << str1 << endl;

    cout << "size: " << str1.size() << endl;
    cout << "length: " << str1.length() << endl;
    cout << "capacity: " << str1.capacity() << endl;

    str1.shrink_to_fit();
    cout << "capacity after shrink_to_fit: " << str1.capacity() << endl;

    str1 += " ABC";
    cout << str1 << endl;

    cout << "Output as C string (c_str()): " << str1.c_str() << endl;
    cout << "Output as data()): " << str1.c_str() << endl;
    const char* data = str1.data();
    cout << data[0] << data[1] << endl;

    cout << "index ABC: " << str1.find("ABC") << endl;


    int modeMemory = _setmode(_fileno(stdout), _O_U16TEXT); // set the output mode for the stdout
    // wout for wstring!
    wstring wstr{L"Привет!"};
    wcout << L"std::wstring: " << wstr << endl;
    (void)_setmode(_fileno(stdout), modeMemory); // reset stdout


}