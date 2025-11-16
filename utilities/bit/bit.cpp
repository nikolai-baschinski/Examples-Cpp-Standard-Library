#include <iostream>
#include <bitset>
#include <bit>

using namespace std;

int main()
{
    unsigned int val{ 256 };

    if (std::has_single_bit(val))
        cout << "has_signle_value with 256: TRUE" << endl;

    unsigned int val2{ 0b00001010 };
    bitset<8> val2_ceil = std::bit_ceil(val2);
    cout << val2_ceil << endl;

    bitset<8> val2_floor = std::bit_floor(val2);
    cout << val2_floor << endl;
    
    cout << std::rotl(val, 1) << endl;
    cout << std::rotr(val, 2) << endl;
    
    return 1;
}