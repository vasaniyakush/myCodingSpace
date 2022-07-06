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
        int n;
        cin>>n;
        vi v(n);
        unordered_map<int,int> ump;
        string ans = "YES";
        REP(i,n){
            cin>>v[i];
            ump[v[i]]++;
            
        }
        vi v2(n);
        bool ok = true;
        sort(ALL(v));
        if(n%2 == 1){
            cout<<"NO";
        }
        else{
            for(auto itr:ump){
                if( itr.second > n/2 ){
                    cout<<"NO";
                    ok = false;
                }
            }
            if(ok){
                cout << "YES" << endl; 
                for (int i = 0; i < n/2; i++) 
                    cout << v[i] << " " << v[i+n/2] <<" ";
            }
        }
        cout<<endl;
        

    }
    return 0;
}