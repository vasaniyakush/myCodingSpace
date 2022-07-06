#include<bits/stdc++.h>
using namespace std;

class Array{
    public:
    int a[5] ;
    int b[5] ;
    int c[10];
    Array(){
        for (int i = 0; i < 5; i++)
        {
            a[i] = i;
            b[i] = i;
        }
    }
    void merge1(){

        for (int i = 0; i < 5; i++)
        {
            c[i] = a[i];
        }
        for (int i = 5; i < 5+5; i++)
        {
            c[i] = b[i-5];
        }
    }
    void printA(){
        cout<<"Array a :\n";
        for (int i = 0; i < 5; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\nArray b :\n";
        for (int i = 0; i < 5; i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<"\nArray c :\n";
        for (int i = 0; i < 10; i++)
        {
            cout<<c[i]<<" ";
        }
        
    }
};
int main(){
    Array a1;
    a1.merge1();
    a1.printA();
return 0;
}