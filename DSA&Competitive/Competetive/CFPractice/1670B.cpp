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
        int len;
        cin>>len;
        cin>>s;
        int n;
        cin>>n;
        vector<char> v(n);
        REP(i,n){
            cin>>v[i];           
        }
        REP(i,s.length()){
            if(find(v.begin(),v.end(),s[i]) != v.end()){
                s[i] = '1';
            }
            else s[i] = '0';
        }
        // cout<<s<<endl;
        int count = 0;
        int lastone = 1;
        // cout<<s<<endl;
        REP(i,len){
            if(s[i] == '1'){

                lastone = i;
                count = i;
                // cout<<lastone<<endl;
                break;

            }
        }
        for(int i = lastone + 1; i < len ; i++){
            // cout<<s[i]<<" ";
            if(s[i] == '1'){
                count = max(count , i - lastone );
                lastone = i;
            }
        }
        // cout<<endl;
        if(count == len){
            cout<<count<<endl;
        }
        else cout<<count<<endl;

    }
    return 0;
}