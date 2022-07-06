#include<iostream>
using namespace std;

int main(){
    long long int n;
    int ct,c=ct,d,l;       //c is a fake variable  ct is total cats
    cin>>n;

    {
     for(int i=1;i<=n;i++)
         {
             cin>>ct>>d>>l;
             c = ct;
                        
             for(int a=d;a>0 && c>0;--a)
             {
                c=c-2;
                       
                if (c<=0)
                {
                    c = 0;
                        
                    break;
                }
                
              }

              if(l%4==0)    
              {
                  if(l>=((d+c)*4) && l<=((d+ct)*4))
                  {
                        cout<<"yes"<<endl;
                  }
              
                 else{
                       cout<<"no"<<endl;
                     }
            } else{
                       cout<<"no"<<endl;
                     }
         }
    }
}