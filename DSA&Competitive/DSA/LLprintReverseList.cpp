#include<bits/stdc++.h>
using namespace std;
#include "LinkedListTemplate.cpp"

void printReverseList(Node * head){
    Node * temp = head;
    if(!temp){
        return;
    }
    printReverseList(temp -> Next);
    cout<<temp->data<<" ";
}

int main(){
    Node * head1 = takeinput();

    printReverseList(head1);
return 0;
}