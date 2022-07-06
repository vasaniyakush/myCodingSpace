// https://codeforces.com/problemset/problem/34/A
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
        int arr[n];
        REP(i,n){
            cin>>arr[i];
        }
        int i = 0,j = 1;
        int size = n;
        int diff = INT_MAX;
        int ansi,ansj;
        while(size--){
            // diff  = min(diff,abs(arr[i]- arr[j]));
            // VALUE(i);
            // VALUE(j);
            // VALUE(arr[i]);
            // VALUE(arr[j]);
            // VALUE(diff);
            if(abs(arr[i] - arr[j]) < diff){
                ansi = i;
                ansj = j;
                diff = abs(arr[i] - arr[j]);
            }
            // VALUE(diff);
            // VALUE(ansi);
            // VALUE(ansj);
            i = (i + 1)%n;
            j = (j + 1)%n;
        }
        cout<<ansi + 1 <<" "<<ansj + 1;

    }
    return 0;
}