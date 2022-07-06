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
        ll n,m;
        cin>>n>>m;
        vl va(n);
        vector<pair<ll,ll>> va2;
        ll x;

        REP(i,n){
            cin>>va[i];
        }
        int k;
        cin>>k;
        vi vb(k);
        vector<pair<ll,ll>> vb2;
        REP(i,k){
            cin>>vb[i];
        }

        //expand a;

        REP(i,n){
            x = va[i];
            ll count = 0;
            while(x%m==0){
                count++;
                x /=m;
            }
            if(!va2.empty() and (va2.back()).fi == x){
                (va2.back()).second += pow(m,count);
            }
            else
            va2.pb({x,pow(m,count)});
        }
        REP(i,k){
            x = vb[i];
            ll count = 0;
            while(x%m==0){
                count++;
                x /=m;
            }
            
            if(!vb2.empty() and (vb2.back()).fi == x){
                (vb2.back()).second += pow(m,count);
            }
            else
            vb2.pb({x,pow(m,count)});
            // if(!vb2.empty())
            
        }
        ll sizee = va2.size();
        // cout<<"va2\n";
        // for(auto x:va2){
        //     cout<<x.fi<<" "<<x.se<<endl;
        // }
        // cout<<"vb2\n";
        // for(auto x:vb2){
        //     cout<<x.fi<<" "<<x.se<<endl;
        // }

        // REP(i,va2.size() - 1){
        //     if(va2[i].first == va2[i+1].fi){
        //         va2[i].se += va2[i+1].se;
        //         // cout<<(va2.begin()+i)->se<<endl;
        //         va2.erase(va2.begin()+i+1);
        //         i--;
        //     }
        //         sizee = va2.size();
        // }
        // cout<<"vb\n";
        // sizee = vb2.size();
        // REP(i,vb2.size() - 1 ){
        //     if(vb2[i].first == vb2[i+1].fi){
        //         vb2[i].se += vb2[i+1].se;
        //         // cout<<(vb2.begin()+i)->se<<endl;
        //         vb2.erase(vb2.begin()+i+1);
        //         i--;
        //     }
        //     sizee = vb2.size();
        // }
        // cout<<"va2\n";
        // for(auto x:va2){
        //     cout<<x.fi<<" "<<x.se<<endl;
        // }
        // cout<<"vb2\n";
        // for(auto x:vb2){
        //     cout<<x.fi<<" "<<x.se<<endl;
        // }
        if(va2 == vb2){
            cout<<"Yes"<<endl;

        }
        else cout<<"No"<<endl;
        // cout<<endl;

    }
    return 0;
}