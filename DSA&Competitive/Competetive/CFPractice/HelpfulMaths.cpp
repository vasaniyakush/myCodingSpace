#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1;
    cin>>str1;
    int len = str1.length();
    int lenor = (str1.length() - 1)/2;
    
    sort(str1.begin(),str1.end());
    // cout<<str1;
    cout<<str1[lenor];
    for (int i = lenor + 1; i < len; i++)
    {
        cout<<"+"<<str1[i];
    }
    
   
    
    
return 0;
}