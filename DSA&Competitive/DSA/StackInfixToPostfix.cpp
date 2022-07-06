//infix to postfix

#include<bits/stdc++.h>
using namespace std;

class StackNode
{
public:
    char data;
    StackNode *next;
    StackNode(char ch)
    {
        data = ch;
        next = nullptr;
    }
};
bool isEmpty(StackNode *root)
{
    return (!root); //if the root is null, true is returned
}

void pushStack(StackNode **root, char data)
{
    StackNode *tempNode = new StackNode(data);
    /*
        now we will add the new node to the head of the LL,
        so that we can access it at first and only root is accessible
        */
    tempNode->next = *root; //new added node stores the address of previous top node
    *root = tempNode;       // new node is now the top node
    cout << data << " pushed to stack.\n";
}
char peekTop(StackNode *root)
{
    if (isEmpty(root))
    {
        return '\0';
    }
    else
        return root->data;
}

char popBack(StackNode **root)
{
    if (isEmpty(*root))
    {
        cout << "Stack Underflow!!\n";
        return '\0';
    }
    StackNode *temp = *root;
    *root = (*root)->next;
    char x = temp->data;
    delete temp;
    return x;
}
void printStack(StackNode *root)
{
    while (root)
    {
        cout << root->data << " ";
        root = root->next;
    }
    cout << endl;
}

int precedence(char a)
{
    if (a == '^')
    {
        return 3;
    }
    else if (a == '%' || a == '*' || a == '/')
    {
        return 2;
    }
    else if (a == '+' || a == '-')
    {
        return 1;
    }
    else return -1;
    
}
string infixToPostfix(string infix){
    string postfix;
    StackNode *stack = nullptr;
    for (int i = 0; i <= infix.length(); i++)
    {
        if ((infix[i] >= 'a' && infix[i] <= 'z') || (infix[i] >= 'A' && infix[i] <= 'Z'))
        {
            postfix += infix[i];
        }
        else if (infix[i] == '(')
        {
            pushStack(&stack,infix[i]);
        }
        else if (infix[i] == ')')
        {
            while (peekTop(stack) != '(')
            {
                postfix += popBack(&stack);
            }
            popBack(&stack);
        }
        else{

            if (precedence(infix[i]) > precedence(peekTop(stack)) )
            {
                pushStack(&stack,infix[i]);
            }
            else{
                while (!isEmpty(stack) && precedence(infix[i]) <= precedence(peekTop(stack)))
                {
                    postfix += popBack(&stack);
                }
                pushStack(&stack,infix[i]);
            }
        }
    }
    while (!isEmpty(stack))
    {
        postfix += popBack(&stack);
    }
    return postfix; 
}

int main(){
    string infix = "a+b*(c^d-e)^(f+g*h)-i";
    // cout<<"Enter infix expression : ";
    // cin>>infix;
    string postfix = infixToPostfix(infix);
    cout<<endl<<"After conversion the expression is :\n"<<postfix;

return 0;
}