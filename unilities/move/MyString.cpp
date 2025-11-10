#include "MyString.h"
#include <iostream>
#include <cstring>

MyString::MyString() : data(nullptr), length(0) {
    std::cout << "CLASS: Default constructor MyString\n";
}

MyString::MyString(const char* str) {
    std::cout << "CLASS: Constuctor MyString from const char*\n";
    if (str) {
        length = std::strlen(str);
        data = new char[length + 1];
        std::strcpy(data, str);
    } else {
        length = 0;
        data = nullptr;
    }
}

MyString::MyString(const MyString& other) {
    std::cout << "CLASS: Copy constructor MyString\n";
    length = other.length;
    if (other.data != nullptr) {
        data = new char[length + 1];
        std::strcpy(data, other.data);
    } else {
        data = nullptr;
    }
}

MyString::MyString(MyString&& other) noexcept {
    std::cout << "CLASS: Move constuctor MyString\n";
    data = other.data;
    length = other.length;
    other.data = nullptr;
    other.length = 0;
}

MyString& MyString::operator=(const MyString& other) {
    std::cout << "CLASS: Copy assignment MyString\n";
    if (this != &other) {
        delete[] this->data;
        this->length = other.length;
        if (other.data) {
            this->data = new char[length + 1];
            std::strcpy(this->data, other.data);
        } else {
            data = nullptr;
        }
    }
    return *this;
}

MyString& MyString::operator=(MyString&& other) noexcept {
    std::cout << "CLASS: Move assignment MyString\n";
    if (this != &other) {
        delete[] data;
        data = other.data;
        length = other.length;
        other.data = nullptr;
        other.length = 0;
    }
    return *this;
}

MyString::~MyString() {
    std::cout << "CLASS: Destructor MyString\n";
    delete[] data;
}

void MyString::print() const {
    if (data)
        std::cout << data << "\n";
    else
        std::cout << "(empty)\n";
}
