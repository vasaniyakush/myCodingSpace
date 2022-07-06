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
int s;
bool test(vector<int> &v, int &len){
    int sum = 0;
    REP(i,len){
        sum += v[i];
    }
    if(sum == s )return true;
    for(int i = 1,j = i + len - 1;j < v.size();i++,j++  ){
        sum -= v[i -1];
        sum += v[j];
        if(sum == s){
            return true;
        }
        
    }
} 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt = 1;
    cin>>ttt;
    while(ttt--){
        int n;
        cin>>n>>s;
        vi v(n);
        REP(i,n){
            cin>>v[i];
        }
        int ans = -1;
        int l = 1, r = n  ;
        while(l < r){
            int mid = (l + r)/2;
            int sum = 0,sumin = INT_MAX,sumax = INT_MIN;

            REP(i,mid){
                sum += v[i];
            }
            VALUE(sum);
            if(sum == s ){
                ans = mid;
                l = mid + 1;
            }
            for(int i = 1,j = i + mid - 1;j < v.size();i++,j++  ){
                sum -= v[i -1];
                sum += v[j];
                sumax =  max(sumax , sum);
                sumin = min(sumin,sum);
                if(sum == s){
                    l = mid + 1; 
                    break;               

                }
            }
            if(sumin > s){
                 r = mid - 1;
            }
            else if(sumin < s) {
                l = mid+ 1;
            }
        
        }
        cout<<ans<<endl;
        
    }
    return 0;
}