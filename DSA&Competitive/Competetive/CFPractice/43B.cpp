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
        string s1;
        string s2;
        getline(cin,s1);
        getline(cin,s2);
        unordered_map<char,int> ump;
        REP(i,s1.length()){
            if(s1[i] == ' ') continue;
            else ump[s1[i]]++;
        }
        string ans = "YES";
        REP(i,s2.length()){
            if(s2[i] == ' ')continue;
            if(ump[s2[i]] <= 0){
                ans = "NO";
                break;
            }
            else ump[s2[i]]--;
        }
        cout<<ans;
    }
    return 0;
}