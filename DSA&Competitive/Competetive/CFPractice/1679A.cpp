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
        ll n;
        cin>>n;
        if(n<4 or (n%2) ==1){
            cout<<-1<<endl;
            continue;
        }
        ll minn = 0;
        ll maxx = 0;
        if((n % 6) == 0){
            minn = n /6;
        }
        else{
            ll x = n;
            while((x%6) != 0){
                x-=4;
                minn++;
            }
            minn += x/6;
        }

        if((n %4) == 0){
            maxx = n/4;
        }
        else{
            n-=6;
            maxx++;
            maxx += n/4;
        }
        cout<<minn<<" "<<maxx<<endl;


    }
    return 0;
}