// Motivation for std::optional
// Often, in addition to the actual data, you want to know whether an operation was successful.
// Example: Reading from a file. Somewhere in the program, you need to manage the information about whether the
// read operation was successful, in addition to the user data. Often, you would use a boolean variable for this
// information. The `optional` data type solves this problem. It manages the user data and, additionally, a
// boolean value indicating whether the user data is present or not.

#include <iostream>
#include <optional>
#include <fstream>

using namespace std;

// In this version of the function, an empty string is returned if the file could not be read.
// What if the file was empty?
string ReadFile_1(string path)
{
    std::ifstream mystream(path);
    if (mystream) {
        string result;
        // read file
        mystream.close();
        return result;
    }
    return "";
}

// In this version, the status is returned via an Out variable.
string ReadFile_2(string path, bool& succeeded)
{
    std::ifstream mystream(path);
    if (mystream) {
        string result;
        // read file
        mystream.close();
        succeeded = true;
        return result;
    }
    succeeded = false;
    return "";
}

std::optional<std::string> ReadFile_3(string path)
{
    std::ifstream mystream(path);
    if (mystream) {
        string result;
        // read file
        mystream.close();
        return result;
    }

    return {};
}

int main()
{
    string data1 = ReadFile_1("data.dat");
    if (!data1.empty())
        cout << data1;

    bool result;
    string data2 = ReadFile_2("data.dat", result);
    if (result)
        cout << data2;

    auto data3 = ReadFile_3("data.dat");
    if (data3)
        cout << data3.value();

    std::cout << "Hello World!\n";
}
