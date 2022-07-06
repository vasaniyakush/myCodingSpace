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
        string s[8];
        REP(i,8){
            getline(cin>>ws,s[i]);
        }
        int cnth = 0, cntf = 0;
        int l = 0;
        REP(i,8){
            cnth = 0;
            REP(j,8){
                if(s[i][j] == '#'){
                    cnth++;
                }
            }
            if(cnth == 2){
                l = i;
                break;
            }
        }
        int r = 0;
        for(int i = l;i<8;i++){
            cnth =0;
            for(int j = 0;j<8;j++){
                if(s[i][j] == '#'){
                    cnth++;
                    r = j;
                }
            }
            if(cnth == 1){
                l = i;
                break;
            }

        }
        cout<<l+ 1<<" "<<r+1<<endl;
    }
    return 0;
}