#include<iostream>
using namespace std;
#define int long int

bool isPrime(int val){
    for(int i =2; i<=val/2;i++ ){
        if(val%i==0)
        return 0;
    } 
    return 1;
}

signed main(){
    int n,t,prime;
    cin>>t;

    while(t--){
       int count=0;
        cin>>n;
        for( int j=2; count!=n;j++ ){
            if(isPrime(j)){
               count++;
            }

            if(count==n){
                prime=j;

            }
        
        }
        cout<<prime<<endl;
    }

return 0;
}