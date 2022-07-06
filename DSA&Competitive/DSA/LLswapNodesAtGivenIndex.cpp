#include<bits/stdc++.h>
using namespace std;
#include "LinkedListTemplate.cpp"
void swapAtIndex(Node** head, int i, int i2){
    if(i >= listLength(*head) || i2 >= listLength(*head)){
        return;
    }
    if (i2 > i)
    {
        swap(i2,i);
    }
    Node* temp1 = *head;
    Node* temp2 = *head;
    Node* temp = *head;
    if (i == 0)
    {
        for (int i3 = 0; i3 < i2 - 1; i3++)
        {
            temp1 = temp1 -> Next;
        }
        temp = temp1 ->Next -> Next;
        *head = temp1->Next;
        temp1->Next->Next = temp2->Next;
        temp2->Next = temp;
        temp1->Next = temp2;
        
        
    }
    else{
        for (int i3 = 0; i3 < i-1; i3++)
        {
            temp2 = temp2 -> Next;   
        }
        for (int i3 = 0; i3 < i2-1; i3++)
        {
            temp1 = temp1 -> Next;
        }
        
        
    }
    
    
}
int main(){
return 0;
}