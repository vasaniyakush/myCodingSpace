#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000

void multiply(int arr[], int &n, int no){
    int product;
    int carry = 0;
    for(int i = 0; i < n ; i ++){
        product = arr[i] * no + carry;
        arr[i] = product%10;
        carry = product/10;
    }
    while(carry){
        arr[n++] = carry%10;
        carry/=10;
        
    }
}

void factorial(int Num){
    int *arr = new int[MAX];
    for(int i = 0; i < MAX; i++){
        arr[i] = 0;
    }
    arr[0] = 1;
    int n = 1;

    for(int i = 2; i <= Num ; i++ ){
        multiply(arr,n,i);
        // cout<<n<<" "<<i<<endl;
    }
    //print arr
    for(int i = n - 1; i >=0 ; i--){
        cout<<arr[i];
    }
}

int main(){
    int n ;
    cin>>n;
    factorial(n);
return 0;
}