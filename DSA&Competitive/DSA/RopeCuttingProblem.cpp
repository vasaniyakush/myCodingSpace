//recursively
#include<bits/stdc++.h>
using namespace std;
int maxcuts(int n,int a,int b, int c){
    if(n == 0){
        return 0;
    }
    if(n <= -1){
        return -1;
    }
    int res = max(maxcuts(n - a,a,b,c),
                  max(maxcuts(n - b,a,b,c),
                      maxcuts(n - c,a,b,c)));
    if(res == -1) return -1;
    else return (1 + res);
}
int main(){
    int n = 23, a = 11,b = 9, c =12;
    cout<<maxcuts(n,a,b,c);

    return 0;
}