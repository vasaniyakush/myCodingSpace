// https://codeforces.com/problemset/problem/275/A
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
void toggle(vvi & v,int i,int j){
    v[i][j] = abs(v[i][j] - 1);
    if(i - 1 >=0){
        v[i- 1][j] = abs(v[i -1][j] - 1);
    }
    if(i + 1 < 3){
        v[i + 1][j] = abs(v[i + 1][j] - 1);
    }
    if(j - 1 >=0){
        v[i][j- 1] = abs(v[i ][j - 1] - 1);
    }
    if(j + 1 < 3){
        v[i ][j + 1] = abs(v[i ][j + 1] - 1);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt = 1;
    //cin>>ttt;
    while(ttt--){
        vector<vector<int>> ans(3,vector<int> (3,1));
        vector<vector<int>> v(3,vector<int> (3,1));
        REP(i,3){
            REP(j,3){
                cin>>v[i][j];
                if(v[i][j] % 2 == 1){
                    toggle(ans,i,j);
                }
            }
        }
        REP(i,3){
            REP(j,3){
                cout<<ans[i][j];
            }
            cout<<endl;
        }

    }
    return 0;
}