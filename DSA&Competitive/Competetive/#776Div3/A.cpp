#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define endl "\n"
signed main(){
    int ttt;
    cin>>ttt;
    while(ttt--){
        string s;
        cin>>s;
        char c;
        cin>>c;
        bool flag = false;
        int n = s.length();
        for(int i = 0 ; i < n;i+=2){
            if(s[i] == c){
                flag = true;
                break;
            }
        }
        if(flag){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
        
    }
    return 0;
}