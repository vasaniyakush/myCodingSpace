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
        vi v1(n);
        vi v2(n);
        REP(i,n){
            cin>>v1[i];
        }
        REP(i,n){
            cin>>v2[i];
        }
        vii v(n);
        REP(i,n){
            v[i].fi = v1[i];
            v[i].se = v2[i];
        }
        ll count = 0;
        queue<pii> q;
        for(int i = 0; i< n -1; i++){
            for(int j = 0; j < n - i - 1; j++){
                if(v[j].first > v[j + 1].first){
                    // cout<<i+1<<" "<<j+1<<endl;
                    swap(v[j],v[j+1]);
                    q.push(mp(j+ 1,j + 2));count++;
                }
                else if(v[j].first == v[j + 1].first and v[j].second > v[j+1].second){
                    // cout<<i+1<<" "<<j+1<<endl;
                    swap(v[j],v[j+1]);
                    q.push(mp(j + 1,j + 2));count++;
                }
            }
        }
        // REP(i,n){
        //     cout<<v[i].fi<<", "<<v[i].se<<"| ";
        // }
        bool ok = true;
        REP(i,n - 1){
            if(v[i].se > v[i + 1].se ){
                ok = false;
                break;
            }
        }
        if(ok){
            cout<<count<<endl;
            auto p = q.front();
            while(!q.empty()){
                p = q.front();
                cout<<p.fi<<" "<<p.se<<endl;
                q.pop();
            }
        }
        else cout<<-1<<endl;
        
    }
    return 0;
}