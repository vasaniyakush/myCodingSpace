//stack using array
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
class Stack
{
    int topp;
    int A[MAX];
    public:
    Stack(){
        topp = -1;
    }
    bool pushAtTop(int element){
        if (topp >= MAX - 1)
        {
            cout<<"Stack Overflow!!\n";
            return false;
        }
        else{
            A[++topp] = element;
            cout<<element<<" has been pushed in the stack.\n";
            return true;
        }
    }

    int popBack(){
        if (topp <= -1)
        {
            cout<<"Stack Underflow!\n";
            return 0;
        }
        else{
            int x = A[topp--];
            return x;
        }
    }

    int peekAtTop(){
        if (topp <= -1)
        {
            cout<<"Stack is Empty!\n";
            return 0;
        }
        else{
            return A[topp];
        }
        
    }
    bool isEmpty(){

        return ( topp < 0 );
    }

};
int main(){
    Stack s;
    s.pushAtTop(5);
    s.pushAtTop(3);
    s.pushAtTop(6);
    cout<<s.peekAtTop()<<endl;
return 0;
}