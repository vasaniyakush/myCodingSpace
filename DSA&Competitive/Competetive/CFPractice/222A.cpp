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
        int n,k;
        cin>>n>>k;
        vi v(n);
        REP(i,n){
            cin>>v[i];
        }
        int num = v[k - 1];
        bool ok = true;
        FOR(i,k,n){
            if(v[i] != num){
                ok = false;
                break;
            }
        }
        for(int i = k - 2; i>=0 ; i--){
            if(v[i] == num){
                k = i + 1;
            }
            else break;
        }
        if(ok){
            cout<<k-1;
        }
        else cout<<-1;
    }
    return 0;
}