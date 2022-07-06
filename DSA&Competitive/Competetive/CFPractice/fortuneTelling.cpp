#include<bits/stdc++.h>
using namespace std;
int main(){
    int ttt;
    cin>>ttt;
    while(ttt--){
        long long n,x,y;
        cin>>n>>x>>y;
        long long sum = 0;
        long long num;
        while(n --){
            cin>>num;
            sum +=num;
        }
        if((sum + x + y)%2 == 0){
            cout<<"Alice\n";
        }else{
            cout<<"Bob\n";
        }
    }
    return 0;
}