#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int arr[n];
    int count = 1;
    int maxc = 1;
    for(int i = 0; i< n ; i++){
        cin>>arr[i];
    }
    for(int i = 1; i< n; i++){
        if(arr[i] >= arr[i - 1]){
            count++;
        }else{
            count = 1;
        }
        maxc = max(maxc,count);
    }
    cout<<maxc;

    return 0;
}