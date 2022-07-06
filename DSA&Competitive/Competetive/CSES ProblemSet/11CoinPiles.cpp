#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int ttt;
    cin>>ttt;
    while(ttt--){
        ll a,b;
        cin>>a>>b;
        if((a + b) % 3 != 0){
            cout<<"NO"<<endl;
            continue;
        }
        if( max(a,b) > 2*min(a,b) ){
            cout <<"NO"<<endl;
            continue;
        }
        else cout<<"YES"<<endl;

    }
    return 0;
}