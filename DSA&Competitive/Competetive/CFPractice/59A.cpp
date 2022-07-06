// https://codeforces.com/problemset/problem/59/A
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
        string s;
        cin>>s;
        int uc = 0;
        int lc = 0;
        REP(i,s.length()){
            if(s[i] >= 'a' and s[i] <= 'z'){
                lc++;

            }
            else uc++;
        }
        if(uc>lc){
            for_each(s.begin(), s.end(), [](char & c){c = toupper(c);});
        }
        else{
            for_each(s.begin(), s.end(), [](char & c){c = tolower(c);});

        }
        cout<<s;
    }
    return 0;
}