#include<iostream>

using namespace std;
int main(){
int c,d,l,lmin,lmax;
int t;
cin>>t;

while(t--){

    cin>>c>>d>>l;
    if (l % 4 != 0)
    {
        cout<<"no"<<endl;
        continue;
    }
    else{
        l/=4;
        
        if (c > 2*d)    
        {
            lmin = d + (c - (2*d));
        }
        else{
            lmin = d;
        }

        lmax = c+d;

        if (l <= lmax && l >= lmin )
        {
            cout<<"yes"<<endl;
        }
        else cout<<"no"<<endl;

    }
    
}
return 0;
}