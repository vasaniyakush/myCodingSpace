#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *Next;
    Node *prev;
    Node(int i){
        data = i;
        Next = nullptr;
        prev = nullptr;
    }
    
};

void insertAtBeginning(Node**head , int key){
    Node* temp = *head;
    Node* newNode = new Node(key);

    if (temp == nullptr)
    {
        *head = newNode;
        newNode->Next = newNode;
        newNode -> prev = newNode;
    }
    else {
        temp = (*head)->prev;
        newNode -> prev = temp;
        temp -> Next = newNode;
        newNode -> Next = *head;
        (*head) -> prev = newNode;
        (*head) = newNode;
    }
   
    
}
void insertAti(Node **head, int key, int i){
    Node* temp = *head;
    Node *newNode = new Node(key);
    int count = 0;
    if (temp == nullptr && i == 0)
    {
        *head = newNode;
        newNode->Next = newNode;
        newNode->prev = newNode;
    }
    else{

        while (count <= i - 1 && temp ->Next != *head)
        {
            temp = temp -> Next;
            count++;
        }
        newNode -> Next = temp;
        newNode -> prev = temp -> prev;
        temp -> prev -> Next = newNode;
        temp ->prev = newNode;
        if (i == 0)
        {
            *head = newNode;
        }
    }
}
void deleteINode(Node** head,int i){
    Node* temp = *head;
    if (i == 0)
    {
        temp -> Next ->prev = temp ->prev;
        temp ->prev ->Next = temp -> Next;
        if (temp->Next == temp)
        {
            (*head) = nullptr;
        }
        else (*head) = temp -> Next;
        delete [] temp;
        
    }
    else{
        while (i-- && temp ->Next != (*head))
        {
            temp = temp-> Next;
        }
        // cout<<"Value of i is : "<<i<<endl;
        if (i < 0)
        {
            temp -> Next -> prev = temp -> prev;
            temp -> prev -> Next = temp -> Next;
            delete [] temp;
        }
        else cout<<"Invalid index!! \n";
    }
    
}
void displayLL(Node* head){
    Node *temp = head;
    do
    {
        cout<<temp->data<<" ";
        temp = temp -> Next;
    } while (temp != head);
    cout<<endl;
    
}

int main(){
    Node* head = nullptr;
    insertAtBeginning(&head , 1);
    insertAtBeginning(&head , 2);
    insertAtBeginning(&head , 2);
    insertAtBeginning(&head , 2);
    insertAtBeginning(&head , 2);
    insertAtBeginning(&head , 3);
    // display( head);
    // cout << endl;


    // display( head);
    // cout << endl;
    insertAti(&head , 4 , 1);
    insertAti(&head , 4 , 1);
    insertAti(&head , 4 , 1);
    insertAti(&head , 4 , 1);

    // display( head);
    // cout << endl;

    insertAti(&head , 9 , 0);
    displayLL( head);
    // cout << endl;
    
    // insertAti(&head , 4 , 2);
    displayLL( head);
return 0;
}