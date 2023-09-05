#include <iostream>
using namespace std;

int main() {
    // string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    int cars[5] = {1, 2, 3, 4, 5};
    for (int i : cars)
    {
        cout << i << endl;
    }
    cout << sizeof(cars)/sizeof(int);
    
}