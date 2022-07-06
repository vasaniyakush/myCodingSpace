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

    for (int i = 1; i < size - 1; i++)
    {
        int current = ar[i];
        int j = i - 1;
        while (j >= 0 && ar[j] > current)
        {
            ar[j + 1] = ar[j];
            j--;
        }
        ar[j + 1] = current;
    }
    for (auto x : ar)
    {
        cout << x << " ";
    }

    return 0;
}
//1 9 6 8
//1 9 9 8
