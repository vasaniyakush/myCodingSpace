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
template<class T>
istream& operator>>(istream &in , vector<T> &v){
    for(auto i = v.begin(); i != v.end();++i){
        cin>>*(i);
    }
    return in;
}
template<class T>
ostream& operator<<(ostream &out , vector<T> &v){
    for(auto i:v) out<<i<<" ";
        cout<<endl;
    return out;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt = 1;
    // cin>>ttt;
    while(ttt--){
        ll n,k;
        cin>>n>>k;
        vl v(n);
        cin>>v;
        sort(ALL(v));
        ll count = n;
        ll sum = 0;
        // cout<<
        // cout<<v;
        // VALUE(v);
        ll i = 0, j = n -1;
        while(i<j){
            if(v[i] + v[j] <= k){
                count--;
                i++;j--;
            }
            else j--;
        }
        cout<<count;
    }
    return 0;
}