// https://www.codechef.com/START33D/problems/MTE
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
        ll nodd = 0,neve = 0;
        vl v(n);
        REP(i,n){
            cin>>v[i];
            if(v[i] % 2 == 0) neve ++;
            else nodd++;
        }
        if(nodd> neve){
            if(nodd %2 == 0){
                if(nodd/2 < neve){
                    cout <<nodd/2<<endl;
                }
                else cout<<neve<<endl;
            }
            else cout<<neve<<endl;
        }
        // else if(neve> nodd){
        else{
            if(nodd % 2 == 0){
                cout<<nodd/2<<endl;
            }
            else{
                cout<<neve<<endl;
            }
        }
       
    }
    return 0;
}