// https://codeforces.com/contest/1690/problem/B
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
        cin>>n;
        vi a(n);
        vi b(n);
        REP(i,n){
            cin>>a[i];
        }
        REP(i,n){
            cin>>b[i];
        }
        string ans = "YES";
        int diff = INT_MAX;
        REP(i,n){
            if(b[i] <= a[i] and b[i] != 0){
                diff = min(diff,a[i] - b[i]);
            }
        }
        REP(i,n){
            
            if(b[i] > a[i]){
                ans = "NO";
                break;
            }
            
            if(a[i] - b[i] == diff){
                continue;
            }
            else if(a[i] - b[i] > diff){
                ans = "NO";
                break;
            }
            else if(a[i] - b[i] < diff){
                if(b[i] == 0){
                    continue;
                }
                else{
                    ans = "NO";
                    break;
                }
            }

        }
        cout<<ans<<endl;
    }
    return 0;
}