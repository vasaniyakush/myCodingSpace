// https://codeforces.com/problemset/problem/266/B
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

// void transformm(string &s,int start,int t){
//     while(t-- and start< s.length() - 1){
//         if(s[start + 1] == 'G'){
//             swap(s[start],s[start + 1]);
//             start++;
//         }
//         else {
//             start++;
//             // break;
//         }
//     }
  
// }
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt = 1;
    //cin>>ttt;
    while(ttt--){
        int n,t;
        cin>>n>>t;
        string s;
        cin>>s;
        int  i = 0;
        while(t--){
            REP(i,n -1){
                if(s[i]=='B' and s[i + 1] == 'G'){
                    swap(s[i],s[i + 1]);
                    i++;
                }
            }
        } 
        cout<<s;
    }
    return 0;
}