#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count = 0;
    for (int i = 5; (n/i) >= 1; i*=5)
    {
        count += n/i;
    }
    cout<<count;

    return 0;
}