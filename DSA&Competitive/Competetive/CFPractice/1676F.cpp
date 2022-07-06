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
        ll n,k;
        cin>>n>>k;
        vl v(n);
        map<ll,ll> mp;
        map<ll,ll> mp2;
        REP(i,n){
            cin>>v[i];
            mp[v[i]]++;
        }
        ll a,b,c,d;
        // sort(ALL(v));
        for(auto p:mp){
            if(p.se >= k){
                mp2[p.fi] = p.se;
                // VALUE(p.first);
                // VALUE(p.second);
            }
            
        }
        // cout<<endl;
        if(mp2.empty()){
            cout<<-1<<endl;
            continue;
        }
        else if(mp2.size() == 1){
            cout<<mp2.begin()->first<<" "<<mp2.begin()->first<<endl;
            continue;
        }
        // for(auto p:mp2){
        //     VALUE(p.first);
        // }
        // a = (mp2.begin())->first;
        // int l = a;
        // int r = a;
        vi diff;
        auto j = mp2.begin();
        j++;
        for(auto i = mp2.begin() ; j != mp2.end();j++,i++){

            // cout<<(*i).first<<" "<<(*j).first<<endl;
            diff.push_back((*j).fi - (*i).fi);
            
        }
        for(ll x:diff){
            // VALUE(x);
        }
        ll cnt = 0,cntm = INT_MIN;
        a = -1,b = -1;
        REP(i,diff.size()){
            if(diff[i] == 1){
                cnt++;
                if(cnt == 1)
                b = i;
                if(cnt > cntm){
                    cntm = cnt;
                    
                    a = b;
                }
            }
            else{
                cnt = 0;
            } 
            // VALUE();
        }
            // VALUE(a);
            // VALUE(cnt);
        if(a == -1){
            cout<<mp2.begin()->first<<" "<<mp2.begin()->first;
        }
        else{
            auto i = mp2.begin();
            d = a;
            while(d--){
                i++;
            }
            ll a1 = (*i).first;
            while(cntm--){
                i++;
            }
            ll a2 = (*i).first;
            cout<<a1<<" "<<a2;
        }
        cout<<endl;

        



        
    }
    return 0;
}