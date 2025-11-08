#include <iostream>
#include <deque>

// std::deque(double - ended queue) is an indexed sequence container that allows fast insertion and deletion
// at both its beginning and its end.In addition, insertion and deletion at either end of a deque
// never invalidates pointers or references to the rest of the elements.
// As opposed to std::vector, the elements of a deque are not stored contiguously :

// Why not simply use std::vector ?
// std::vector is ideal if you only insert or delete elements at the end.
// But inserting at the beginning is expensive(O(n)) because all elements have to be shifted.
// std::deque solves precisely this problem :
// No shifting of all the data when inserting at the beginning.
// Yet still provides fast direct access.

using namespace std;

int main()
{
    deque<int> deq{ 5,7,0,3,5,8 };
    for (auto& e : deq)
        cout << e << " ";
    cout << endl;

    deq.insert(deq.begin(), 4);
    for (auto& e : deq)
        cout << e << " ";
    cout << endl;

    deq.erase(deq.end() - 1);
    for (auto& e : deq)
        cout << e << " ";
    cout << endl;

    cout << deq[2] << endl;

    std::cout << "Hello World!\n";
}