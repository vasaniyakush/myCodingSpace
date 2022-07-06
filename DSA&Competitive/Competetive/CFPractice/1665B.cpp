// https://codeforces.com/contest/1665/problem/B
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
bool mycmp(pair<ll,ll> &p, pair<ll,ll> &q){
    return p.second> q.second;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt = 1;
    cin>>ttt;
    while(ttt--){
        ll n;
        cin>>n;
        vl v(n);
        ll maxx = 0;
        map<ll,ll> mp;
        REP(i,n){
            cin>>v[i];
            mp[v[i]]++;
            maxx = max(maxx,mp[v[i]]);
        }
        // cout<<maxx<<endl;
        // vector<pair<ll,ll>> vdort;
        // for( auto i:mp){
        //     vdort.push_back(i);
        // }
        // sort(vdort.begin(),vdort.end(),mycmp);

        // ll num = vdort[0].second;
        // ll rem = n - num;
        // int opera = 0;
        // while(rem > 0){
        //     opera++;
        //     if(rem < num){
        //         opera += rem;
        //         break;
        //     }else{
        //         rem -= num;
        //         opera+= num;
        //         num = num * 2;
        //     }
        // }
        // cout<<opera<<endl;
        ll k = n - maxx;
        ll count = 0;
        while(k != 0){
            count += 1;
            // maxx = 2*maxx;
            if(k >= maxx){
                count+= maxx;
                k-= maxx;
                
            }
            else{
                count += k;
                k  = 0;

            }
            maxx*=2;
        }
        cout<<count<<endl;

    }
    return 0;
}