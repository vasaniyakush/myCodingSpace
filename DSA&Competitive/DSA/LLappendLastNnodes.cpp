#include <bits/stdc++.h>
using namespace std;
#include "LinkedListTemplate.cpp"

void appendLastNnodes(Node **head, int n){
    int len = listLength(*head);

    Node * temp = *head; //temp runs through the complete list
    int tail = len - n - 1; //the element at which the list will break
    while (tail--)
    {
        temp = temp -> Next;

    }
    // 1 2 3 4 5
    Node *tempHead = temp -> Next; //tempHead will be our new head
    temp ->Next = nullptr; //as this would be the end of the New list
    temp = tempHead; //as we have to traverse furthur
    
    while (temp -> Next)
    {
        temp = temp -> Next;
    }//now temp points at last element
    
    //we will merege our original head here
    temp ->Next = *head; //merges the initial elements to last
    *head = tempHead; //sets the new head
}
int main()
{
    Node* head1 = takeinput();
    appendLastNnodes(&head1, 3);
    Printlist(head1);
    return 0;
}