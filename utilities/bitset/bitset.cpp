#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    std::bitset<8> b1{0b01010101};

    cout << b1 << endl;
    
    b1.set();
    cout << "set: " << b1 << endl;
    b1.reset();
    cout << "reset: " << b1 << endl;

    std::bitset<8> b2{};

    if (b1 == b2)
        cout << "b1 is equale to b2" << endl;

    b2 = 0b00001110;
    cout << "bit with index 1 of b2 is: " << b2[1] << endl;

    return 1;
}
