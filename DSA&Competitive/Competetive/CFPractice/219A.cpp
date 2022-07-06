// https://codeforces.com/problemset/problem/219/A
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
    //cin>>ttt;
    while(ttt--){
        int k;
        cin>>k;
        unordered_map<char,int> ump;
        string s;
        cin>>s;
        REP(i,s.length()){
            ump[s[i]]++;
        }
        string ans;
        for(auto itr:ump){
            if(itr.second % k != 0){
                ans = "-1";
                break;
            }
            else{
                REP(j,itr.second/k){
                    ans += itr.first;
                }
                itr.second -= (itr.second/k);
            }
        }
        if(ans != "-1"){
            string rep = ans;
            REP(i,k - 1 ){
                ans+=rep;
            }
            
        }
        cout<<ans;
    }
    return 0;
}