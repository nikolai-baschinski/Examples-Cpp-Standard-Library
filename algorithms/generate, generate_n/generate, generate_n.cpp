#include <iostream>
#include <algorithm>
#include <vector>
#include <random>

using namespace std;

// Functor
struct Random_Int {
    int start;
    int end;
    std::mt19937 engine;
    std::uniform_int_distribution<int> dist;
    Random_Int(int start, int end) : start(start), end(end), engine(std::random_device{}()), dist(start, end) {}
    int operator()() {
        return dist(engine);
    }
};

int main()
{
    vector<int> v1(10);

    generate(v1.begin(), v1.end(), [n = 0]() mutable { return n++; });
    for (int e : v1)
        cout << e << " ";
    cout << '\n';

    // generate random values using Functor Random_Int
    generate(v1.begin(), v1.end(), Random_Int(0, 100));
    for (int e : v1)
        cout << e << " ";
    cout << '\n';
     
    generate_n(v1.begin(), 5, [](){return 0;});
    for (int e : v1)
        cout << e << " ";
    cout << '\n';


    std::cout << "Hello World!\n";
}