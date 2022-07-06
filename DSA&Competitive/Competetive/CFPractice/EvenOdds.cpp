#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n, k;
    cin>>n>>k;
    long long od = ceil(n/2.0);
    
    if(k > od){
        k-= od;
        cout<<2*k;
    }
    else{
        cout<<2*k - 1;
    }
return 0;
}