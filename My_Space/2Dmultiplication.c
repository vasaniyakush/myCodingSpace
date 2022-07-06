#include<stdio.h>
#include<conio.h>
int main(){
    int sum = 0,i,j,t;
    int A[3][4];
    int B[4][2];

    int C[3][2];

    printf( "Enter the 3 x 4 array\n" );

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            scanf("%d",&A[i][j]);
        }
        printf( "\n\n" );
    }
    
    printf( "enter the 4 x 2 array\n" );
    
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            scanf("%d",&B[i][j]);
        }
        printf( "\n\n" );
    }

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            for( t = 0;t < 4;t++){
                sum += (A[i][t]*B[t][j]);
            }
            C[i][j] = sum;
            sum = 0;
        }
        
    }

    printf( "Array A: \n" );
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf( "%d\t",A[i][j] );
        }
        printf( "\n" );
    }
    printf( "Array B: \n" );
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf( "%d\t",B[i][j] );
        }
        printf( "\n" );
    }

    printf( "The product AB is\n" );
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf( "%d  ",C[i][j] );
        }
        printf( "\n" );
    }
    
    
    

    
    
return(0);
}