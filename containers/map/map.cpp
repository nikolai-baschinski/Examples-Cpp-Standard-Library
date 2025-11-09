#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> myMap{ {19, "Tom"}, {28, "Anna"}, {56, "Joe"} };

    for (const auto& [key, value] : myMap)
        cout << "key: " << key << ", value: " << value << endl;

    cout << myMap[19] << endl;

    cout << "count 28: " << myMap.count(28) << endl;

    myMap.insert({ 20, "Michael" });

    for (const auto& [key, value] : myMap)
        cout << "key: " << key << ", value: " << value << endl;

    std::cout << "Hello World!\n";
}
