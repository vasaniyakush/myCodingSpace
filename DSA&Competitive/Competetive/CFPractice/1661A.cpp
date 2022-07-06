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
        ll n;
        cin>>n;
        vl v1(n);
        vl v2(n);
        REP(i,n){
            cin>>v1[i];
        }
        REP(i,n){
            cin>>v2[i];
        }
        // int count = 0;
        REP(i,n - 1){
            if(abs(v2[i] - v1[i + 1]) + abs(v1[i] - v2[i + 1]) < abs(v1[i] - v1[i + 1]) + abs(v2[i] - v2[i + 1])) {
                swap(v1[i],v2[i]);
                // count++;
                i = max(-1, i - 2);
            }
        }
        ll sum = 0,sum2 = 0;
        REP(i,n-1){
            sum += abs(v1[i] - v1[i + 1]);
            // sum2 = abs(v2[i] - v2[i + 1]);
        }
        REP(i,n-1){
            sum += abs(v2[i] - v2[i + 1]);
            // sum2 = abs(v2[i] - v2[i + 1]);
        }
        // REP(i,n){
        //     cout<<v1[i]<<" ";
        // }
        // cout<<endl;
        // REP(i,n){
        //     cout<<v2[i]<<" ";
        // }
        cout<<sum<<endl;
    }
    return 0;
}