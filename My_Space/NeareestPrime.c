#include<stdio.h>

int isPrime(int x){
    int i = 0;
    if(x == 2 || x == 3)
    return 1;
    if(x == 0 || x == 1)
    return 0;

    for ( i = 2; i <= x/2; i++)
    {
        if(x%i == 0)
        return 0;
    }
    return 1;
    
}
int main(){

    int n = 100,np = 0,i,j;//np is nearest prime
    
    while(n!=(-1)){
        np = 0;
    if (n>100)
    {
        /* code */
        printf( "Out of bounds" );
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
    printf( "%d = %d\n",n,np );
    n--;
    }



return 0;
}