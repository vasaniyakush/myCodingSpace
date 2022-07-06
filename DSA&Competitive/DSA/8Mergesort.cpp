#include<bits/stdc++.h>
using namespace std;

void Merge(int arr[], int l, int mid, int r){
    int size1 = mid - l + 1;
    int size2 = r - mid;
    int *subarrleft = new int[size1];
    int *subarrright = new int[size2];

    for (int i = 0; i < size1; i++)
    {
        subarrleft[i] = arr[l + i];
    }
    for (int i = 0; i < size2; i++)
    {
        subarrright[i] = arr[mid + 1 + i];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while (i < size1 && j < size2)
    {
        if (subarrleft[i] < subarrright[j])
        {
            arr[k] = subarrleft[i];
            i++;k++;
        }
        else{
            arr[k] = subarrright[j];
            j++;k++;
        }
    }
    while (i < size1)
    {
        arr[k] = subarrleft[i];
        i++;k++;
    }
    while (j < size2)
    {
        arr[k] = subarrright[j];
        j++;k++;
    }
}

void mergeSort(int arr[] , int s ,int e){
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    Merge(arr,s, mid, e);
}

int main(){
    int *arr { new int[8]{7,5,3,1,8,6,2,4}};
    mergeSort(arr,0,7);
    for (int i = 0; i < 8; i++)
    {
        cout<<arr[i];
    }
    
return 0;
}