// erase is not from <algorithm> but from <vector>, but behaves like an algorithm

#include <iostream>
#include <vector>

using namespace std;

void print(const vector<string>& v) {
    for (auto e : v)
        cout << e << " ";
    cout << endl;
}

int main()
{
    vector<string> names{ "Elon", "Jeff", "Bill", "Marc", "Donald" };
    print(names);

    std::erase(names, "Elon");
    print(names);

    std::erase_if(names, [](string name) {return name.length() > 4;});
    print(names);

    std::cout << "Hello World!\n";
}