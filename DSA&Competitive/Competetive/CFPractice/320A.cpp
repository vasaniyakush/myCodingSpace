// https://codeforces.com/problemset/problem/320/A
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
        string s,ans = "YES";
        cin>>s;
        int len = s.length();
        FOR(i,0,len){
            if(s[i] == '1'){
                if(i+1<len and s[i + 1] == '4'){
                    if(i+2 < len and s[i + 2] == '4'){
                        i+=2;
                    }
                    else{
                        i+=1;
                    }

                }
                else{continue;}
            }
            else ans = "NO";
        }
        cout<<ans;
    }
    return 0;
}