#include<bits/stdc++.h>
using namespace std;
void swaP(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int size = 0;
    cin>>size;
    int arr[size];
    for( int i = 0 ; i < size ; i++ ){
        cin>>arr[i];
    }
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < 0)
        {
            while (arr[i - 1] > 0)
            {
                swaP(arr[i], arr[i - 1]);
                i != 0? i--: i = i;
            }
        }
    }

    for( int i = 0 ; i < size ; i++ ){
        cout<<arr[i]<<" ";
    }
    
    
return 0;
}