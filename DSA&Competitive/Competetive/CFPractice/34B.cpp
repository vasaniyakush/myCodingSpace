// https://codeforces.com/problemset/problem/34/B
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define VALUE(x) cerr << "The value of " << #x << " is " << x << endl;
#define endl "\n" 
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define REP(i, n) FOR(i, 0, n)
#define ALL(v) v.begin(), v.end()
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt = 1;
    //cin>>ttt;
    while(ttt--){
        int n,m,summ = 0;
        cin>>n>>m;
        vi vec(n);
        REP(i,n){
            cin>>vec[i];
        }
        sort(ALL(vec));
        FOR(i,0,m)
        {
            if(m>0 and vec[i]<=0){
                summ+= -1*vec[i];
            }
        }
        cout<<summ;
    }
    return 0;
}