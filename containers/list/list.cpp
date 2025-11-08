#include <iostream>
#include <list>

// std::list is a container that supports constant time insertion and removal
// of elements from anywhere in the container, because it is implemented as a
// doubly-linked list

using namespace std;

int main()
{
    list<int> myList;

    myList.push_back(3);
    myList.push_back(8);

    for (auto e : myList)
        cout << e << " ";
    cout << endl;

    myList.insert(myList.begin(), 11);
    for (auto e : myList)
        cout << e << " ";
    cout << endl;

    std::cout << "Hello World!\n";
}