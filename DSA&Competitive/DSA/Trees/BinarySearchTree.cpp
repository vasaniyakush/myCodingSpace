#include<bits/stdc++.h>
using namespace std;
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
    // 
    // if (root == nullptr)
    // {
    //     return;
    // }
    // 
    // stack<Node *> s1, s2;
    // Node* node;
    // 
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
void createBSTree(Node** root, int key){
    if (*root == nullptr)
    {
        (*root) = new Node(key);
        return;
    }

    else if ((*root)->data == key)
    {
        return;
    }

    else if((*root)-> data > key)
    {
        if ( (*root)->left )
        {
            createBSTree( &( (*root)->left ), key);
        }
        else
            (*root)->left = new Node(key);

        return;    
    }
    else if ((*root)->data < key)
    {
        if ( (*root)->right )
        {
            createBSTree( &( (*root)->right ), key);
        }
        else
            (*root)->right = new Node(key);
        return;
    }
}
int maxElement(Node* root){
    if (root)
    {
        return max(root->data,max(maxElement(root->right),maxElement(root->left)));
    }
    return INT_MIN;
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
int countNodes(Node* root){
    if (root)
    {
        return countNodes(root->left)+countNodes(root->right) + 1;
    }
    return 0;
    
}
Node* inPre(Node*p){//inorder predecessor
     while(p and p->right){
         p = p -> right;
     }
     return p;
}
Node* inSucc(Node*p){//inorder successor
    while (p and p->left)
    {
        p = p -> left;
    }
    return p;
    
}
Node* searchBST(Node * root, int key){
    if (root)
    {
        if (key == root->data)
        {
            return root;
        }
        else if (key > root -> data)
        {
            return searchBST(root->right,key);
        }
        else return searchBST(root->left,key);
    }
    return nullptr;
}

Node* deleteBST(Node**  root, int key){
   
   if ((*root) == nullptr)
   {
       return nullptr;
   }
   if ((*root)->data > key)
   {
       (*root)->left = deleteBST(&(*root)->left, key);
   }
   else if ((*root)->data < key)
   {
       (*root)->right = deleteBST(&(*root)->right, key);
   }
   else{
       if ((*root)->left == nullptr and (*root)-> right == nullptr)
       {
           delete [] (*root);
           return nullptr;
       }
       if ((*root)->left == nullptr)
       {
           Node* temp = (*root)->right;
           delete [] (*root);
           return temp;
       }
       if ((*root)->right == nullptr)
       {
           Node* temp = (*root)->left;
           delete [] (*root);
           return temp;
       }
       
       if( maxHeight( (*root)->left) > maxHeight( (*root)->right) )
       {
            Node* temp = inPre((*root)->left);

            Node *t = new Node(temp->data);
            t->left = (*root)->left; 
            t->right = (*root)->right; 
           
           delete [] (*root);
            (*root) = t;
           (*root)->left = deleteBST(&(*root)->left,temp->data);
        }
        else{
            Node* temp = inSucc((*root)->right);

            Node *t = new Node(temp->data);
            t->left = (*root)->left; 
            t->right = (*root)->right;
            delete [] (*root);

            (*root) = t;
            (*root)->right = deleteBST(&(*root)->right,temp->data);
        }
   }
   return (*root);
}
 
int main(){
    Node * root = nullptr;
    createBSTree(&root,7);
    createBSTree(&root,6);
    createBSTree(&root,8);
    createBSTree(&root,4);
    createBSTree(&root,10);
    createBSTree(&root,9);
    createBSTree(&root,14);
    createBSTree(&root,11);
    cout<<maxHeight(root)<<endl;
    // levelOrder_traversal(root);
    // preOrder_traversal(root);
    // cout<<endl;
    inOrder_traversal(root);
    cout<<endl;
    root = deleteBST(&root,11);
    inOrder_traversal(root);
    cout<<endl;
    root = deleteBST(&root,10);
    inOrder_traversal(root);
    cout<<endl;
    root = deleteBST(&root,14);
    inOrder_traversal(root);
    cout<<endl;
    

    // if (searchBST(root,21))
    // {
    //     cout<<"8 is present \n";
    // 
    // }
    // else cout<<"Not present ";
    // 
    // postOrder_traversal(root);
    /*
    int choice;
    bool run = true;
    while(run){
        cout<<"\npress :\n1)Enter a new node\n2)InOrder Traversal\n3)PostOrder Traversal\n4)PreOrder Traversal\n5)levelOrder_Traversal\n6)EXIT\nChoice: ";
        cin>>choice;     
        switch (choice)
        {
            case 1:
                int key;
                cout<<"Enter some data to enter in the new node : ";
                cin>>key;
                createBSTree(&root,key);
                break;
            case 2:
                inOrder_traversal(root);
                break;    
            case 3:
                postOrder_traversal(root);
                break;
            case 4:
                preOrder_traversal(root);
                break;
            case 5:
                leverOrder_traversal(root);
                break;        
            case 6:
                cout<<"Thank you !!";
                run = false;
                break;
            default:
                cout<<"Please enter a correct choice";
                break;
            }   
        }
        */   


return 0;
}