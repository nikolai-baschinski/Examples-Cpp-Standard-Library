#include <iostream> 
#include <vector> 
#include <string> 
#include <algorithm>

// std::find can deal with custom types!
// But this types must overload the == operator

using namespace std;

class Person {
public:
    std::string name;
    int age;
    bool operator==(const Person& other) const {
        return this->age == other.age && this->name == other.name;
    }
};

int main()
{
    Person pers1{ "Tom", 30 };
    Person pers2{ "Anna", 54 };
    Person pers3{ "Tom", 30 };

    std::vector v{ pers1, pers2 };

    auto res = std::find(v.begin(), v.end(), pers3);
    res == v.end() ? std::cout << "not found" << endl : cout << "found" << endl;

    // adjacent_find
    // Find repeating elements in the container.
    std::vector vec1{ 1,2,3,7,9,4,4,3 };

    auto result = std::adjacent_find(vec1.begin(), vec1.end());
    result == vec1.end() ? std::cout << "not found" << endl : cout << "found: " << *result;

    return 0;
}
