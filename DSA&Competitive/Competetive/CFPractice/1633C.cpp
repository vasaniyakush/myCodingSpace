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
    cin>>ttt;
    while(ttt--){
        double hc,dc;
        cin>>hc>>dc;
        double hm,dm;
        cin>>hm>>dm;
        double k,w,a;

        cin>>k>>w>>a;
        bool ok = false;
        for(ll i = 0; i <= k ; i++){
            // cout<<ceil((hc + a*(k-i))/dm)<<" "<<ceil((hm)/(dc + w*(i)))<<endl;
            if( ceil((hc + a*(i))/dm) >= ceil((hm)/(dc + w*(k-i)))){
                ok = true;
                break;
            }
        }
        if(ok)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}