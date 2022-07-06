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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int nw = 0, nb = 0;
        for(int i =0; i< k; i++){
            if(s[i] == 'W'){
                nw++;
            }
        }
        int minn= nw;
        vi v(n,0);
        v[k - 1] = nw;
        for(int i = 1,j = k ;i < n and j < n;i++,j++){
            if(s[i - 1] == 'W'){
                nw--;
            }
            if(s[j] == 'W'){
                nw++;
            }
            v[j]=nw;
            minn = min(nw,minn);
        }
        cout<<minn<<endl;
    }
    return 0;
}