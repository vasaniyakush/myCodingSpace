//VUVVLE SORT
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <stack>
#include <algorithm>
using namespace std;
int main()
{
    int size = 0;
    cin >> size;
    int ar[size];
    for (int i = 0; i < size; i++)
    {
        cin >> ar[i];
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                int tmp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = tmp;
            }
        }
    }

    for (auto x : ar)
    {
        cout << x << " ";
    }
    return 0;
}