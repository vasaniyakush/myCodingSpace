#include<iostream>
#include<cmath>
using namespace std;
#define int long long int
bool sumccheck(int &a1,int &b1,int &c1,int &n1){
    if((a1+b1+c1)==n1){
        return 1;

    }
    else{
        return 0;
    }
}

bool pythagorascheck(int &a1,int &b1,int &c1){
    if((c1*c1)==((a1*a1)+(b1*b1))){
        return 1;
    }
    else{
        return 0;
    }
}

signed main(){
    int a,b,c,n,t,abc,abcmax=-1;
    cin>>t;

    while(t--){
       
        cin>>n;
        if(n<4){ 
            cout<<"-1";
        }

        for( c=3 ; c<n ;c++ ){
            for( b=2;b<c;b++ ){
                for( a=1;a<b;a++ ){
                  //  cout<<"a="<<a<<"b="<<b<<"c="<<c<<endl;
                    if(sumccheck(a,b,c,n)&&pythagorascheck(a,b,c)){
                        abc=a*b*c;
                      //  cout<<abc<<endl;
                        if(abc>abcmax){
                            abcmax=abc;
                        }
                      //  cout<<abcmax<<endl;

                    }
                    if(a+b+c>n){
                        break;
                    }
                
                }

            
            }
    
        }
        cout<<abcmax<<endl;
         abcmax=-1;
    }
     
     

return 0;
}