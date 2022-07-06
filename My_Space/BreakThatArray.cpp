#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

void armax(int* ptr , int size , int* indx , int* diff){
    int max , max2;
    if(ptr[0] > ptr[1]){
        max = ptr[0];
        max2 = ptr[1];
        *indx = 0;
        
    }
    else{
        max2 = ptr[0];
        max = ptr[1];
        *indx = 1;
    }
    for (int i = 2; i < size - 1; i++)
    {
        if (ptr[i] > max)
        {
            max2 = max;
            max = ptr[i];
            *indx = i;
        }
        else if(ptr[i] > max2){
            max2 = ptr[i];
        }
        
    }
    *diff = max - max2;

    
}

void archange(int* arr , int diff , int indx , int size){
    for (int i = size; i > indx + 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[indx + 1] = diff;
    arr[indx] -= diff;




} 


int main(){
    int size = 0, indx = 0 , diff = 0;
    cin>>size;
    size++;
    int arr[size];
    for( int i = 0 ; i < size - 1 ; i++ ){
        cin>>arr[i];
    }
    armax(arr, size , &indx , &diff);
    archange(arr, diff ,indx , size);
    

  
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
return 0;
}