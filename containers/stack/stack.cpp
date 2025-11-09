#include <stack>
#include <iostream>

using namespace std;

int main()
{
    stack<int> myStack;

    myStack.push(1);
    myStack.push(4);
    myStack.push(6);

    cout << myStack.top() << endl;

    myStack.pop();

    cout << myStack.top() << endl;

    std::cout << "Hello World!\n";
}
