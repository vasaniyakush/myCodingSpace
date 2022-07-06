#include<bits/stdc++.h>
using namespace std;

void permu(char str[] , int k){

    static char result[10];
    static int A[10] = {0};

    if (str[k] == '\0') 
    {
        cout<<result<<endl;
        return;
    }
    
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (A[i] == 0)
        {
            result[k] = str[i];
            A[i] = 1;
            permu(str,k + 1);
            A[i] = 0;
        }
        
    }
    
    
}

int main(){
    char str[] = "ABC";
    permu(str,0);
return 0;
}