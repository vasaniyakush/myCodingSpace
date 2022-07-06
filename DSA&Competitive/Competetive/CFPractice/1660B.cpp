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
    cin>>ttt;
    while(ttt--){
        int n;
        string ans ;
        cin>>n;
        vl v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort(ALL(v),greater<ll>());
        if(n == 1){
            if(v[0] == 1)
            ans = "YES";
            else ans = "NO";
        }
        else{
            if(abs(v[0] - v[1]) > 1){
                ans = "NO";
            }
            else{
                ans = "YES";
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}