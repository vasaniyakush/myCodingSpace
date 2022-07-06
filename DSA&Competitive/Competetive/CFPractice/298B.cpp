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
    //cin>>ttt;
    while(ttt--){
        ll t,sx,sy,ex,ey;
        cin>>t>>sx>>sy>>ex>>ey;
        ll count = 0;
        char ch;
        ll dx = ex - sx;
        ll dy = ey - sy;

        REP(i,t){
            cin>>ch;
            if(ch == 'N'){
                if(dy > 0){
                    dy--;
                }
            }
            else if(ch == 'S'){
                if(dy< 0){
                    dy++;
                }
            }
            else if(ch == 'E'){
                if(dx > 0){
                    dx--;
                }
            }
            else if(ch == 'W'){
                if(dx < 0){
                    dx++;
                }
            }
            count++;
            if(dx == 0 and dy == 0){
                break;
            }
        }
        if(dx == 0 and dy == 0){
            cout<<count;
        }
        else cout<<-1;
        
    }
    return 0;
}