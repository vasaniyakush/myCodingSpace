#include<iostream>

using namespace std;

bool palindrom(int val){
    int rev=0,r,org=val;   
   while(val!=0)    
  {    
     r=val%10;      
     rev=rev*10+r;    
     val/=10;    
  }  
         
    if(rev==org){
        //cout<<rev<<endl;
        return 1; 
    }
    else{
        return 0;
    }
        
    
    
}
int main(){
    int t, n, prd=1, maxprd=0, m1, m2, i, j;
    bool cndt;
    cin>>t;
    while(t--)
    {

        cin>>n;
        for( i = 99 ; i < 1000 ; i++ ){ 
            for( j = 99 ; j < 1000 ; j++ ){
                prd = i*j;
               
                if( prd < n ){
                    //code
                    cndt = palindrom(prd);
                    if( cndt ){
                        if( prd > maxprd ){
                           
                            m1 = i ; m2 = j;
                            maxprd = prd;
                            
                        }    
                           
                    } 
                }
                else{
                   break;
                }    
            }

        
        } 
      
        cout<<"max aplindrome "<<maxprd<<" = "<<m1<<" * "<<m2<<endl;
        
       
    }
return 0;

}