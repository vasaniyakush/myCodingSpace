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
int costt(string& s1,string&s2){
    int sum = 0;
    REP(i,s1.length()){
        sum += abs(s1[i] - s2[i]);
    }
    return sum;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt = 1;
    cin>>ttt;
   
    while(ttt--){
    int costol = INT_MAX;
        int n,m;
        cin>>n>>m;
        vector<string> s(n);
        REP(i,n){
            cin>>s[i];
        }
        sort(ALL(s));
        // REP(i,n){
        //     cout<<s[i]<<" ";
        // }
        int sum;
        REP(i,n-1){
            for(int j = i + 1; j < n; j++){
                
             sum = costt(s[i],s[j]);
            // cout<<   sum<<" ";
            costol = min(costol,sum);

            }


        }
        cout<<costol<<endl;

    }
    return 0;
}