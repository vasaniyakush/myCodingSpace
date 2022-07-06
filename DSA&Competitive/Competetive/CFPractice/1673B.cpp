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
        string s;
        cin>>s;
        int n = s.length();
        map<int,vector<int>> mp;
        REP(i,n){
            mp[s[i]].push_back(i);
        }
        int num = mp.size();
        bool ok = true;
        for(auto p:mp){
            vi &v = p.second;
            for(int i = 0; i < v.size() - 1;i++){
                if(v[i+1] - v[i] < num){
                    ok = false;
                    break;
                }
            } 
            if(!ok){
                break;
            }
        }
        if(ok){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;

        
    }
    return 0;
}