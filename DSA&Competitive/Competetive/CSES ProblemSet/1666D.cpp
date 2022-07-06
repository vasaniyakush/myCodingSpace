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
template<class T>
istream& operator>>(istream &in , vector<T> &v){
    for(auto i = v.begin(); i != v.end();++i){
        cin>>*(i);
    }
    return in;
}
template<class T>
ostream& operator<<(ostream &out , vector<T> &v){
    for(auto i:v) out<<i<<" ";
        cout<<endl;
    return out;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt = 1;
    cin>>ttt;
    while(ttt--){
        string s;
        string ch;
        cin>>s;
        cin>>ch;
        int j = ch.length() - 1;
        int i = s.length() - 1;
        bool ok = false;
        int n = s.length();
        vector<int> last(26,n);
        // REP(i,26){
        //     cout<<last[i]<<" ";
        // }
        int la = n;
        while(i>=0 and j>=0){
            // cout<<i<<" "<<j<<" "<<s[i]<<" "<<ch[j]<<" "<<last[ch[j]- 'A']<<" "<<la<<endl;
            if(ch[j] == s[i]){
                if(i >= last[ch[j] - 'A']){
                    i--;
                    continue;
                }
                else if(i > la){
                    ok = false;
                    break;
                }
                else {
                    la = i;
                    last[ch[j] - 'A'] = i;
                    j--;
                    i = n -1;
                }
            }
            else i--;
            if(j == -1){
                ok = true;
                // break;
            }
        }
        if(ok) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}