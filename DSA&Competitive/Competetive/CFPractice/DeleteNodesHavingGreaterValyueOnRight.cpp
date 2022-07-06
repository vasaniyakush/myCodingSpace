// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



 // } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    int maxx(Node* prev, Node* curr){
        
        if(curr){
            int maxi;
             maxi = maxx(curr,curr->next);
            if(maxi > curr->data){
                // if(prev)
                prev->next = curr-> next;
                delete[] curr;
                return maxi;
            }
            else{
                return curr->data;
            }
        }
        return INT_MIN;
        
    }
    Node *compute(Node *head)
    {
        // your code goes here
        int maxi = maxx(NULL,head);
        if(maxi > head->data){
            return head->next;
        }
        else return head;
    }
    
};
   


// { Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}
  // } Driver Code Ends