// https://codeforces.com/problemset/problem/459/B
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
        ll n;
        cin>>n;
        vl v(n);
        REP(i,n){
            cin>>v[i];
        }
        sort(ALL(v));
        ll c1 = 1,c2 = 1;
        ll i = 1;

        while(i < n){
            if(v[i] == v[0]){
                c1++;
            }
            i++;

        }
        i = n - 2;
        while(i>= 0){
            if(v[i] == v[n - 1]){
                c2++;
            }
            i--;
        }
        ll minn = v[n-1] - v[0];
        ll ans = c1*c2;
        if(v[0] == v[n -1]){
            ans = (n*(n-1))/2;
        }
        
        cout<<minn<<" "<<ans;

    }
    return 0;
}