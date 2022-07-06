#include<iostream>
using namespace std;
int main(){

    int t,n,move;
    cout<<"enter test cases"<<endl;
    cin>>t;
while(t--){
    move=0;
    cout<<"enter 'n'"<<endl;
    cin>>n;
    re:
    for(int i=(n-1) ;i>1  ;i-- ){
        if(n%i==0){
            n=(n/i);
            move++;
            goto re;
        }
        
    }
    if(n!=1){
            n--; 
            move++;
            goto re;
    }
       
    cout<<"number of moves: ";
    cout<<move<<endl;

}
return 0;
}