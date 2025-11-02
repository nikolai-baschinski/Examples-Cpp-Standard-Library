#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

template <class container>
void print(const container& v) {
    for (auto e : v)
        cout << e << " ";
    cout << endl;
}

int main()
{
    vector<int> vec{-89, 56, 11, -10, 7, 9, 762};
    list<int> out;

    std::sample(vec.begin(), vec.end(), std::back_inserter(out), 7, std::mt19937{ std::random_device{}() });
    print(out);
    out.clear();
    std::sample(vec.begin(), vec.end(), std::back_inserter(out), 2, std::mt19937{ std::random_device{}() });
    print(out);
    out.clear();
    std::sample(vec.begin(), vec.end(), std::back_inserter(out), 5, std::mt19937{ std::random_device{}() });
    print(out);
    out.clear();
    std::sample(vec.begin(), vec.end(), std::back_inserter(out), 30, std::mt19937{ std::random_device{}() });
    print(out);

    std::cout << "Hello World!\n";
}
