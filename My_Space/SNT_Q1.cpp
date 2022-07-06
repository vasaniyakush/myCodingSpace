#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;
class num1{

    int a;
    public:
    num1(int A){
        cout<<"Enter num1 :";
        cin>>A;
        a = A;
        cout<<endl;
    }
    friend void mean(num1 obj1, num2 obj2 );
};

class num2{
    int b;
    public:
    num2(int B){
        cout<<"Enter num2 :";
        cin>>B;
        b = B;
        cout<<endl;
    }
    friend void mean(num1 obj1 , num2 obj2);

};
void mean(num1 obj1 , num2 obj2){
    return (obj1.a + obj2.b)

 }


int main(){

return 0;
}