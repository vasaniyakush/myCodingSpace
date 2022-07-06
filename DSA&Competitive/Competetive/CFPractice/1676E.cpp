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
    cin>>ttt;
    while(ttt--){
        ll n,q;
        cin>>n>>q;

        vl v(n);

        REP(i,n){
            cin>>v[i];
        }

        sort(ALL(v),greater<int>());
        FOR(i,1,n){
            v[i] += v[i-1];
        }
        
        // ll x;
        
        REP(i,q){
            
            long long x; cin >> x;
            int l = 1, r = n, ans = -1;
            while(l < r) {
                // VALUE(l);
                // VALUE(r);
                // VALUE(ans);
                int mid = (l + r) / 2;
                // VALUE(mid);
                // VALUE(v[mid]);
                if(v[mid - 1] < x) {
                    ans = mid;
                    l = mid;
                } else {
                    r = mid;
                }
                // VALUE(ans);
            }
                // VALUE(ans);/ 
            cout << ans << "\n";
            
        }
    }
    return 0;
}