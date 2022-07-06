#include<stdio.h>
#include<conio.h>

int recursive_sum( int sum ){
    int num;
    printf( "Enter a number : " );
    scanf( "%d",&num);
    if( num != 0){
        sum += num;
        recursive_sum(sum);
    }
    else{
        return sum;
    }
}
int main(){
    int num,sum = 0;
   
    sum = recursive_sum( sum );
    printf( "sum is : %d",sum );
return(0);
}