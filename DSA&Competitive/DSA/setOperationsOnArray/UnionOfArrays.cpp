#include<bits/stdc++.h>
using namespace std;
void unionUnsorted(int A[], int B[] , int C[]){
    int k = 0;
    for (int i = 0; i < 5; i++)
    {
        bool flag = 1;
        for (int j = 0; j < k; j++)
        {
            if (A[i] == C[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            C[k] = A[i];
            k++;
        }
    }
    for (int i = 0; i < 5; i++)
    {
         bool flag = 1;
        for (int j = 0; j < k; j++)
        {
            if (B[i] == C[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            C[k] = B[i];
            k++;
        }
    }
    
}
int main(){
    int A[5] = {3,7,5,13,10};
    int B[5] = {2,4,8,7,12};
    int C[10] = {0};
    unionUnsorted(A,B,C);
    for (int i = 0; i < 10; i++)
    {
        cout<<C[i]<<" ";
    }
    
return 0;
}