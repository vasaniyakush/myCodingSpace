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
        int r,b;
        cin>>r>>b;
        int x;
        if(b == 1)x = r/2;
        else
        x = r / (b + 1);
        int t = x;
        int mm = r%(b+1);
        
        string ans2;
        while(x--){
            ans2+= 'R';

        }
        // VALUE(ans2);
        string ans;
        while(b--){
            ans += ans2;
            if(mm > 0){
                ans+= "R";
                mm--;
                r--;
            }
            ans+="B";
            r -= t;
        }
        while(r>0){
            ans+= "R";
            r--;
        }
        cout<<ans<<endl;
        
    }
    return 0;
}