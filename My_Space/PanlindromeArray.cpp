#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter the array\n";
    
    for( int i = 0 ; i < size ; i++ ){
        cin>>arr[i];
    }

    

   

    for (int i = 0; i < (size/2) ; i++)
    {
        cout<<arr[i]<<" == "<<arr[size - 1 - i]<<endl;
        if (arr[i] == arr[size - 1 - i])
        {
            continue;
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
        
    }
    cout<<"YES"<<endl;
    
    
return 0;
}