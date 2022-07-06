#include<stdio.h>
#include<conio.h>

int ascending_arr(int size, int arr[]){
    int i,j;

    for ( i = 0; i < size - 1; i++)
    {
        for ( j = 0; j < size - i ; j++)
        {
            if( arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        
    }

    return 0;

}
int main(){
    int size = 0; 
    printf( "enter the size of the array : " );
    scanf("%d",&size);

    int arr[size];

    printf( "enter the elements of array : " );
    for( int i = 0 ; i < size ; i++ ){
        scanf("%d",&arr[i]);
    }
    
    ascending_arr(size,arr); 
    
    for( int i = 0 ; i < size ; i++ ){
        printf("%d\t",arr[i]);
    }

return(0);
}