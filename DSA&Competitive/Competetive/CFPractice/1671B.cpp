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
        int n;
        cin>>n;
        vi v(n);
        int diff1 = 2;
        // int diff2 = 1;
        bool ok = true;
        cin>>v[0];
        FOR(i,1,n){
            cin>>v[i];
            if(v[i] - v[i - 1] == 2){
                if(diff1 >0){
                    diff1--;
                }
                else{
                    ok = false;
                }
            }
            else if(v[i] - v[i - 1] == 3){
                if( diff1 > 0){
                    diff1--;
                    diff1--;
                }
                else ok = false;
            }
            else if(v[i] - v[i - 1] >3){
                ok = false;
            }
        }
        // cout<<ans<<endl;
        if(ok) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}