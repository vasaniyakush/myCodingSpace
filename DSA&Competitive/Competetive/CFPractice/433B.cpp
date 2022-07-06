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
        ll n,m;
        cin>>n;
        vl v1(n + 1);
        vl v2(n + 1);
        FOR(i,1,n + 1){
            cin>>v1[i];
            
        }
        v2 = v1;
        v1[0] = v2[0] = 0;
        sort(v2.begin()+1,v2.end());
        // for(int x:v1) cout<<x<<" ";
        // for(int x:v2) cout<<x<<" ";
        ll sum1 = 0,sum2 = 0;
        FOR(i,1,n + 1){
            sum1 += v1[i];
            v1[i] = sum1;
            sum2 += v2[i];
            v2[i] = sum2;
        }
        cin>>m;
        REP(i,m){
            ll tp,l,r;
            cin>>tp>>l>>r;
            
            if(tp == 1){
                cout<<v1[r] - v1[l - 1];
            }
            if(tp == 2){
                cout<<v2[r] - v2[l - 1];
            }
            cout<<endl;
        }
    }
    return 0;
}