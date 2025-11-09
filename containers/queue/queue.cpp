#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;
    q.push(1);
    q.push(4);
    q.push(7);

    cout << "front: " << q.front() << endl;
    cout << "back: " << q.back() << endl;

    q.pop();

    cout << "front: " << q.front() << endl;
    cout << "back: " << q.back() << endl;

    std::cout << "Hello World!\n";
}