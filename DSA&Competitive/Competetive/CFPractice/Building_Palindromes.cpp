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
    int ttt;
    cin>>ttt;
    for(int abc = 1; abc <= ttt; abc++){
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        vector<vector<int>> v(26,vector<int>(n+1,0));
        REP(i,n){
            v[int(s[i] - 'A')][i+1] = 1;
        }
        FOR(i,1,n+1){
            REP(j,26){
                v[j][i] += v[j][i -1];
            }
        }
        // for(auto ch:s){
        //     cout<<ch<<" ";
        // }
        // cout<<endl;
        // for(auto vec:v){
        //     for(auto x:vec){
        //         cout<<x<<" ";
        //     }
        //     cout<<endl;
        // }
        int count = 0;
        while(q--){
            int l,r;
            cin>>l>>r;
            bool ok = true;
            bool countt = true;

            REP(i,26){
                int sum = v[i][r] - v[i][l -1];
                if(sum%2 == 1){
                    if(ok){
                        ok = false;
                        continue;
                    }
                    else {
                        countt = false;
                        break;
                    }
                }
            }
            if(countt) {
                count++;
                // cout<<l<<" "<<r<<endl;
            }

        }


        cout<<"Case #"<<abc<<": "<<count<<endl;
    }
    return 0;
}