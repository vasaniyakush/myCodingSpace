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
ll valFind(vl &v ){
    ll ans = 0;
    int i = 0;
    if(i == v.size()) return 0;
    ll count = 1;
    FOR(j,i + 1,v.size() - 1){
        if(v[i] == v[i-1]){
            count++;
        }
        else{
            ans += (count*(count + 1))/2;
            count = 1;
        }
    }
    ans += (count*(count + 1))/2;
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt = 1;
    cin>>ttt;
    while(ttt--){
        int n,k;
        cin>>n>>k;
        vl v(n);
        REP(i,n){
            cin>>v[i];
        }
        ll ans = 0;
        ll count;
        int i;
        int l = 0;
        bool flag = true;
        while(k>0 and flag){
            flag = false;
            for( i = 1; i < n;i++){
                // ans = i;

                if(k == 0) break;
                if(v[i] == v[i - 1]){
                    count ++;
                    flag = true;
                }
                else{
                    
                    if(count > 1){
                        k--;
                        v[(int)ceil((l + (l + count - 1))/2.0)] *= -1;
                    }
                    l = i;
                    count = 1;


                }
            }
            if(k != 0 and i == n and flag)
            if(count > 1){
                k--;
                v[(int)ceil((l + (l + count - 1))/2.0)] *= -1;
            }
        }
        // ans = i;
        ans+= valFind(v);
        cout<<ans<<endl;

        
        
        
    }
    return 0;
}
