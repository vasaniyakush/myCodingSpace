#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int count = 1;
    int maxcount = 1;
    string s;
    cin>>s;
    int n = s.length();
    for (int i = 1; i < n; i++)
    {
        if(s[i] == s[i - 1]){
            count++;
        }
        else{
            count = 1;
        }
            maxcount = max(maxcount,count);
    }
    cout<<maxcount;
    

    return 0;
}