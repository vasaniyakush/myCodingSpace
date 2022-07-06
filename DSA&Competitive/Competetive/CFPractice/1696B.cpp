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
        bool onez = false;
        bool alz = true;
        int ans = 2;

        REP(i,n){
            cin>>v[i];
            
            if(v[i] != 0) alz = false;
        }
        int s = -1;
        REP(i,n){
            if(v[i] != 0){
                s = i;
                break;
            }
        }
        int e = -1;
        for(int i = n- 1; i>=0 ; i--){
            if(v[i] != 0){
                e = i;
                break;
            }
        }
        for(int i = s; i<=e; i++){
            if(v[i] == 0){
                onez = true;
                break;
            }
        }
        if(alz){
            cout<<0<<endl;

        }
        else if(onez) cout<<2<<endl;
        else cout<<1<<endl;

    }
    return 0;
}