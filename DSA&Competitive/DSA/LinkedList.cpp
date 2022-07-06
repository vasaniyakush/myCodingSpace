#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *Next;

    Node(int data){
        this -> data = data;
        this -> Next = nullptr;
    }
};

void Printlist(Node *head){
    while (head )
    {
        cout<<head->data<<" ";
        head = head->Next;
    }
    cout<<endl;
}

Node *takeinput(){
    int data;
    cin>>data;
    Node *head = nullptr;
    Node* temp = head;
    while (data != -1)
    {
        if (head == nullptr)
        {
            temp = new Node(data);
            head = temp;
        }
        else{
            temp ->Next = new Node(data);
            temp = temp -> Next;
        }
        cin>>data;
    }
    Printlist(head);
    return head;
}

int listLength(Node *head){
    int count = 0;
    Node *temp = head;
    while (temp)
    {
        count ++;
        temp = temp -> Next;
    }
    return count;
}

int printNode(Node* head, int n){
    // n++;
    Node * temp = head;

    while(temp && n){
        temp = temp -> Next;
        n--;
    }
    if (!n)
    {
        cout<<temp->data<<endl;
    }
    return (temp -> data);
    
}

void Push(Node** head, int data)
{
    Node *newNode = new Node(data);

    newNode ->Next = (*head);

    (*head) = newNode;
}

void Pushati(Node** head, int data, int i){
    Node* temp = *head;
    i--;
    while (i-- > 0)
    {
        temp = temp ->Next;
    }
    Node* temp2 = temp ->Next;
    if(i == -2){
        Push(head, data);
    }
    else{
        Node *newNode = new Node(data);
        newNode ->Next = temp ->Next;
        temp ->Next = newNode;
    }
    
}

void Append(Node** head, int data){
    Node * temp = *head;
    while (temp->Next)
    {
        temp = temp ->Next;
    }
    Node *newNode = new Node(data);
    temp ->Next = newNode;
    
}

void Deletenode(Node * &head, int i){
        Node* temp = head;
    if (i == 0)
    {
        head = head ->Next;
        delete temp;
    }
    else{
        i--;
        while (i--)
        {
            temp = temp -> Next;
        }
        Node * temp2 = temp -> Next;
        temp -> Next = temp2 -> Next;
        delete temp2;
        
    }
    
}

int FindNode(Node * head, int x){
    Node * temp = head;
    for (int i = 0; temp ; i++)
    {
        if (temp ->data == x)
        {
            return i;
        }
        temp = temp->Next;
    }
    return -1;
    
}

int main(){
    // Node n1(1);
    // Node *head = &n1;
    // Node n2(2);
    // Node n3(3),n4(4),n5(5);
    // n1.Next = &n2;
    // n2.Next = &n3;
    // n3.Next = &n4;
    // n4.Next = &n5;
    // Printlist(head);
    // Printlist(head);

    Node *head = takeinput();

    Push(&head, 0);
    // Printlist(head);
    // cout<<endl<<"length = "<<listLength(head)<<endl;
    printNode(head,0);
    Pushati(&head, 3,2);
    Printlist(head);
    Append(&head, 6);
    Append(&head, 7);
    Pushati(&head, 1, 0);
    Printlist(head);
    cout<<listLength(head)<<endl;
    // Pushati(&head, 5 , 0);
    Deletenode(head , 0);
    Printlist(head);
    // Deletenode(head , 0);
    // Printlist(head);
    // Deletenode(head , 0);
    // Printlist(head);
    // Deletenode(head , 0);
    // Printlist(head);
    // Deletenode(head, 4);
    cout<<"hello1\n";
    cout<<"node location "<<FindNode(head ,5)<<endl;
    cout<<"hello2\n";

return 0;
}