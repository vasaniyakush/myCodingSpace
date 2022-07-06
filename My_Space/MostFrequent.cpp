#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,num,max[2]={0,0};
    
    vector<int> arr(1000000,0);
    cin>>N;
    
    for (int i = 0; i < N; i++)
    {
        cin>>num;
        arr[num]++;
        //cout<<arr[num]<<endl;
        if(max[1] <= arr[num]){
            max[0] = num;
            max[1]= arr[num];
        }
       // cout<<max[0<<endl;
    }
    cout<<endl<<max[0];
    
}