#include<bits/stdc++.h>
using namespace std;

//method    3
int Unique_element3(int arr[] , int size){
    int unique = arr[0];
    for (int i = 1; i < size; i++)
    {
        unique = unique ^ arr[i];
    }
    return unique;
    
}

//method    2
int Unique_element2(int arr[] , int size){
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
            
        }
        
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    for (int i = 0; i < size; i+=2)
    {
        if (arr[i] != arr[i + 1])
        {
            return arr[i];
        }
        
        
    }
    return -1;
    
    
}

//method    1
int Unique_element1(int arr[] , int size){
    int j;
    for (int i = 0; i < size ; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (j == i)
            {
                /* code */
                continue;
            }
            
            if (arr[j] == arr[i])
            {
                break;
            }
            
        }
        if (j == size)
        {
            return arr[i];
        }
        
        
    }
    return -1;
    
}

int main(){
    int arr1[7] = {4,3,4,3,6,0,6}; // 0
    int arr2[7] = {0,3,4,3,4,0,6}; // 6 
    int arr3[7] = {0,3,6,3,4,0,6}; // 4
    int arr4[7] = {1,3,6,3,1,1,6}; // -1
    cout<<Unique_element1(arr1 , 7)<<endl;
    cout<<Unique_element1(arr2 , 7)<<endl;
    cout<<Unique_element1(arr3 , 7)<<endl;
    cout<<Unique_element1(arr4 , 7)<<endl<<endl;
    int barr1[7] = {4,3,4,3,6,0,6}; // 0
    int barr2[7] = {0,3,4,3,4,0,6}; // 6 
    int barr3[7] = {0,3,6,3,4,0,6}; // 4
    int barr4[7] = {1,3,6,3,1,1,6}; // 1
    cout<<Unique_element2(barr1 , 7)<<endl;
    cout<<Unique_element2(barr2 , 7)<<endl;
    cout<<Unique_element2(barr3 , 7)<<endl;
    cout<<Unique_element2(barr4 , 7)<<endl<<endl;
    int carr1[7] = {4,3,4,3,6,0,6}; // 0
    int carr2[7] = {0,3,4,3,4,0,6}; // 6 
    int carr3[7] = {0,3,6,3,4,0,6}; // 4
    int carr4[7] = {1,3,6,3,1,1,6}; // 1
    cout<<Unique_element3(carr1 , 7)<<endl;
    cout<<Unique_element3(carr2 , 7)<<endl;
    cout<<Unique_element3(carr3 , 7)<<endl;
    cout<<Unique_element3(carr4 , 7)<<endl<<endl;


return 0;
}