#include<bits/stdc++.h>
using namespace std;

void Rotatestr(string &str, int &n , int i){
    for ( i = 0; i < n; i++)
    {
        str[i] = str[i + 1];
    }
    n--;
    
}
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == str[i + 1])
        {
            count++;
            Rotatestr(str,n,i + 1);
            i--;
        }
        
    }
    cout<<count;
    

return 0;
}

// RRGBBRGRG