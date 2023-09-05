#include <iostream>
using namespace std;

int main()
{
    bool ships[4][4] = {
        {0, 0, 0, 1},
        {0, 0, 0, 0},
        {1, 1, 0, 0},
        {0, 0, 0, 1}};

    int hits = 0;
    int numberOfTurns = 0;

    while (hits < 4)
    {
        int row, column;
        cout << "Selecting coordinates (x,y)" << endl;
        cin >> row;
        cin >> column;

        if (ships[row][column])
        {
            cout << "Bingo!" << endl;
            ships[row][column] = 0;
            hits++;
        }
        else
            cout << "Missed!" << endl;
        // Count how mant turns the player has taken
        numberOfTurns++;
    }
    cout << "Victory!" << endl;
    cout << "You won in " << numberOfTurns << " turns";
}