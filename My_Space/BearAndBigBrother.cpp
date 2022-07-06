#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
    int a,b,i,year=0;
    cin>>a>>b;
    
        for(i=1;a<=b;i++)
        {
            a=3*a;
            b=2*b;
            year++;
        }
    
   
    cout<<year;
return 0;

}