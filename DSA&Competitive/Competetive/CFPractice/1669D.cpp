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
        string s;
        cin>>s;
        int nb = 0,nr = 0;
        bool ok = true;
        REP(i,s.length()){
            if(s[i] != 'W'){
                ok = false;
                break;
            }
        }
        if(ok){
            cout<<"YES"<<endl;
            continue;
        }
        ok = true;
        REP(i,s.length()){
            if(s[i] == 'W'){
                if((nb > 0 and nr > 0) or (nb == 0 and nr ==0)){
                    nb = 0;
                    nr = 0;
                }
                else {
                    cout<<"NO"<<endl;
                    // continue;
                    ok = false;
                    break;
                }
            }
            else {
                if(s[i] == 'B') nb++;
                if(s[i] == 'R') nr++;
            }
        }
        if(ok){
            if((nb > 0 and nr > 0) or (nb == 0 and nr ==0))
                cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
        }
        // else

    }
    return 0;
}