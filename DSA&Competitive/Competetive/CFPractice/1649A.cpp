// https://codeforces.com/problemset/problem/1649/A
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
    cin>>ttt;
    while(ttt--){
        int n;
        cin>>n;
        vi v(n);
        REP(i,n){
            cin>>v[i];
        }
        int l = 0, r = n - 1;
        while(l < n - 1){
            if(v[l + 1] == 0) break;
            else l++;
        }
        while(r > 0){
            if(v[r - 1] == 0) break;
            else r--;
        }
        int ans = 0;
        if(l < r){
            ans = r -l;
        }
        cout<<ans<<endl;

    }
    return 0;
}