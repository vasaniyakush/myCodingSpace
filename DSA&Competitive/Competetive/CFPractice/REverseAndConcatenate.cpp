#include<bits/stdc++.h>
using namespace std;
bool palcheck(string &str, int const &n){
    int i = 0,  j = n - 1;
    while (i<j)
    {
        if(str[i++] != str[j--]) return false;
    }
    return true;
}

int  stringOpss(string &str , int k, int n){
    if(k == 0) return 1;
    static int count = 0;
    if(palcheck(str, n)){
        
        
        return 1;
    }else{
        n*=2;
        string rev = str;
        reverse(rev.begin(),rev.end());
        string temp1 =str + rev;
        string temp2 = rev + str;
        return stringOpss(temp1,k - 1,n) + stringOpss(temp2,k - 1,n);
    }
    return 0;

}
int main(){
int ttt;
cin>>ttt;
while(ttt--){
    string s;
    int n,k;
    cin>>n>>k>>s;
    int c = stringOpss(s,k,n);
    cout<<c<<"\n";
}
return 0;
}