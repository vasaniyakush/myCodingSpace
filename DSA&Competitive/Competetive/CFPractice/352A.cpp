// https://codeforces.com/problemset/problem/352/A
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
        int n;
        cin>>n;
        int numz = 0,numf = 0;
        int x;

        REP(i,n)
        {
            cin>>x;
            if(x == 5) numf++;
            else numz++;
        }
        if(numz == 0){
            cout<< -1;
        }
        else if(numf < 9){
            cout<<0;
        }
        else {
            int num = numf - (numf%9);
            string s;
            REP(i,num){
                s = s + "5";
            }
            REP(i,numz){
                s = s + "0";
            }
            cout<<s;
        }
    }
    return 0;
}