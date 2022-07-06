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
        vi v(n),x;
        map<int,int> mp;
        bool ok = true;
        REP(i,n){
            cin>>v[i];
            if(v[i] != 0){
                x.push_back(v[i]);
            }
            else{
                if(ok){
                    ok = false;
                    x.pb(v[i]);
                }
            }
            // mp[v[i]]++;
        }
        if(x.size() == 1 and x[0] == 0){
            cout<<"YES"<<endl;
            continue;
            
        }
        else if(x.size() == 2 and (x[0] == 0 or x[1] == 0)){
            cout<<"YES"<<endl;
            continue;
        }
        else if(x.size() == 3){
            if(find(x.begin(),x.end(),x[0] + x[1] + x[2]) != x.end()){
                cout<<"YES"<<endl;
                continue;
            }
        }
        else if(x.size() == 4 or x.size() == 5){
            ok = true;
            REP(i,x.size()){
                REP(j,x.size()){
                    REP(k,x.size()){
                        if(i != j and i != k and j != k and j!= i and k != i and k != j){
                        // cout<<i<<" "<<j<<" "<<k<<" "<<x[i] + x[j] + x[k]<<endl;
                            if( find(x.begin(),x.end(),x[i] + x[j] + x[k]) == x.end()) {
                                // cout<<"false "<<i<<" "<<j<<" "<<k<<" "<<x[i] + x[j] + x[k]<<endl;
                                ok = false;
                            }
                        }
                    }
                }
            }
            if(ok) {cout<<"YES"<<endl;
            continue;
            }
            
        }
        cout<<"NO"<<endl;
        // if(mp.size() ==1 and mp[0] > 0){
        //     // if(mp[0] > 0){
        //         cout<<"YES";
        //     // }

        // }
        // else if(mp.size())

        // if(mp.size() > 3){
        //     cout<<"NO"<<endl;
        //     continue;
        // }
        // if()
        // else if((-1)*(mp.begin()->first) != mp.rbegin()->first){
        //     cout<<"NO"<<endl;
        //     continue;
        // }
        // else if((++(mp.begin()))->first != 0){
        //     cout<<"NO"<<endl;
        // }
        // // else cout<<"YES"<<endl;
        // if(mp.size() == 1){
        //     if(mp[0] >0){
        //         cout<<"YES"<<endl;
        //         continue;
        //     }
        // }
        // else if(mp.size() == 3){
        //     // if(((-1)*(mp.begin()->first) == mp.rbegin()->first) and (mp[0]>0) and mp.begin()->second == 1 and mp.rbegin()->second == 1){
        //     //     cout<<"YES"<<endl;
        //     //     continue;
        //     // }

        //     // else cout<<"NO";
        // }
        // else if(v.size() == 3){
        //     ll sum = accumulate(ALL(v),0LL);
        //     if(sum == 0){
        //         cout<<"YES<<"<<endl;
        //         continue;
        //     }
        // }
        // cout<<"NO"<<endl;

    }
    return 0;
}