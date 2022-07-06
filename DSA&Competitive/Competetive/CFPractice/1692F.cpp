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
        vl v(n);
        map<int,int> mp;
        REP(i,n){
            cin>>v[i];
            mp[(v[i]%10)]++;
        }
        string yes = "YES";

        string ans = "NO";
        REP(i,10){
            if(mp[i] <= 0 ){
                continue;
            }
            if(i == 0){
                if(mp[2]>=1 and mp[1] >=1){
                    ans = yes;
                }
                else if(mp[3] >= 1 and mp[0] >=2 ){
                    ans = yes;
                }
            }
            else if(i == 1){
                if(mp[1] >= 3){
                    ans = yes;
                }
            }
        }
    }
    return 0;
}