#include<bits/stdc++.h>
using namespace std;
#include "LinkedListTemplate.cpp"

void deleteDuplicates(Node *head){
    int i = 0;
    Node* temp = head;
    while (temp)
    {
        if ((temp -> data) == (temp ->Next ->data))
        {
            Deletenode(head,i+1);
        }
        temp = temp ->Next;
        i++;
        
    }
    
}


int main(){
    Node * head1 = takeinput();
    cout<<listLength(head1);
    deleteDuplicates(head1);
    Printlist(head1);
    cout<<listLength(head1);
return 0;
}