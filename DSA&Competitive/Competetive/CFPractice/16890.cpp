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
        int n,m,k;
        cin>>n>>m>>k;
        string a;
        string b;
        cin>>a;
        cin>>b;
        map<char,int> ma;
        map<char,int> mb;
        REP(i,n){
            ma[a[i]]++;
            
        }
        REP(i,m){
            mb[b[i]]++;
        }
        auto ita = ma.begin();
        auto itb = mb.begin();
        bool ok;
        if((*ita).first < (*itb).fi)
            ok = true;
        else ok = false;
        string ans;
        int kini = k;
        while(n>0 and m >0){
            
            if(ok){

                ans += (*ita).fi;(*ita).se--;
                n--;
                k--;
                if((*ita).se == 0){
                    ita++;
                }
                if((*ita).first < (*itb).fi)
                    ok = true;
                else {ok = false;k = kini;}
                if(k == 0) {
                    ok = false;
                    k = kini;
                }
            }
            else {
                ans += (*itb).fi;(*itb).se--;
                m--;
                k--;
                if((*itb).se == 0){
                    itb++;
                }
                if((*ita).first < (*itb).fi)
                    {ok = true;k = kini;}
                else {ok = false;}
                if(k == 0){
                    ok = true;
                    k = kini;
                }
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}