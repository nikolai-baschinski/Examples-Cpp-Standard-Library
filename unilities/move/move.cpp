#include <iostream>
#include "MyString.h"
#include <cstring>

using namespace std;

int main()
{
    std::string str1{ "ABCDF" };
    std::string str2;
    cout << "APP: before move str1: " << str1 << endl;
    cout << "APP: before move str2: " << str2 << endl;
    str2 = std::move(str1);
    cout << "APP: after move  str1: " << str1 << endl;
    cout << "APP: after move  str2: " << str2 << endl;

    MyString ms1;           // default constructor
    MyString ms2("Hello!"); // constructor with char*
    cout << "APP: ms1: ";
    ms1.print();
    cout << "APP: ms2: ";
    ms2.print();

    ms1 = ms2; // assignment copy
    cout << "APP: ms1 after assignment: ";
    ms1.print();
    cout << "APP: ms2: ";
    ms2.print();

    MyString ms3 = ms1; // copy

    MyString ms4;
    cout << "APP: ms3 before move: ";
    ms3.print();
    cout << "APP: ms4 before move: ";
    ms4.print();
    ms4 = std::move(ms3); // move assignment
    cout << "APP: ms3 after move: ";
    ms3.print();
    cout << "APP: ms4 after move: ";
    ms4.print();

    MyString ms5 = std::move(ms1);
    cout << "APP: ms1 after move: ";
    ms1.print();
    cout << "APP: ms5 after move: ";
    ms5.print();

    

}
