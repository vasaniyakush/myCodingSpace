#include<bits/stdc++.h>
using namespace std;
int main(){
int ttt;
cin>>ttt;
while(ttt--){
    int n;
    cin>>n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int diff = -1;
    int mini = *min_element(arr,arr+n-1);
    int mini2 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<mini2 && arr[i] > mini)
        {
            mini2 = arr[i];
        }
        
    }
    
    cout<<mini2 - mini<<endl;
    
}
return 0;
}