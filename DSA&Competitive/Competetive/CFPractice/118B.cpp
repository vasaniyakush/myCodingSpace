// https://codeforces.com/problemset/problem/118/B
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
        int n,k = 0;
        cin>>n;
        for(int i = 0; i <= n; i++){
            k = 0;
            for(int j = 0; j <=n; j++){
                if(j >= n - i){
                    if(i == 0) cout<<"0";
                    else cout<<k++<<" ";
                }
                else cout<<"  ";
            }
            k-=2;
            while(k>=0){
                if(k == 0)
                cout<<k--;
                else
                cout<<k--<<" ";
            }
            
            cout<<endl;
        }
        for(int i = n - 1; i >= 0; i--){
            k = 0;
            for(int j = 0; j <=n; j++){
                if(j >= n - i){
                    if(i == 0) cout<<"0";
                    else cout<<k++<<" ";
                }
                else cout<<"  ";
            }
            k-=2;
            while(k>=0){
                if(k == 0) cout<<k--;
                else
                cout<<k--<<" ";
            }
            
            cout<<endl;
        }
    }
    return 0;
}