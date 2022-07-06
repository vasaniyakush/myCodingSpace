// https://codeforces.com/problemset/problem/1651/B
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
        if(n <= 19){
            cout<<"YES\n";
            REP(i,n){
                cout<<(ll)pow(3ll,(ll)i)<< " ";
            }
            cout<<endl;
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}