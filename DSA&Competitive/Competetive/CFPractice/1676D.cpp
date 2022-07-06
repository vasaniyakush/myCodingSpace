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
        ll n,m;
        cin>>n>>m;
        vvl v(n,vl(m));
        vvl tra(n,vl(m,0));
        REP(i,n){
            REP(j,m){
                cin>>v[i][j];
            }
        }
        ll sum = 0;
        for(int i = n - 1; i >=0 ; i--){
            sum = 0;
            for(int j = 0; j< m  and i + j <n;j++ ){
                sum+= v[i + j][j];
            }
            for(int j = 0; j< m  and i + j < n;j++ ){
                tra[i+j][j] = sum;
            }
        }
        for(int j = 1; j < m ; j++){
            sum = 0;
            for(int i = 0; i < n and i + j < m;i++ ){
                sum+= v[i][i + j];
            }
            for(int i = 0; i < n and i + j < m;i++ ){
                tra[i][i + j] = sum;
            }
        }
        //right to left
        for(int i = n - 1; i >=0 ; i--){
            sum = 0;
            for(int j = m-1; j >= 0  and i + m - 1 - j <n;j-- ){
                sum+= v[i + m - 1- j][j];
            }
            for(int j = m-1; j >= 0  and i + m - 1-  j <n;j--  ){
                tra[i +m - 1 - j][j] += sum;
            }
        }
        for(int j = m - 2; j >= 0 ; j--){
            sum = 0;
            for(int i = 0; i < n and j - i >= 0;i++ ){
                sum+= v[i][j - i];
                // cout<<i<<" "<<j - i<<endl;
            }
            for(int i = 0; i < n and j - i >= 0;i++ ){
                tra[i][j - i] += sum;
                // cout<<i<<" "<<j - i<<endl;
            }
            
        }
        int ansi = 0 ,ansj = 0;
        sum = INT_MIN;
        REP(i,n){
            REP(j,m){
                // cout<<tra[i][j] - v[i][j];
                sum = max(sum , tra[i][j] - v[i][j]);
            }
            // cout<<endl;
        }
        cout<<sum<<endl;
        
    }
    return 0;
}