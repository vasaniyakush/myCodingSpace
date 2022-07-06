/*
Using PMI - principal of mathematical induction
*/

#include <bits/stdc++.h>
using namespace std;
//-----------------------------------------
int EXP(int x, int n)
{
    if (n == 1)
    {
        return x;
    }
    int prt = EXP(x, n - 1);
    return x * prt;
}
//-----------------------------------------
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    int smallOutput1 = fib(n - 1);
    int smallOutput2 = fib(n - 2);

    return smallOutput1 + smallOutput2;
}
//-------------------------------------------

bool is_Sorted(int a[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (a[0] > a[1])
    {
        return false;
    }
    bool isSmallerSorted = is_Sorted(a + 1, size - 1);
    return isSmallerSorted;
}
//----------------------------------------------
int arsum(int a[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    int sum = a[0] + arsum(a + 1, size - 1);

    return sum;
}
//----------------------------------------------
int firstIndex(int a[], int size, int x)
{
    if (size == 0)
    {
        return -1;
    }
    if (a[0] == x)
    {
        return 0;
    }
    int ans = firstIndex(a + 1, size - 1, x);

    if (ans == -1)
    {
        return -1;
    }
    else
    {
        return ans + 1;
    }
}

//----------------------------------------------
int lastIndex(int a[], int size, int x)
{
    if (size == 0)
    {
        return -1;
    }
    int ans = lastIndex(a + 1, size - 1, x); //5 6 5 5 6

    if (ans == -1 && a[0] == x)
    {
        return 0;
    }
    if (ans == -1)
    {
        return -1;
    }
    else
    {
        return ans + 1;
    }
}

//----------------------------------------------
int Multiply(int m, int n)
{
    if (n == 0)
    {
        return 0;
    }
    int sum = Multiply(m, n - 1);
    return m + sum;
}
//----------------------------------------------
int NumberofZeros(int n)
{
    if (n < 10)
    {
        if (n == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int ans = NumberofZeros((n / 10));
    if (n % 10 == 0)
    {
        return ans + 1;
    }
    else
    {
        return ans;
    }
}
//----------------------------------------------
double Geosum(int k)
{
    if (k == 0)
    {
        return 1;
    }
    double ans = Geosum(k - 1);

    return (1.0 / pow(2, k)) + ans;
}
//----------------------------------------------
bool checkPalindromeH(string str, int start, int endd);

bool checkPalindrome(string str)
{
    bool PRb = checkPalindromeH(str, 0, str.length() - 1);
    return PRb;
}
//-----------------------------------------------------
bool checkPalindromeH(string str, int start, int endd)
{

    if (endd - start == 0 || endd - start == 1)
    {
        return true;
    }

    if (str[start] != str[endd])
    {
        return false;
    }
    bool smallPrb = checkPalindromeH(str, start + 1, endd - 1);

    return smallPrb;

}
//----------------------------------------------
int sumOfDigits(int n)
{
    if (n < 10)
    {
        return n;
    }
    int sum = sumOfDigits(n / 10);

    return n % 10 + sum;
}
//----------------------------------------------
string replacePi(char str[]){
    if (str[0] == '\0')
    {
        return ;
    }
    replacePi(str + 1);
    if (str[0] == 'p' && str[1] == 'i')
    {

        
        for (int i = strlen(str) + 2; i > 1; i--)
        {
            str[i] = str[i - 2];
        }
        
    }
    
    
    
    
}
//----------------------------------------------

int main1()
{
    int x, n;
    char a;
    // cout<<"Enter x , n \n";
    // cin>>x>>n;

    cout << EXP(3, 4) << endl;
    return 0;
}
//---------------------------
int main2()
{

    cout << fib(3) << endl;
    return 0;
}
//---------------------------
int main3()
{
    int arr[5] = {1, 2, 3, 4, 5};

    if (is_Sorted(arr, 5))
    {
        cout << "sorted" << endl;
    }
    else
    {
        cout << "not sorted" << endl;
    }
    return 0;
}
//--------------------------
int main4()
{
    int arr[4] = {1, 3, 4, 5};
    int sum = arsum(arr, 4);
    cout << "arsum = " << sum << endl;
    return 0;
}
//--------------------------
int main5()
{
    int arr[5] = {5, 6, 3, 5, 6};
    cout << "first index " << firstIndex(arr, 5, 6) << endl;
    cout << "last index " << lastIndex(arr, 5, 3) << endl;
    return 0;
}
//--------------------------
int main6()
{
    cout << endl
         << Multiply(4, 3) << endl;

    return 0;
}
//--------------------------
int main7()
{
    cout << endl
         << NumberofZeros(100100200) << endl;
    return 0;
}

//--------------------------
int main8()
{

    cout << endl
         << Geosum(3) << endl;
    return 0;
}
//--------------------------

int main()
{
    main1(); //power function
    main2(); //fibbonacci series
    main3(); //check if an array is sorted
    main4(); //array sum
    main5(); //first index
    main6(); //multiplication
    main7(); //number of zeroes
    main8(); //geometeric sum
    if (checkPalindrome("aujcba"))
        cout << endl
             << "palindrome" << endl;
    else
        cout << endl
             << "not palindrome" << endl;

    int sum = sumOfDigits(1244);
    cout<<endl<<sum<<endl;         

    return 0;
}