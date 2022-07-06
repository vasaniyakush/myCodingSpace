#include<bits/stdc++.h>
using namespace std;
int main(){
    int i = 10;
    int *ptr = &i;
    int &j = *ptr;
    i = 100;
    // cout<<j;
//---------------------------------
    int *p = new int;
    *p = 10;

    delete p;
    // cout<<*p;

    int *par = new int[50];
    delete [] par;
    int  size = 10;
    // cin>>size ;
    int *parr2 = new int[size];
    int sum = 0;
    bool b = 0;

    for (int i = 0; i < size; i++)
    {
    //    cin>>parr2[i];
    }
    delete [] parr2;
    // cout<<b;
    
//-----------------------------------
    // const int A1=1,A2=1;
    // A1 = 10;
    // A2= 10;

//-----------------------------------
    int** ptr3 = new int*[10];

    for (int i = 0; i < 10; i++)
    {
        ptr3[i] = new int[20];
    }

    for (int i = 0; i < 10; i++)
    {
        delete [] ptr3[i];
    }
    delete [] ptr3;
    
    

return 0; 
}