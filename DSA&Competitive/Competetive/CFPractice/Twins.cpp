#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    int sum = 0;
    for (int  i = 0; i < n; i++)
    {
        sum += v[i];
        v[i] = sum;
    }
    sum = 0;
    int count = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        sum += v[i + 1] - v[i];
        if(sum > v[i]) break;
        else count++;
    }
    cout<<count;
  
return 0;
}