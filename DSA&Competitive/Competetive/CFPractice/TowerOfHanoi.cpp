//tower of hnoi

#include<bits/stdc++.h>
#include<cmath>
using namespace std;


int towerOfHanoi(int n, char s, char h ,char d ){
    static int count = 0;
    if (n == 1)
    {
        cout<<"From "<<s<<" to "<<d<<endl;
        count++;
    }
    else{
        towerOfHanoi( n - 1, s, d, h);
        cout<<"From "<<s<<" to "<<d<<endl;
        count++;
        towerOfHanoi(n - 1, h, s, d);
    }
    return count;
}
 
int main(){
    int n = 3;
    int count = towerOfHanoi(n,'A', 'B', 'C');
    // cout<<pow(2,1000) - 1;
return 0;
}