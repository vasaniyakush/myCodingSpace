#include <bits/stdc++.h>

using namespace std;
signed main()
{
    string a;
    long sum = 0, store = 0, j = 0, cnvt; //cnvt converts char to int
    getline(cin, a);
    for (long i = (a.length() - 1); i >= 0; i--)
    {
        char ch = a[i];

        if (!isspace(a[i]))
        {
            cnvt = int(ch) - 48;

            store += cnvt * round(pow(10, j));

            j++;
        }
        if (isspace(a[i]) || i == 0)
        {
            sum += store;

            store = 0;

            j = 0;
        }
    }
    cout << "sum is " << sum;

    return 0;
}