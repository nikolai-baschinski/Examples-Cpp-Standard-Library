#pragma once
#include <cstddef> // size_t

class MyString {
private:
    char* data;
    size_t length;

public:
    MyString();
    MyString(const char* str);
    MyString(const MyString& other);
    MyString(MyString&& other) noexcept;

    MyString& operator=(const MyString& other);
    MyString& operator=(MyString&& other) noexcept;

    ~MyString();

    void print() const;
};
