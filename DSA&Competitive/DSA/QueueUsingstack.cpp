//queue using stack

#include<bits/stdc++.h>
using namespace std;
#include "StackTemplateLL.cpp"

class qUeue{
    public:
    StackNode *s1 ;
    StackNode *s2 ;

    qUeue(){
        s1 = nullptr;
        s2 = nullptr;
    }
    bool is_qEmpty(){
        if (isEmpty(s1) && isEmpty(s2))
        {
            return 1;
        }
        else return 0;
        
    }
    void enQueue(int data){
        pushAtEnd(&s1,data);
        cout<<data<<" pushed to queue.\n";
    }
    int deQueue(){
        if (isEmpty(s1))
        {
            cout<<"Queue underflow!!!\n";
            return -1;
        }
        else{
            while(!isEmpty(s1)){
                pushAtEnd(&s2,popBack(&s1));
            }
            int temp = popBack(&s2);
            while (!isEmpty(s2))
            {
                pushAtEnd(&s1,popBack(&s2));
            }
            
            return temp;
        }
    }
};

int main(){
    qUeue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    
    cout<<q.deQueue()<<endl;
    cout<<q.deQueue()<<endl;
    q.enQueue(4);
    q.enQueue(5);
    q.enQueue(6);
    cout<<q.deQueue()<<endl;
    cout<<q.deQueue()<<endl;
    cout<<q.deQueue()<<endl;
    cout<<q.deQueue()<<endl;
    cout<<q.deQueue()<<endl;
return 0;
}