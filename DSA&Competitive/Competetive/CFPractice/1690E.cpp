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
        int n,k;
        cin>>n>>k;
        vector<vector<ll>> v(k);
        vl def;
        ll x;
        REP(i,n){
            cin>>x;
            if(x<k) def.push_back(x);
            else
            v[x%k].push_back(x);
        }
        ll val = 0;
        ll a,b;
        for(ll i = k - 1; i>=0 ; i--){
            if(v[i].size() != 0){
                if(v[i].size() % 2 == 0){
                    ll temp = v[i].size();
                    temp= temp/2;
                    while(temp--){
                        a = v[i].back();
                        v[i].pop_back();
                        b = v[i].back();
                        v[i].pop_back();
                        val += (a+b)/k;
                    }
                }
                if(v[i].size() % 2 == 1){
                    ll temp = v[i].size();
                    temp= temp/2;
                    while(temp--){
                        a = v[i].back();
                        v[i].pop_back();
                        b = v[i].back();
                        v[i].pop_back();
                        val += (a+b)/k;
                    }
                    a = v[i].back();
                    if(i == 0) def.push_back(a);
                    else
                    v[i - 1].push_back(a);
                    v[i].pop_back();
                }
            }
        }
        // ll temp = 

        cout<<val<<endl;

    }
    return 0;
}