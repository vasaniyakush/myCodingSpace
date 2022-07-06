// https://codeforces.com/problemset/problem/445/A
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
void togg(char &put){
     if(put == 'W'){
         put = 'B';
     }
     else put = 'W';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt = 1;
    //cin>>ttt;
    while(ttt--){
        int n,m;
        cin>>n>>m;
        string s[n];
        REP(i,n){
            cin>>s[i];

        }
        string ans[n];
        char put = 'W';
        FOR(i,0,n){
            if(i%2 == 0){
                put ='W';
            }
            else put = 'B';
            FOR(j,0,m){
                if(s[i][j] == '.'){
                    ans[i] += put;
                    togg(put);
                }
                else{
                    ans[i] += '-';
                    togg(put);
                }
            }
        }
        REP(i,n){
            REP(j,m){
                cout<<ans[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}