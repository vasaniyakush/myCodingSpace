#include <bits/stdc++.h>
using namespace std;
int duplicateInArray(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    int sum2 = ((size - 2) * (size - 1)) / 2;
    return sum - sum2;
}
int main()
{
    int ttt;
    cin >> ttt;
    while (ttt--)
    {
        int size = 0;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        cout<<duplicateInArray(arr,size)<<endl;
    }


    return 0;
}