#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    int sum = (n*(n + 1))/2;
    int x,summ = 0;
    for (int i = 0; i < n - 1; i++)
    {   
        cin>>x;
        summ += x;
    }
    cout<<sum - summ;
    

    return 0;
}