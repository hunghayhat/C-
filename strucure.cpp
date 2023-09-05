#include <iostream>
using namespace std;

int main()
{
    struct siu
    {
        int myNum;
        string myString;
    };

    siu ricon;
    ricon.myNum = 7;
    ricon.myString = "Phó goat";

    cout << ricon.myNum << endl;
    cout << ricon.myString << endl;

    string food = "pizza";  // food variable
    string &meal = food;    // reference to food

    cout << food << endl;
    cout << meal << endl;
}