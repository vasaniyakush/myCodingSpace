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
    // cin>>ttt;
    while(ttt--){
        int n;
        cin>>n;
        vi v(n);
        REP(i,n){
            cin>>v[i];
        }
        sort(ALL(v));
        int k;
        cin>>k;
        int x,y;
        while(k--){
            cin>>x>>y;
            
            //1 3 4 10 10
            int a,b;
            int l = 0;
            int r = n - 1;
            while(l <= r){
                int mid = (l + r)/2;
                if (v[mid] >= x){
                    r = mid - 1;
                }
                else l = mid + 1;
            }
            // cout<<l<<endl;
            a = l;
            l = 0;
            r = n - 1;

            while(l <= r){
                int mid = (l + r)/2;
                if(v[mid]> y){
                    r = mid - 1;
                }
                else l = mid + 1;

                
            }
            b = l;
            cout<<b-a <<" ";
            

        }
            
    }
    return 0;
}