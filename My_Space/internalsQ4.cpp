#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
    int m = 0,i,j,min,cndt=1;

    cout<<"Enter the size of first array A :";
    cin>>m;
    cout<<endl;
    int A[m];
    for(  i = 0 ; i < m ; i++ ){
        cout<<"Enter the element "<<i+1<<" of the array :";
        cin>>A[i];
        cout<<endl;
    }


    int n = 0;
    cout<<"Enter the size of second array B :";
    cin>>n;
    cout<<endl;
    int B[n];
    for(  i = 0 ; i < n ; i++ ){
        cout<<"Enter the element "<<i+1<<" of the array :";
        cin>>B[i];
        cout<<endl;
    }
 
 
    cout<<"Array A is :"<<endl;
    for ( i = 0; i < m; i++)
    {
        cout<<A[i]<<"\t";
    }

    cout<<endl<<"Array B is :"<<endl;
    for ( i = 0; i < m; i++)
    {
        cout<<B[i]<<"\t";
    }
    
   
    for( i = 0 ; i < m ;i++){
        for ( j = 0; j < n; j++)
        {
            if(A[i] == B[j]){
                break;
            }
        }
        if(j == n){
            if(cndt){
                min = A[i];
            }
            cndt = 0;
            if (A[i] < min)
            {
                min = A[i];
            }
        }
    }
    if (cndt)
    {
        cout<<endl<<"NO";
    }
    else
    {
        cout<<endl<<"The min is "<<min;
    }
    
    

return 0;
}