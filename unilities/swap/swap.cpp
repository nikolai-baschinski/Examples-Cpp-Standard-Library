#include <iostream>
#include <string>

using namespace std;

class Person {
    int age=0;
    string name;
public:    
    Person(int param_age, string param_name) : age(param_age), name(param_name) {}
    void print() const {
        cout << this->name << ", " << age <<  endl;
    }
};

int main()
{
    int arr[2]{3,4};
    cout << arr[0] << " " << arr[1] << endl;
    std::swap(arr[0], arr[1]);
    cout << arr[0] << " " << arr[1] << endl;

    Person* pers1 = new Person(18, "Tom");
    Person* pers2 = new Person(76, "Anna");
    pers1->print();
    pers2->print();

    std::swap(pers1, pers2);
    
    pers1->print();
    pers2->print();

    std::cout << "Hello World!\n";
}