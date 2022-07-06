#include<bits/stdc++.h>
using namespace std;

class DynamicArray{
    int *data;
    int nextInt;
    int capacity;
    public:
    DynamicArray()
    {
        data = new int(5);
        nextInt = 0;
        capacity = 5;
    }
    DynamicArray(DynamicArray const &d){

        this -> capacity = d.capacity;
        this -> data = new int(capacity);
        this -> nextInt = d.nextInt;
        for (int i = 0; i < nextInt; i++)
        {
            this -> data[i] = d.data[i];
        }
        
    }
    void operator=(DynamicArray const &d){
        this -> capacity = d.capacity;
        this -> data = new int(capacity);
        this -> nextInt = d.nextInt;
        for (int i = 0; i < nextInt; i++)
        {
            this -> data[i] = d.data[i];
        }
    }
    void addElement(int i)
    {
        if (nextInt == capacity)
        {
            int *newdata = new int(capacity * 2);
            for (int j = 0; j < capacity; j++)
            {
                newdata[j] = data[j];
            }
            delete [] data;
            data = newdata;
            capacity *= 2;
        }

        data[nextInt] = i;
        nextInt++;
        
    }
    int getElement(int i)const
    {
        if (i < nextInt)
        {
            return data[i]; 
        }
        else return -1;
    }
    void addElement(int i, int element)
    {
        if (i < nextInt)
        {
            data[i] = element;
        }
        else if (i == nextInt)
        {
            addElement(element);
        }
        else return;
    }
    void print()const
    {
        for (int i = 0; i < nextInt; i++)
        {
            cout<<data[i]<<endl;
        }
        
    }

};
int main(){
    DynamicArray d1;

    d1.addElement(10);
    d1.addElement(20);
    d1.addElement(30);
    d1.addElement(40);
    d1.addElement(50);
    d1.addElement(60);
    d1.addElement(70);
    d1.addElement(3,100);
    DynamicArray d2;
    d2 = d1;

    cout<<d1.getElement(0)<<endl;
    cout<<d1.getElement(1)<<endl;
    cout<<d1.getElement(2)<<endl;
    cout<<d1.getElement(3)<<endl;
    cout<<d1.getElement(4)<<endl;
    cout<<d1.getElement(5)<<endl;
    cout<<d1.getElement(6)<<endl;
    d1.print();
    cout<<"hello world\n";
    d2.print();

return 0;
}