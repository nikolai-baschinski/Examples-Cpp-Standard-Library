#include <iostream>
#include <forward_list>

// std::forward_list is a container that supports fast insertion and removal of elements
// from anywhere in the container.Fast random access is not supported.
// It is implemented as a singly - linked list.Compared to std::list this
// container provides more space efficient storage when bidirectional iteration is not needed.

using namespace std;

int main()
{
    forward_list<int> flist{ 1,8,0,3 };
    flist.push_front(27);

    for (const auto& e : flist)
        cout << e << " ";
    cout << endl;
    std::cout << "Hello World!\n";
}