// https://codeforces.com/problemset/problem/1651/A
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
        ll run = 1;
        int n ;
        cin>>n;
        for(int i = 1; i < n; i++){
            run*=2;
            run++;
        }
        cout<<run<<endl;
    }
    return 0;
}