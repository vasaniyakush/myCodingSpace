#include<bits/stdc++.h>
using namespace std;
#include "LinkedListTemplate.cpp"

void ReverseLL(Node ** head){
    Node* prevNode = nullptr;
    Node* currentNode = *head;
    Node* nextNode = nullptr;
    
    while (currentNode)
    {
        nextNode = currentNode ->Next; //stores next address
        currentNode -> Next = prevNode;//reverses the current node
        prevNode = currentNode;//sets new previous node
        currentNode = nextNode;//move the current forward
    }
    *head = prevNode;
}


int main(){
    Node *head1 = takeinput();
    ReverseLL(&head1);
    Printlist(head1);
return 0;
}