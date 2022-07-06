#include<bits/stdc++.h>
using namespace std;
int main(){

    int i = 65;
    char c = i;
    cout<<c<<endl;

    int *ptr = &i;
    char *pc = (char*)ptr;
    float *fp = (float*)ptr;
    cout<<pc<<endl; //lsb is in front, so the int is stored on the first byte
    cout<<*pc<<endl;//same as above line
    cout<<*(pc+1)<<endl; //null pointer 


return 0;
}