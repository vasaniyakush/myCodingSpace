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
        int n,m;
        cin>>n>>m;

        ll seats = 0;
        vl v(n);
        REP(i,n){
            cin>>v[i];
        }
        sort(ALL(v));
        // seats += ;
        int i = 0;
        while(i < n -1){
            seats += max(v[i],v[i+1]) ;
            i++;

        }
        seats += max(v[n-1],v[0]);
        seats += n;
        // cout<<seats;
        // seats += (max(v[0],v[i])) + 1;
        // seats+= (v[i]>v[i-1]?v[i]-v[i-1]:0);
        // seats += v[i] + 1;
        // seats += (v[i]>v[i-1]?v[i]-v[i-1]:0);
        // seats += (v[0] > v[i]? v[0] - v[i]:0);
        if(seats > m){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;

    }
    return 0;
}