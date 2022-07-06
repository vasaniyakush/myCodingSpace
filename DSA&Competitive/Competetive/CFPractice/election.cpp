#include<bits/stdc++.h>
using namespace std;
int main(){
int ttt;
cin>>ttt;
while(ttt--){
    int a,b,c;
    cin>>a>>b>>c;
    int maxi = max(a,max(b,c));
    if (a> max(c,b))
    {
        cout<<0<<" ";
    }
    else cout<<max(b,c) - a + 1<<" ";
    if (b>max(a,c))
    {
        cout<<0<<" ";
    }
    else cout<<max(a,c) - b + 1<<" ";
    if (c>max(a,b))
    {
        cout<<0<<" ";
    }
    else cout<<max(a,b) - c + 1<<" ";
    cout<<endl;
}
return 0;
}