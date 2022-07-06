

// #include<bits/stdc++.h>
// using namespace std;

// class tNode{
    
//     public:
//     int data;
//     tNode * left;
//     tNode * right;
//     tNode():data(-1),left(nullptr),right(nullptr){}
//     tNode(int data):data(data),left(nullptr),right(nullptr){}

// };
// class treeS:public tNode{
//     tNode *root;
//     public:
//     treeS(){
//         root = nullptr;
//     }
//     void createTree();
//     void preOrder( tNode* ); 
//     void preOrder(){
//         preOrder(root);
//     } //t.preOrder();
//     void postOrder(tNode*);
//     void postOrder(){
//         postOrder(root);
//     }
//     void inOrder();
//     void levelOrder();
//     void heightTree();
//     void countTree();

// };

// void treeS::createTree(){
//     tNode *p,*t;
//     int x;
//     queueQ q;
//     cout<<"Enter root :) ";
//     cin>>x;
//     root = new tNode(x);

//     q.enQueue(root);
//     while (!q.isEmpty())
//     {
//         p = q.deQueue();
//         cout<<"Enter left child : " ;
//         cin>>x;
//         if (x != -1)
//         {
//             t = new tNode(x);
//             p ->left = t;
//             q.enQueue(t);
//         }
//         cout<<"Enter right child : " ;
//         cin>>x;
//         if (x != -1)
//         {
//             t = new tNode(x);
//             p ->right = t;
//             q.enQueue(t);
//         }
//     }
// }
// void treeS::preOrder(tNode* root){
//      if (root)
//     {
//         cout<<root->data<<" ";
//         preOrder(root->left);
//         preOrder(root->right);
//     }
// }

// int main(){
//     treeS t;
//     t.createTree();
//     t.preOrder();
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// class complex1{
//     public:
//     int a;
//     int b;
    
//     complex1();
    
//     void getdata(){
//         cin>>a>>b;
        
//     }
//     friend complex1 operator*(complex1 , complex1 );
// };
// complex1 operator*(complex1 c, complex1 d){
//     complex1 temp;
//     temp.a = c.a * d.a;
//     return temp;
// }
// // complex1 operator*

// int main(){
//     complex1 a ,c ,d;
//     a.getdata();
//     c.getdata();
//     d = a*c; // d = operator*(a,c);
//     cout<<d.a;
// return 0;
// }
// #include<iostream>
// using namespace std;
// class node
// {
//     public:
//     node *next;
//     int data;
//     node(int data)
//     {
//         this->data = data;
//         this->next = nullptr;
//     }
// };
// void push(node **head , int data)
// {
//     node *temp = *head;
//     node *newnode = new node(data);
//     if(*head == nullptr)
//     {
//         *head = newnode;
//     }
//     else{
//         newnode->next = *head;
//         *head = newnode;
//     }
// }
// int pop(node **head)
// {
//     node *temp = *head;
//     if(*head == nullptr)
//     {
//         cout << "empty";
//         return -1;
//     }
//     else{
//         int x = temp->data;
//         *head = temp->next;
//         delete [] temp;
//         return x;
//     }
// }
// bool is_Empty(node **head)
// {
//     return (*head == nullptr);
// }
// class queue1
// {
//     public :
//     node *s1;
//     node *s2;
//     queue1()
//     {
//         s1 = nullptr; s2 = nullptr;
//     }
//     void enqueue(int data)
//     {
//         push(&s1 , data);
//     }
//     int dequeue()
//     {
//         if(is_Empty(&s1) && is_Empty(&s2))
//         {
//             cout << "q is empty ";
//             return 0;
//         }
//         else
//         {
//             while(!is_Empty(&s1))
//             {
//                 push(&s2 , pop(&s1));
//             }
//             int x = pop(&s2);
//             while (!is_Empty(&s2))
//             {
//                 push(&s1 , pop(&s2));
//             }
//             return x;
//         }
//     }
// };
// int main(){
//     queue1 q;
//     q.enqueue(1);
//     q.enqueue(2);
//     q.enqueue(3);
//     cout<<q.dequeue()<<endl;
//     cout<<q.dequeue()<<endl;
//     q.enqueue(4);
//     q.enqueue(5);
//     q.enqueue(6);
//     cout<<q.dequeue()<<endl;
//     cout<<q.dequeue()<<endl;
//     cout<<q.dequeue()<<endl;
//     cout<<q.dequeue()<<endl;
//     cout<<q.dequeue()<<endl;
// return 0;
// }

// int pop(){

//     if (q1.empty())
//     {
//         return;
//     }
//     while (!q1.empty())
//     {
//         // int x = q1.top();
//         // q1.pop();   //for inbuilt
//         int x = q1.pop();
//         if (q1.empty())
//         {
//             continue;
//         }
//         q2.push(x);
        
//     }
//     Node* temp2 = q1;
//     q1 = q2;
//     q2 = temp2;
//     return x;


// }
// #include<bits/stdc++.h>
// using namespace std;

// struct Node
// {
//     int data ;
//     struct Node*next;
//     Node(int x)
//     {
//         data =x;
//         next = nullptr;
//     }
// };

// struct Node *buildlist(int size)
// {
//     int val;
//     cin >> val;
//     Node *head = new Node(val);
//     Node* tail = head;

//     for (int i = 0; i < size-1; i++)
//     {
//         /* code */
//         cin >> val;
//         tail->next = new Node(val);
//         tail = tail->next;
//     }
//     return head;
// }
// void printlist(Node * n)
// {
//     while(n)
//     {
//         cout << n->data << " ";
//         n = n->next;
//     }
//     cout << endl;
// }

// class Solution
// {
//     public:
//     //Function to add two numbers represented by linked list.
//     struct Node * reverse(struct Node **head)
//     {
//         struct Node *curr = *head;
//         struct Node *prev = nullptr;
//         struct Node *last = nullptr;
//         while(curr != nullptr)
//         {
//             last = curr->next;
//             curr->next  = prev;
//             prev = curr;
//             curr = last;
//         }
//         *head = prev;
//         return *head;
//     }
//     struct Node* addTwoLists(struct Node* first, struct Node* second)
//     {
//         //code here
//         // struct Node *one = first;
//         // struct Node *two = second;
//         struct Node *fir = reverse(&first);
//         struct Node *sec = reverse(&second);
//         struct Node *res = NULL;
//         struct Node *temp = NULL;
        
//         // int res = 0;
//         // int temp = res;

//         // res = 1;
//         // temp = res;

//         // temp -> next
        








//         int sum , carr =0;
//         while(fir != NULL || sec != NULL)
//         {
//             sum = carr + (fir ? fir->data : 0) + (sec ? sec->data : 0);
//             carr = (sum >=10) ? 1 : 0;
//             sum = sum % 10;
//             struct Node *newnode = new Node(sum);
//             if(res == NULL)
//             {
//                 res = newnode;
//                 temp = newnode;
//                 // 9
//                 // res
//                 // temp
//                 // printlist(res);              
//             }
//             else
//             {
//                 temp->next = newnode;
//                 temp = newnode;
//                 //9 -> 7 -> 3
//                 //res
//                 //         temp
//                 // printlist(temp);           
//                 // printlist(*res);           
//             }
//             if(fir)
//                 fir = fir->next;
//             if(sec)
//                 sec = sec->next;
//             // sum =0;
//         }
//         // printlist(res);
//         // while(fir!= nullptr)
//         // {
//         //     sum = first->data +carr;
//         //     carr = (sum >=10) ? 1 : 0;
//         //     sum = sum %10;
//         //     struct Node * newnode = new Node(sum);
//         //     temp->next = newnode;
//         //     temp = newnode;
//         //     fir = fir->next;
//         // }
//         //  printlist(res);
//         // while(sec!= nullptr)
//         // {
//         //     sum = sec->data +carr;
//         //     carr = (sum >=10) ? 1 : 0;
//         //     sum = sum %10;
//         //     struct Node * newnode = new Node(sum);
//         //     temp->next = newnode;
//         //     temp = newnode;
//         //     sec= sec->next;
//         // }
//         //  printlist(res);
//         if(carr > 0)
//         {
//             struct Node *newnode = new Node(carr);
//             temp->next = newnode;
//             temp = newnode;
//         }
//         // printlist(res);
//         res = reverse(&res);
//         return res;
//     }
// };

// int main()
// {
//     int  t;
//     cin >> t;
//     while(t--)
//     {
//         int n ,m;
//         cin >> n;
//         Node *first = buildlist(n);
//         cin >> m;
//         Node *second = buildlist(m);
//         Solution obj;
//         Node *res= obj.addTwoLists(first , second);
//         printlist(res);
//     }
//     return 0;

// }
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Rearrange(int arr[], int n);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long j=0;
      
        Rearrange( arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    }
    return 0; 
} // } Driver Code Ends


int currp(int arr[], int n ,int  curp){
    if(curp>= n){
        return INT_MAX;
    }
    if(arr[curp] > 0){
        return curp;
    }
    else return currp(arr, n, curp + 1);
}


void Rearrange(int arr[], int n)
{
    
    int curp = currp(arr, n, 0);
    // cout<<curp;
    if(curp == INT_MAX) {
        // cout<<"i was here"<<endl;
        return;
        
    }
    for(int i = curp;i < n; i++){
        if(arr[i] < 0){
            // int j = i;
            int temp = arr[i];
            for(int j = i; j > curp ; j--){
                swap(arr[j], arr[j - 1]);
            }
            
            curp = currp(arr,n,curp+1);
            if(curp == INT_MAX) return;
        }
    }
    
}