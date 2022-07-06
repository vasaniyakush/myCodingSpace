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
        string s1,s2;
        cin>>s1;
        cin>>s2;
        if(s1.length() != s2.length()){
            cout<<"NO";
            continue;
        }
        char a = ' ';
        char b = ' ';
        string ans = "NO";
        bool ok = true;
        REP(i,s1.length()){
            if(s1[i] != s2[i] and a == ' ' and b == ' '){
                a = s1[i];
                b = s2[i];
            }
            else if(s1[i] != s2[i] ){
                if(ok){
                    if(s1[i] == b and s2[i] == a){
                        ans = "YES";
                    }
                    else ans = "NO";
                    ok = false;
                }
                else ans = "NO";
            }
            
        }
        cout<<ans;


    }
    return 0;
}