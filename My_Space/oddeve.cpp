#include<iostream>
using namespace std;
 #define int long long
int i=1e6,count,countmax=0,run,num;


signed countmaxf(int val){
    num=val;

    return num;
}

signed main(){

for(; i > 1 ; i--){                             //runs 10,00,000 to 1
    count=0;
    for(run = i ; run > 1  ; ){             //runs i to 1
    
    if(run%2==0){                               // if run even divide by two and counter++
        run=run/2;
        count++;
    }
    else                                        //else multiply 3, add one  counter++
    {
        run=(3*run)+1;
        count++;
    }

      
    }
    if(count>countmax){

        countmaxf(i);
        countmax=count;
    
    }
    


}
cout<<"the biggest number is: "<<num<<" with "<<countmax<<" moves"<<endl;
return 0;
}
