#include<stdio.h>
#include<conio.h>
int main(){
    int principle, rate , time;
    float simple_interest;
    

    printf( "Enter the value of principle : " );
    scanf( "%d",&principle);
    printf( "Enter the value of rate : " );
    scanf( "%d",&rate);
    printf( "Enter the value of time" );
    scanf( "%d",&time);
    simple_interest = (rate * time * principle)/100.0;

    printf( "The value of SI is %d", simple_interest );

return(0);
}