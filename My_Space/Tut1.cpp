#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <stack>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

int count;
extern void printNumber();
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << a << b << c;
    short int A, B;
    
    short unsigned int a = 50000, b = 1001;
    A = a;
    B = b;
    cout << A << "   " << a << endl
         << "hello";
    cout << B << "   " << b << endl;
    
    ::count = 5;

    printNumber();

    for (;;)
    {
        cout << "hello" << endl;
    }
    string str = " HEllo";
    string* pstr;
    
    // cout<<abc;

    int j;
    for (int i = 0; i < 5; i++)
    {
        j = rand();
        cout << j << endl;
    }
    srand((unsigned)time(NULL));
    string str;
    getline(cin>>ws, str);
    cout << str;
    string str1 = "hello", str2 = "hllll";
    int j = str1.length();
    cout << "j is equal to " << j;

    return 0;
}