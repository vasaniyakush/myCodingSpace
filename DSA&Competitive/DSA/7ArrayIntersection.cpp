#include<bits/stdc++.h>
using namespace std;

void sort1(int *arr , int size){
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j + 1]){

                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            } 
        }
        
    }
    
}

void ArrayIntersection(int *ar1, int size1, int *ar2, int size2){
    sort1(ar1,size1);
    sort1(ar2,size2);


    for (int i = 0 , j = 0 ; i < size1 && j < size2; )
    {
        if(ar1[i] == ar2[j] ){
            cout<<ar1[i]<<" ";
            i++; j++;
        }
        else if (ar1[i] < ar2[j])
        {
            i++;
        }
        else {
            j++;
        }
    }
    
}

int main(){
int ttt;
cin>>ttt;
while(ttt--){
    int size1 = 0;
    cin>>size1;
    int ar1[size1];
    for( int i = 0 ; i < size1 ; i++ ){
        cin>>ar1[i];
        
    }
    // for( int i = 0 ; i < size1 ; i++ ){
    //     cout<<ar1[i]<<" ";
        
    // }
    // cout<<endl;
    int size2 = 0;
    cin>>size2;
    int ar2[size2];
    for( int i = 0 ; i < size2 ; i++ ){
        cin>>ar2[i];
    }
    // for( int i = 0 ; i < size2 ; i++ ){
    //     cout<<ar2[i]<< " ";
    // }   
    // cout<<endl;
    ArrayIntersection(ar1,size1,ar2,size2);
    cout<<endl;

}
return 0;
}