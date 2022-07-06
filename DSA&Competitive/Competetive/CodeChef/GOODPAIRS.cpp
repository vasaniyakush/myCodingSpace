// https://www.codechef.com/START38C/problems/GOODPAIRS

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
        ll n,count = 0;
        cin>>n;
        vl a(n),b(n);
        REP(i,n){
            cin>>a[i];
        }
        REP(i,n){
            cin>>b[i];
        }
        vl d(n);
        REP(i,n){
            d[i] = a[i]-b[i];
        }
        sort(ALL(d));
        ll i = 0;
        ll j = n - 1;
        while(i < j){
            if(d[i] + d[j] == 0){
                count ++;
                ll t = j - 1;
                while(d[t] == d[j] and t>i){
                    count++;t--;
                }
                i++;
            }
            else if(d[i] + d[j] < 0){
                i++;
            }
            else j--;
        }

        
        cout<<count<<endl;
        
    }
    return 0;
}