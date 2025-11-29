#include <iostream>
#include <vector>

// dynamic array
// heap allocated
// allocates more memory than it needs for optimization (capacity function)

using namespace std;

struct Data {
    int Value;
    Data(int value) : Value(value) {}
    Data(const Data& other) : Value(other.Value) {
        cout << "Copy constructor Data" << endl;
    }
};

int main()
{
    vector<int> vec{ 2,5,19 };
    for (auto e :vec)
    cout << e << endl;

    vec.push_back(8);
    for (auto e : vec)
        cout << e << " ";
    cout << "\n";

    // erase deletes elements from the vector
    vec.erase(vec.begin());
    for (auto e : vec)
        cout << e << " ";
    cout << "\n";

    vector<int> v;
    v.reserve(10); // allocation of memory for 10 elements
    for (int i = 0; i < 10; i++)
        v.push_back(i);

    for (auto e : v)
        cout << e << " ";
    cout << "\n";

    // avoid copying with emplace_back 
    vector<Data> vec_data;
    vec_data.reserve(2);
    for(int i = 0; i < 2; i++)
        vec_data.emplace_back(i);

    for (const auto& e : vec_data)
        cout << e.Value << " ";
    cout << "\n";
    
    return 1;
}