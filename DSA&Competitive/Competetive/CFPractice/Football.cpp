#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.length();
    int c1 = 0, c2 = 0;
    bool flag = 1;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '1'){
            c1++;
            c2 = 0;
        }
        if(s[i] == '0'){
            c2++;
            c1 = 0;
        }
        if(c1 >=7 or c2 >= 7){
            cout<<"YES";
            flag = 0;
            break;
        }

    }
    if(flag) cout<<"NO";
    
return 0;
}