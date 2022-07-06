// https://codeforces.com/problemset/problem/208/A
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
        string s,ans;
        cin>>s;
        int len = s.length();
        REP(i,len){
            if(s[i] == 'W'){
                if(i+1<len and s[i+1] == 'U'){
                    if(i+2 <len and s[i + 2]  == 'B'){
                        ans += ' ';
                        i+=2;
                    }
                    else ans += 'W';
                }
                else ans += 'W';
            }
            else ans += s[i];
        }
        len = ans.length();
        int j = 0;
        while(j < len){
            if(ans[j] != ' '){
                break;
            }
            else ans.erase(j,1);
            len--;
        }
        REP(i,len - 1){
            if(ans[i] == ' ' and ans[i + 1] == ' '){
                ans.erase(i + 1,1);
                len--;i--;
            }
        }
        cout<<ans;
    }
    return 0;
}