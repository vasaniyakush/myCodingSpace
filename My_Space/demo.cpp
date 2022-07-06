#include<iostream>
#include<cmath>
#include<iomanip> // fixed //setprecision()
#define int long int
using namespace std;
signed main()
{
    
    int num;
    cin>>num;

    int digit = 0;

    for (int i = 1; i <= num; i++)
    {
        digit = digit + log10(i) + 1;
    }
    cout<<digit;
    return 0;
}