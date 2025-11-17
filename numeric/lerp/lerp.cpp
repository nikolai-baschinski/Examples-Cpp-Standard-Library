#include <iostream>
#include <cmath>

// lerp - linear interpolation/extrapolation

using namespace std;

int main()
{
    cout << lerp(10.0, 70.0, 0.5) << endl; // interpolation
    cout << lerp(10.0, 70.0, 1.5) << endl; // extrapolation

    std::cout << "Hello World!\n";
}