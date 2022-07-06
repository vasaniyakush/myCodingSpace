#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 
#define mp(a,b) make_pair((a),(b))
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define REP(i, n) FOR(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define ll long long
#define vi vector<int> 
#define umpii unordered_map<int ,int> 
#define pii pair<ll,ll> 
// bool mycmp(pair<long long ,long long> &p,pair<long long ,long long> &q){
//     return (p.first < q.first or (p.first == q.first and p.second == -1));
// }
int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int ttt = 1;
    cin>>ttt;
    for(int abc = 1; abc<= ttt; abc++){
    vector<pii> v;
        ll x;
        ll d,n,u;
        cin>>d>>n>>u;
        ll m,l,e;
        REP(i,d){
            cin>>m>>l>>e;
            v.push_back(mp(m,l));
            v.push_back(mp((m + e),((ll)(-1)*l)));
               
        }
        REP(i,n){
            cin>>x;
            v.push_back(mp(x,(ll)LLONG_MAX));
        }
        sort(ALL(v));
        ll curr = 0;
        ll ans = 0;
        // FOR(i,0,v.size()){
        // }
        FOR(i,0,v.size()){
            // cout<<v[i].first<<" "<<v[i].second<<endl;
            if(v[i].second == LLONG_MAX){
                if(curr < u) break;
                else{
                    ans += 1;
                    curr-= u;
                }
            }
            else{
                curr = max((ll)0,curr + v[i].second);
                
            }
            // cout<<"curr : "<<curr<<endl;
        }
        cout<<"Case #"<<abc<<": "<<ans<<endl;

    }
    return 0;
}