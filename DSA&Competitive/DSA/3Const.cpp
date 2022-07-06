#include<bits/stdc++.h>
using namespace std;
int main(){
    const int i = 10; //same as int const i = 10;
    i++;//NOT allowed
//-----------------------
    int j = 10;
    const int &k = j;
    j++;//allowed
    k++;//NOT allowed
//_________________________

    const int f = 10;
    const int &g = f;//Allowed
    f++;//NOT allowed
    j++;//NOT allowed
return 0;
}