#include<bits/stdc++.h>
using namespace std;
#include "LinkedListTemplate.cpp"

void swapTwoNodes( Node *current){
    Node * temp = current;
    
    temp = current->Next->Next;
    current->Next->Next = current;
    current->Next = temp;

}
void swapInPairs(Node ** head){
    if (*head != nullptr && (*head)->Next != nullptr)
    {
        Node* temp = *head;
        *head = (*head)-> Next;
        swapTwoNodes(temp);
        
        while (temp != nullptr && temp->Next !=nullptr && temp->Next->Next != nullptr)
        {
            Node * temp2 = temp -> Next;
            temp->Next = temp->Next->Next;
            swapTwoNodes(temp2);
            temp=temp->Next->Next;
            
        }
        
    }
    else{
        cout<<"Empty List Chutiye!\n";
        return;
    }
    
}
int main(){
    Node * head = takeinput();
    Printlist(head);
    swapInPairs(&head);
    Printlist(head);

    
    Printlist(head);
return 0;
}