#include<bits/stdc++.h>
using namespace std;

class node
{
    public :
        int data;
        node *next;
        node *prev;
};

//CREATE AN LINKED LIST BY AN ARRAY

void create(int arr[] , int n , node *head)
{
    int i=0;
    node *temp , *t;
    // node *newnode = new node;
    (head)->data = arr[0];
    (head)->next = head;
    temp = head;
    // temp= temp->next;

    for (i = 1; i < n; i++)
    {
        t = new node;
        t->data = arr[i];
        t->next = temp->next;
        // newnode->next = t;
        temp->next =  t;
        // temp  =t;
    }
    // *head = newnode;
}

//LENGTH OF LINKED LIST NODES
int length(node *head)
{
    node *temp = head;
    int len =0;
    while (temp->next != head)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

//INSERT A NODE
void insert(node **head , int key , int pos)
{
    int len =0;
    
    node *temp  = *head;
    node *newnode = new node;
    newnode->data = key;
    newnode->next = nullptr;
    if(pos==0)
    {
        if(*head == nullptr)
        {
            *head = newnode;
            newnode->next = *head;
        }
        else
        {
            while (temp->next != *head)
            {
                temp = temp->next;
            }
            newnode->next = *head;
            temp->next = newnode;
            (*head ) = newnode;
        }
        len++;
    }
    else
    {
        for (int i = 1; i < pos; i++)
        {
            
            temp = temp->next;
        }
        // if(temp->next == *head)
        // {
        //     newnode ->next = (*head);
        // }
        // else
        // {    
            newnode->next = temp->next;//AND HERE TOO
            temp->next = newnode;// changed here baby
        // }
        // temp->next = newnode; // ISKO COMMENT KIYA
        len++;
    }
    // if(pos < 0 || pos > len)
    // {
    //     cout << "invalid index";
    //     return;
    // }
}
//DISPLAY FUNCTION TO PRINT LINKED LIST
/*
void display(node **head)
{
    node *temp = *head;
    while (temp->next != *head)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
*/

void display(node **head)
{
    node *temp = *head;
    while (temp->next != *head)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    // int arr[5] = {1,2,3,4,5};
    node *head = nullptr;
    // create(arr , 5 , head);

    insert(&head , 1 ,0);
    insert(&head , 2 ,1);
    // insert(&head , 3 ,2);
    // insert(&head , 4 ,3);
    // insert(&head , 5 ,4);
    display(&head);
return 0;
}