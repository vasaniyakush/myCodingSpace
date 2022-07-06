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
        ll n , a , b;
        cin>>n>>a>>b;
        ll x;
        ll ca = 0, cb = 0, cbot = 0;
        REP(i,n){
            cin>>x;
            if(x%a == 0 and x% b == 0){
                cbot++;
            }
            else if(x% a == 0){
                ca++;
            }else if(x % b == 0){
                cb++;
            }
        }
        if(cbot > 0){
            if(ca >= cb){
                cout<<"BOB\n";
            }
            else{
                cout<<"ALICE\n";
            }
        }
        else{
            if(cb >= ca ){
                cout <<"ALICE\n";
            }
            else cout <<"BOB\n";
        }
    }
    return 0;
}