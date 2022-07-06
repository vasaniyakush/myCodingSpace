#include<bits/stdc++.h>
using namespace std;
// #include "C:\Users\vasan\Desktop\Coding\DSA&Competitive\DSA\StackTemplateLL.cpp"
class Node{
    public:
    int data;
    Node * left ;
    Node * right;
    Node(){
        data = 0;
        left = nullptr;
        right = nullptr;

    }
    Node(int data1){
        data = data1;
        left = nullptr;
        right = nullptr;
        
    }
};

void preOrder_traversal(Node * root){
    
    // Method 1 : iterative
    // stack<Node*> st;
    // while (1)
    // {
    //     while (root)
    //     {
    //         cout<<root->data<<" ";//process current node
    //         st.push(root);//push to stack for further use
    //         //if left subtree exists add to stack
    //         root = root -> left;
    //     }
    //     if (st.empty())
    //     {
    //         break;//no more nodes left all functions are over
    //     }
    //     root = st.top();
    //     st.pop();
    //     root = root -> right;
    // }
    
    // method 2: recursive
    if (root)
    {
        cout<<root->data<<" ";
        preOrder_traversal(root->left);
        preOrder_traversal(root->right);
    }
}
void inOrder_traversal(Node  *  root){
    // method 1: iterative
    // stack<Node*> st2;
    // while (1)
    // {
    //     while (root)
    //     {
    //         st2.push(root);
    //         root = root -> left;
    //     }
    //     if (st2.empty())
    //     {
    //         break; /* code */
    //     }
    //     root = st2.top();
    //     st2.pop();
    //     cout<<root->data<<" ";
    //     root = root -> right;
    // }
    
    // method 2 : recursive
     if (root)
    {
        
        inOrder_traversal(root->left);
        cout<<root->data<<" ";
        inOrder_traversal(root->right);
    }
}
void postOrder_traversal(Node * root){
    //method 1: recursive
    if (root)
    {
        postOrder_traversal(root->left);
        postOrder_traversal(root->right);
        cout<<root->data<<" ";
    }    
    //method 2: iterative

    // if (root == nullptr)
    // {
    //     return;
    // }
    
    // stack<Node *> s1, s2;
    // Node* node;
    
    // s1.push(root);
    // while (!s1.empty())
    // {
    //     node = s1.top();
    //     s1.pop();
    //     if(node->left)
    //     s1.push(node->left);
    //     if(node->right)
    //     s1.push(node->right);
    //     s2.push(node);
    // }
    // while (!s2.empty())
    // {
    //     node = s2.top();
    //     cout<<node->data <<" ";
    //     s2.pop();
    // }
    
    
}
void levelOrder_traversal(Node * root){
    queue<Node *> qe;
    qe.push(root);
    while(!qe.empty()){
        root = qe.front();
        cout<< root-> data<< " ";
        qe.pop();
    
        if (root->left )
        {
            qe.push(root->left);
        }
        if (root ->right)
        {
            qe.push(root->right);
        }
    }
    
}
void createTree(Node** root){
    Node *t,*p;
    queue<Node*> q;
    int x;
    cout<<"Enter a root: ";\
    cin>>x;
    *root = new Node(x);
    q.push(*root);
    while (!q.empty())
    {
        p = q.front();
        q.pop();
        cout<<"Enter left child: ";
        cin>>x;
        if (x != -1)
        {
            t = new Node(x);
            p ->left = t;
            q.push(t);
        }
        cout<<"Enter right child: ";
        cin>>x;
        if (x != -1)
        {
            t = new Node(x);
            p ->right = t;
            q.push(t);
        }
     }
}
int countNodes(Node* root){
    if (root)
    {
        return countNodes(root->left)+countNodes(root->right) + 1;
    }
    return 0;
    
}
int maxHeight(Node* root){

    if (root == nullptr)
    {
        return 0;
    }
    int hl = 0,hr = 0,hfianl;//height left, height right , hright final to return
    if (root->left)//if left treee is present
    {
        hl = maxHeight(root->left) + 1;//calculates the height of left tree
    }
    if (root->right)//if right treee is present
    {
        hr = maxHeight(root->right) + 1;//calculates the height of right tree
    }
    hfianl = max(hr,hl); // only the max height form both the trees is selected
    return hfianl;// height + 1 because we have to consider the currrent node. 
    //NOTE : traditionally, height of a single node is 0, so we can remove the '+1' from return to get that tradional value
}
int maxElement(Node* root){
    if (root)
    {
        return max(root->data,max(maxElement(root->right),maxElement(root->left)));
    }
    return INT_MIN;
}
int main(){
    Node *root = new Node(1);
    root->right = new Node(3);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    // root->right->right = new Node(7);
    // root->right->right->left = new Node(8);
    // root->right->right->right = new Node(8);
    // root->right->right->left = new Node(9);
    // Node *root1;
    // createTree(&root1);
    // cout<<"Height is : "<<maxHeight(root)<<endl;
    // cout<<"max element is : "<<maxElement(root)<<endl;
    postOrder_traversal(root);
    cout<<endl;
    preOrder_traversal(root);
    cout<<endl;
    // preOrder_traversal(root);
    // cout<<endl;
    // inOrder_traversal(root);
    
return 0;
}

//    1
// 2    3
//4 5  6 7
// pre : 1 2 4 5 3 6 7
// in : 4 2 5 1 6 3 7