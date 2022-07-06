// https://codeforces.com/problemset/problem/149/A
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
        int k;
        cin>>k;
        vi v(12);
        REP(i,12){
            cin>>v[i];
        }
        sort(ALL(v),greater<int>());
        int sum = 0,count = 0;
        REP(i,12){
            if(sum<k){
                sum+=v[i];
                count++;
            }
            else break;
        }
        if( sum < k)
        count = -1;
        cout<<count;

    }
    return 0;
}