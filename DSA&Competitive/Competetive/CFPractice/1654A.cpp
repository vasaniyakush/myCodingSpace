// https://codeforces.com/problemset/problem/1654/A
#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define REP(i, n) FOR(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define ll long long
#define vi vector<int> 
#define umpii unordered_map<int ,int> 
#define pii pair<int,int> 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt = 1;
    cin>>ttt;
    while(ttt--){
        int n;
        cin>>n;
        int x;
        cin>>x;
        n--;
        int fmax = x;
        int smax = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            if(x > fmax){
                smax = fmax;
                fmax = x;
            }
            else if(x > smax){
                smax = x;
            }
        }
        cout<<fmax + smax<<endl;
        
    }
    return 0;
}