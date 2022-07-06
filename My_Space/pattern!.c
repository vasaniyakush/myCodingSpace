#include<stdio.h>
#include<conio.h>
int main(){
    int x,y;
    scanf( "%d",&x);
    for(y = 0 ; x != 0 ;) {

        y = ( y * 10) + (x % 10);
        x = x / 10;

    }
    printf( "\n%d",y );
return(0);
}