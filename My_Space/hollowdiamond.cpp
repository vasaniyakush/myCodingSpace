#include <iostream>
using namespace std;
int main()
{
    //outer loop = number of rows
    //inner loop = number of coloumns
    //condition = pattern.

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j > ((10 / i) - 1) && j < (10 - (10 / i)))
                cout << " ";
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}