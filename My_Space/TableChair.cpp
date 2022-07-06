#include<iostream>
#define int long int
using namespace std;
signed main(){
    int m=1,r1=1,r2=1,r3=1,pr[4]={0,0,0,0},ch=1,prm=1000;   //a is the number of tables reqired so that its divisible 
                                //price and price minimum
    
    
    int T;cin>>T;
    while(T--){

        cin>>m>>r1>>r2>>r3;
        ch=m%4;
      //  cout<<"ch after mod "<<ch<<endl;
        switch (ch)
        {
        case 1:
            ch=3;
            break;

        case 2:
            ch=2;
            break;

        case 3:
            ch=1;
            break;      

       
        }
      //  cout<<"ch after switch "<<ch<<endl;
        if(ch==0){
            prm=0;
        }
        else if(ch==1){
            pr[0]=r1;
            pr[1]=pr[0];
            pr[2]=3*r3;
            pr[3]=r3+r2;
            prm=pr[0];
            for (int i = 0; i < 4; i++)
            {
                if(pr[i]<=prm){
                    prm=pr[i];

                }
            }
            

        }
        else if (ch==2)
        {
            pr[0]=2*r1;
            pr[1]=r2;
            pr[2]=2*r3;
            prm= pr[1]<pr[0]?(pr[1]<pr[2]?pr[1]:pr[2]):(pr[0]<pr[2]?pr[0]:pr[2]);

        }
        else if (ch==3 )
        {
            pr[0]=3*r1;
            pr[1]=pr[0];
            pr[2]=r3;
            pr[3]=r1+r2;
            prm=pr[0];
           for (int i = 0; i < 4; i++)
            {
                if(pr[i]<=prm){
                    prm=pr[i];
                }
            }
        }
        
        cout<<prm<<endl;
        




    }
return 0;
}