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
        ll n,num;
        cin>>n;
        string s;
        cin>>s;
        // cin>>num;
        // REP(i,100000){
        //     num += char((rand() % 10) + '0'); 
        // }
        // cout<<"hello";
        string ans;
        bool ok = true;
        if(s[0] == '9'){
            ok = false;
            // if(n == 1){
            //     ans = "11";
            // }

           
                ans = "1";
                REP(i, n ){
                    ans += "1";
                }
                // ans += "1";
            
        }
        else {
            REP(i,n){
                ans+="9";
            }
        }
        string xx;
        if(ok){
            REP(i,n){
                xx += char((ans[i] - s[i]) + '0');
            }
        }
        else{
            char val;
            for(int i = n - 1; i>=0 ; i--){
                if(ans[i+1] < s[i]){
                    ans[i] = char(ans[i] - 1);
                    ans[i+1] = char(ans[i+1] + 10);
                    val = char((ans[i+1] - s[i]) + '0');
                }
                else{
                    val = char((ans[i+1] - s[i]) + '0');
                }
                xx = val + xx;
            }
        }
        // cout<<s.max_size()<<endl;
        cout<<xx<<endl;

        // int xx = stoi(ans);
        // cout<<ans<< " "<<xx;
        // cout<<xx-num<<endl;
    }
    return 0;
}