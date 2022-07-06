// https://codeforces.com/contest/1690/problem/A
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
        int n;
        cin>>n;
        int h1,h2,h3;
        h1 = h2 = h3 = n/3;
        if(n%3 == 0){
            h3--;
            h1++;
        }
        else if(n%3 == 1){
            h1+=2;
            h3--;

        }
        else if(n%3 == 2){
            h1+=2;
            h2++;
            h3--;
        }
        cout<<h2<<" "<<h1<<" "<<h3;
        cout<<endl;
    }

    return 0;
}