#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;
bool isPrime(int x){
    int i = 0;
    if(x == 2 || x == 3)
    return true;

    for ( i = 2; i <= x/2; i++)
    {
        if(x%i == 0)
        return false;
    }
    return true;
    
}
int main(){

    int n,np = 0,i,j;//np is nearest prime
    cout<<"enter a number :";
    cin>>n;
    if (n>100)
    {
        /* code */
        cout<<"out of bounds";
        return 0;
    }
    
    i=n;
    j=n;
    while(!np){
        if(isPrime(n)){
            np = n;
        }
        else if(isPrime(i)){
            np = i;
        }
        
        i++;
        

    }
    cout<<endl<<"the nearest prime is :"<<np;



return 0;
}