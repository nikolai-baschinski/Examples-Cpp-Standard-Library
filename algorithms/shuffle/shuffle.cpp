#include <algorithm>
#include <iostream>
#include <iterator>
#include <random>
#include <vector>

using namespace std;

void print(const vector<int> v) {
    for (auto e : v)
        cout << e << " ";
    cout << endl;
}

int main()
{
    std::vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    print(v);

    std::random_device rd;
    std::mt19937 g(rd());

    std::shuffle(v.begin(), v.end(), g);
    print(v);

    std::shuffle(v.begin(), v.end(), g);
    print(v); 
}