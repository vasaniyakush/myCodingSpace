#include<bits/stdc++.h>
using namespace std;
#include "LinkedListTemplate.cpp"

void merge2SortedList(Node * &head1, Node* &head2){
    Node *finalHead  = nullptr;
    if (head1 -> data < head2 -> data)
    {
        finalHead = head1;
        head1 = head1 -> Next;
    }
    else{
        finalHead = head2;
        head2 = head2  -> Next;
    }
    Node * finalTail = finalHead;
    while (head1 && head2)
    {
        if (head1 -> data < head2 -> data)
        {
            finalTail -> Next = head1;
            head1 = head1 -> Next;
            finalTail = finalTail -> Next;
        }
        else{
            finalTail -> Next = head2;
            head2 = head2 -> Next;
            finalTail = finalTail -> Next;
        }
    }
    if (!head1)
    {
        finalTail -> Next = head2;
    }
    if (!head2)
    {
        finalTail -> Next = head1;
    }
    head1 = finalHead;

}
int main(){
    Node * head1 = takeinput();
    Node * head2 = takeinput();
    merge2SortedList(head1, head2);
    cout<<"\nHelloo"<<endl;
    Printlist(head1);
    Printlist(head2);
return 0;
}