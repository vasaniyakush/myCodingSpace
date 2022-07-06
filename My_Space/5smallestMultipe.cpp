#include<iostream>
using namespace std;

bool divi(int val){
    if(  val % 1 ==0 && val % 2 ==0 && val % 3 ==0 && val % 4 ==0 && val % 5 ==0 && val % 6 ==0 && val % 7 ==0 && val % 8 ==0 && val % 9 ==0 && val % 10 ==0 && val % 11 ==0 && val % 12 ==0 && val % 13 ==0 && val % 14 ==0 && val % 15 ==0 && val % 16 ==0 && val % 17 ==0 && val % 18 ==0 && val % 19 ==0 && val % 20 ==0)
    {        
        return 1; 
    }
    else{
        return 0;
    }

}

int main(){
    int i,ans;
    bool cndt=0;
for( i = 1 ; 1 ; i++ ){
    cndt=divi(i);
    if(cndt)
    {
        ans=i;
        break;
    }
    

}
cout<<"the smallest number is "<<ans<<endl;
return 0;
}