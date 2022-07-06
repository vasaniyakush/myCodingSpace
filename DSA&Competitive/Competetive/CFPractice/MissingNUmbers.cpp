// https://www.codechef.com/MARCH222D/problems/MISS_NUM
#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define REP(i, n) FOR(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define ll long long
#define vi vector<int> 
#define vll vector<ll> 
#define umpii unordered_map<int ,int> 
#define pii pair<int,int> 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt = 1;
    //cin>>ttt;
    while(ttt--){
        vll v(4);
        cin>>v[0]>>v[1]>>v[2]>>v[3];
        ll pro,div,sum,dif;
        sort(ALL(v));
        pro = v[3];
        sum = v[2];
        ll root1 = (sum + sqrt((sum*sum) - 4* pro))/2;
        ll root2 = (sum - sqrt((sum*sum) - 4* pro))/2;
        ll a,b;
        if(root1 <= 0){
            a = root2;
            b = sum - root2;
            if()
            
        }
    }
    return 0;
}