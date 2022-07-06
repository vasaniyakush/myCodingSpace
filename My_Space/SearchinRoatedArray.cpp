#include<bits/stdc++.h>
using namespace std;

int binarySearch(int A[], int l, int h, int key){
    
    if (h >= l)
    {
        int mid = (l + h)/2;

        if (A[mid] == key)
        {
            return mid;
        }

        if (A[mid] > key)
        {
            return binarySearch(A, l, mid -1, key);
        }
        else return binarySearch(A, mid + 1, h, key);
    }
    return -1;
}

int findPivot(int A[], int l, int h){
    for(int i = l; i <= h ; i++ ){
        if(A[i] > A[i + 1]){
            return i;
        }
    }
    return -1;
}
int rotateSearch(int A[], int l, int h, int key){
    //complete the function here
    int pivot = findPivot(A, l, h);
    // cout<<"Pivot is :"<<pivot<<endl;
    if (pivot == -1)
    {
        return binarySearch(A, l, h, key);
    }
    else{
        // cout<<"A[pivot] = "<< A[pivot]<< endl;
        if (A[pivot] < key)
        {
            // cout<<"inside this 1"<<endl;
            return -1;
        }
        
        if (A[pivot] == key)
        {
            // cout<<"inside this 2"<<endl;

            return pivot;
        }
        if (A[l] <= key )
        {
            // cout<<"inside this 3"<<endl;

            return binarySearch(A, l, pivot - 1, key);
        }
        else{
            // cout<<"inside this 4"<<endl;

            return binarySearch(A, pivot + 1, h, key);
        }
    }
}

int main(){
    int A[] = {3,4,5,6,1,2};
    
    // cout<<binarySearch(A, 0, 5, 3);
    cout<< rotateSearch(A, 0, 5, 2);
return 0;
}