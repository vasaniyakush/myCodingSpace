#include <bits/stdc++.h> 
using namespace std;
#define int long long

int sumofsqf(int val){
    int sum=0,j=0;
   sum =  (val * (val + 1) * (2 * val + 1)) / 6; 
    return sum;

}

int sqofsumf(int val){
    int sum=0,j=0;
     sum=(val*(val+1))/2;
    return sum*sum;

}

signed main(){
int i,sqofsum=0,sumofsq=0,ad;
int t;

while(t--){
    cin>>i;
    sqofsum=sqofsumf(i);
    sumofsq=sumofsqf(i);
    ad=abs(sqofsum-sumofsq);
    cout<<i<<" = "<<ad<<endl;
    i--;
}

return 0;
}