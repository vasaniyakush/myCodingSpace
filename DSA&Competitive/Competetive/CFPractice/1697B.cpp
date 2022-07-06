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
ll m = 1e9 + 7;
double epsilon = 1e-6;
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
        int n, q;
        cin>>n>>q;
        vl v(n + 1);
        FOR(i,1,n+1){
            cin>>v[i];

        }
        v[0] = 0;
        sort(ALL(v));
        FOR(i,1,n + 1){
            v[i] += v[i-1];
        }
        int x,y;
        while(q--){
            cin>>x>>y;
            ll sum = 0;
            int i = n + 1 -x;
            int j = i + y - 1;
            i--;
            
            cout<<v[j] - v[i]<<endl;
        }
    

    }
    return 0;
}