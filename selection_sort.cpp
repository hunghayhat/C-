#include <bits/stdc++.h>>
using namespace std;

int main()
{
    int a[6] = {4, 6, 8, 1, 7, 9};
    int min_index, i;
    for (i = 0; i < 6; i++)
    {
        min_index = i;
        for (int j = i + 1; j < 6; ++j)
        {
            if (a[j] < a[min_index])
                min_index = j;
        }
        if (min_index != i)
        {
            int temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
        }
    }

    for (int x : a)
    {
        cout << x << "\n";
    }
    return 0;
}