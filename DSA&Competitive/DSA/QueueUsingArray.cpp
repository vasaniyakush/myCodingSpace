// #include<bits/stdc++.h>
// using namespace std;

// class Queue{
//     int qsize;
//     int rear;
//     int front;
//     int *arr;
//     public:
//     Queue(){
//         qsize = 10;
//         rear = -1;
//         front = -1;
//         arr = new int[qsize];
//     }
//     Queue(int qsize){
//         this -> qsize = qsize;
//         rear = -1;
//         front = -1;
//         arr = new int[qsize];
//     }
//     void enQueue(int element){
//         if (rear != qsize - 1)
//         {
//             arr[++rear] = element;
//         }
//         else cout<<"Queue Overflow!!!\n";
        
//     }
//     int deQueue(){
//         if (front == rear)
//         {
//             cout<<"Queue Underflow!!!\n";
//             return -1;
//         }
//         else{
//             return arr[++front];
//         }
//     }
//     void displayQueue(){
//         for (int i = front + 1; i <= rear ; i++)
//         {
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };

// int main(){
//     Queue q(4);
//     q.enQueue(4);
//     q.enQueue(3);
//     q.enQueue(2);
//     q.enQueue(1);

//     q.displayQueue();

//     cout<<q.deQueue()<<endl;
//     q.displayQueue();
    

// return 0;
// }

//------------------------Circular Queue-----------------------


// class qNode{
//     int data;
//     qNode * next;
//     int prio;          
//     public:
//     qNode(int _d,int _p){
//         data = _d;
//         prio = _p;
//     }
// };
#include<bits/stdc++.h>
using namespace std;

/*
class QueueLinear{
    int *arr;
    int qsize;
    int rear;
    int front;
    int prio;
    public:
    QueueLinear(){
        qsize = 10;
        arr = new int[qsize];
        front = rear = 0;
    }
    QueueLinear(int _size){
        qsize = _size;
        arr = new int[qsize];
        front = rear = 0;
    }
    void enQueue(int data){
        if (rear + 1 == qsize)
        {
            cout<<"Queue is full\n";
        }
        
        else{
            rear++;
            arr[rear] = data;
        }
    }
    int deQueue(){
        if (front == rear)  
        {
            cout<<"Queue is Empty!!!\n";
        }
        else{
            return arr[front++];
        }
        
    }
    void display(){
        for (int i = front; i <= rear; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};*/
// class QueueCircular{
//     public:
//     int rear, front , qsize, *arr;
//     QueueCircular(){
//         int qsize = 10;
//         front = rear = -1;
//         arr = new int[qsize];
//         cout<<"Size of array is "<<qsize<<" "<<sizeof(arr)<<endl;
//     }
//     QueueCircular(int _size){
//         this->qsize = _size;
//         front = rear = -1;
//         arr = new int[qsize];
//     }
//     void enQueue(int data){
//         // cout<<"Size of array is "<<qsize<<" "<<sizeof(arr)<<endl;
//         if ((rear + 1) % qsize  == front )
//         {
//             cout<<"Queue is full noobdiiiiiiiii!!!\n";
//         }
//         else{
//             rear = ( rear +1) % qsize ;
//             arr[rear] = data;
//         }
//     }
//     int deQueue(){
//         // cout<<"Size of array is "<<qsize<<" "<<sizeof(arr)<<endl;
//         if(front == rear){
//             cout<<"Queue is Empty noobdiiiiiiii!!!\n";
//             return 0;
//         }
//         else {
//             front = (front + 1) % qsize;
//             return arr[front];
//         }
//     }
//     void display(){
//         for (int i = front ; i != rear; i = (i + 1) % qsize)
//         {
//             cout<<arr[i + 1]<<" ";
//         }
//         cout << sizeof(arr);
//         cout<<endl;
//     }
// };
 //circular queue using array
class qCircular{
    public:
    int qsize;
    int rear;
    int front;
    int *arr;
    qCircular(){
        qsize = 10;
        front = -1;
        rear = -1;
        arr = new int[10];
        cout<<"Size : "<<qsize<<endl;
        cout<<"Arr : "<<sizeof(arr)<<endl;
    }
    qCircular(int n){
        qsize = n;
        front = -1;
        rear = -1;
        arr = new int[n];
    }
    void enQueue(int data){
        if (((rear + 1) % qsize) == front )
        {
            cout<<"Queue is full"<<endl;
        }
        else{
            if (front == -1 && rear == -1)
            {
                front = rear = 0;
                arr[rear] = data;
            }
            else{
                rear = (rear + 1)% qsize;
                arr[rear] = data;
            }
        }
    }
    int deQueue(){
        if (rear == front && front == -1)
        {
            cout<<"Queue is empty"<<endl;
            return 0;
        }
        else{
            int x = arr[front];
            if (rear == front)
            {
                front = rear = -1;
            }
            else front = (front + 1 ) % qsize;
            return x;
        }
    }
    void display(){
        for (int i = front; i != rear; i = (i+1) % qsize)
        {
            cout<<arr[i]<<" ";
        }
        if(!(front == rear && front == -1))
            cout<<arr[rear];
        cout<<endl;
    }

};

int main(){
    qCircular q;
    cout << q.qsize<<endl;
    q.enQueue(1);
    q.enQueue(1);
    q.enQueue(1);
    q.enQueue(1);
    q.enQueue(1);
    q.enQueue(1);
    q.enQueue(1);
    q.enQueue(1);
    q.enQueue(1);
    q.enQueue(1);
    q.enQueue(1);
    
    q.display();
    cout<<q.deQueue()<<endl;
    cout<<q.deQueue()<<endl;
    cout<<q.deQueue()<<endl;
    q.display();
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(3);
    q.display();
    cout<<q.deQueue()<<endl;
    cout<<q.deQueue()<<endl;
    cout<<q.deQueue()<<endl;
    cout<<q.deQueue()<<endl;
    cout<<q.deQueue()<<endl;
    cout<<q.deQueue()<<endl;
    cout<<q.deQueue()<<endl;
    cout<<q.deQueue()<<endl;
    cout<<q.deQueue()<<endl;
    cout<<q.deQueue()<<endl;
    cout<<q.deQueue()<<endl;
    cout<<q.deQueue()<<endl;
    cout<<q.deQueue()<<endl;
    cout<<q.deQueue()<<endl;
    cout<<q.deQueue()<<endl;
    q.display();
    
return 0;
}