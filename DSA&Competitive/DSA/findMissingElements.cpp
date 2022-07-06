#include<bits/stdc++.h>
using namespace std;
void printMissingElements(int arr[],int size){
    int diff = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] - i != diff)
        {
            cout<< i + diff << " " ;
            diff++;
            i--;
        }
        
    }
    
}
int main(){
    int A[10] = {4,7,8,9,11,12,14,15,16,17};
    printMissingElements(A,10);
return 0;
}