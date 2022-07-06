#include<bits/stdc++.h>
using namespace std;
#include "StackTemplateLL.cpp"

int pushNode(StackNode ** root, int data){

    if (isEmpty(*root))
    {
        pushAtEnd(root,data);
    }
    else{
        if ( peekTop((*root)) > data )
        {
            int x = popBack(root);
            pushNode(root,data);
            pushAtEnd(root,x);
        }
        else pushAtEnd(root,data);
        
    }
    return peekTop(*root);
    
}

void NextGreaterElement(int arr[],int size){
    StackNode * root = nullptr;
    for(int i = 0; i < size; i++)
    {
        cout<<pushNode(&root, arr[i])<<" ";
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == peekTop(root))
        {
            arr[i] = -1;
        }
        
    }
    
    


}

int main(){

    int arr[] = {1,11,3,4,6,5,8}; 
    NextGreaterElement(arr,7);
    cout<<endl;
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    
return 0;
}