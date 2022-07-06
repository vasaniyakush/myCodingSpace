#include<bits/stdc++.h>
using namespace std;
void Reverse(int arr[], int l, int r){
    int i = l;
    int j = r;
    while(i <= j){
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
    int arr[7] = {4,6,3,7,9,0,2};
    Rotate(arr, 7, 3);

    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i];
    }
    
    

return 0;
}