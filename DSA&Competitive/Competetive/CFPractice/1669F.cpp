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

//7 3  20 5  15 1  11 8  10
//7 10 30 35 50 51
//           35 30 29 18 10
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt = 1;
    cin>>ttt;
    while(ttt--){
        int n;
        cin>>n;
        vl v(n);
        vl a(n);
        vl b(n);
        REP(i,n){
            cin>>v[i];
        } 
        a[0] = v[0];
        b[n-1] = v[n-1];

        for(int i = 1; i < n; i++){
            a[i] += v[i] + a[i-1];
        }
        for(int i = n-2; i >= 0; i--){
            b[i] += v[i] + b[i + 1];
        }
        int l = 0,r = n - 1;
        int count =0;

        while(l < r){
            if(a[l] < b[r]){
                l++;
            }
            else if(b[r] < a[l]){
                r--;
            }
            else {
                count = l + 1;
                count += n - r;
                l++;r--; 
            }
        }
        cout<<count<<endl;
    }
    return 0;
}