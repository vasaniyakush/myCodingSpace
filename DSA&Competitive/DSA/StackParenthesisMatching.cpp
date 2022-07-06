#include <bits/stdc++.h>
using namespace std;
//#include "StackTemplateLL.cpp"
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

void pushAtEnd(StackNode **root, char data)
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

bool checkParenthesis(string str)
{
    StackNode *root = nullptr;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            pushAtEnd(&root, str[i]);
        }
        if (str[i] == ')')
        {
            if (!isEmpty(root) && peekTop(root) == '(')
            {
                popBack(&root);
            }
            else
                return false;
        }
        else if (str[i] == ']')
        {
            if (!isEmpty(root) && peekTop(root) == '[')
            {
                popBack(&root);
            }
            else
                return false;
        }
        if (str[i] == '}')
        {
            if (!isEmpty(root) && peekTop(root) == '{')
            {
                popBack(&root);
            }
            else
                return false;
        }
    }
    if (isEmpty(root))
    {
        return true;
    }
    else
        return false;
}
int main()
{

    string s;
    cin >> s;
    if (checkParenthesis(s))
    {
        cout << "Correct" << endl;
    }
    else
        cout << "Incorrect" << endl;

    return 0;
}