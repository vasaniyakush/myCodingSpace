#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <stack>
#include <algorithm>
using namespace std;
int main()
{
    int n, num, last = 0, count = 0;
    cin >> n;

    while (n--)
    {

        cin >> num;
        if (num != last)
        {
            count++;
        }
        last = num;
    }
    cout << count;

    return 0;
}

//1 3 2
//| | |
//1 2 3

//1  3  2
//|  |  |
//1  2  3

//
//
//
