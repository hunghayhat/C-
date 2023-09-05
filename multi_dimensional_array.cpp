#include <iostream>
using namespace std;

int main(){
    // string letters[2][4] = {
    //     {"a", "b", "c", "d"},
    //     {"A", "B", "C", "D"}
    // };
    // cout << letters[1][3] << endl;

    // for (int i = 0; i < 2; i++)
    //     for (int j = 0; j < 4; j++) {
    //         cout << letters[i][j] << "\t";
    //     }
    // return 0;

    int trippleString[2][2][2] = {
        {
            {1, 2}, {3, 4}
        },
        {
            {5, 6}, {7, 8}
        }
    };
    cout << trippleString[1][0][1];
}