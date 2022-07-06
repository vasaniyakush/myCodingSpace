#include<bits/stdc++.h>
using namespace std;
void Reverse(int arr[], int l, int r){
    int i = l;
    int j = r;
    while(i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;j--;
    }
    
}

void Rotate(int arr[], int n, int d){
    Reverse(arr, 0, d - 1);
    Reverse(arr, d, n-1);
    Reverse(arr, 0, n - 1);
    
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt;
    cin>>ttt;
    while(ttt--){
        int n;
        cin>>n;
        int fin[n];
        int arr[n];
        for(int i = 0; i< n; i++){
            cin>>fin[i];
        }
        for (int i = n - 1; i > 0 ; i--)
        {   
            arr[i] = (fin[i] + 1) % i;
            Rotate(fin,i + 1, (fin[i]+ 1)% i);
        }
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";

        
        
        
    }
    return 0;
}