#include<bits/stdc++.h>
using namespace std;
class StackNode{
    public:
    int data;
    StackNode* next = nullptr;
    StackNode(int data1){
        data = data1;
        next = nullptr;

    }
};
bool isEmpty(StackNode* root){
    return (!root); //if the root is null, true is returned 
}

void pushAtEnd(StackNode ** root, int data){
    StackNode* tempNode = new StackNode(data);
        /*
        now we will add the new node to the head of the LL,
        so that we can access it at first and only root is accessible
        */    
    tempNode -> next = *root; //new added node stores the address of previous top node
    *root = tempNode; // new node is now the top node
    // cout<<data<<" pushed to stack.\n";
}
int peekTop(StackNode* root){
    if (isEmpty(root))
    {
        return INT_MIN;
    }
    else return root -> data;
    
}

int popBack(StackNode** root){
    if (isEmpty(*root))
    {
        cout<<"Stack Underflow!!\n";
        return INT_MIN;
    }
    StackNode* temp = *root;
    *root = (*root) -> next;
    int x = temp -> data;
    delete temp;
    return x;
}
void printStack(StackNode * root){
    while (root)
    {
        cout<<root-> data<<" ";
        root = root-> next;
    }
    cout<<endl;
    
}




