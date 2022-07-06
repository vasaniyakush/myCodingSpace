#include<bits/stdc++.h>
using namespace std;
#include "LinkedListTemplate.cpp"

void LinkedListPalindrome(Node * head){
    Node * fast = head;
    Node * slow = head;
    while (fast ->Next &&  fast->Next->Next )
    {
        slow = slow -> Next;
        fast = fast -> Next -> Next;
    }
    slow = slow -> Next; // points to element after the middle


    
}

int main(){
    Node * head1 = takeinput();
    LinkedListPalindrome(head1);
return 0;
}