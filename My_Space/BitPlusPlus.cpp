#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
    int n,x = 0;
    cin>>n;
    string str;
    for (int i = 0; i < n; i++)
    {
        cin>>str;
        if (str[0] == '-' || str[2] == '-')
        {
            x--;
        }
        else x++;
        
    }
    cout<<x;
    
return 0;
}