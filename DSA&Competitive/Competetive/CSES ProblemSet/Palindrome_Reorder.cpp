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
typedef map<int,int> mii;
typedef unordered_map<int,int> umii;
typedef map<ll,ll> mll;
typedef unordered_map<ll,ll> umll;
ll m = 1e9 + 7;
double epsilon = 1e-6;
#define fi first
#define se second
#define mkp make_pair
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
    // cin>>ttt;
    while(ttt--){
        string s;
        cin>>s;
        map<char,int> mp;
        REP(i,s.length()){
            ++mp[s[i]];
        }
        int cnt = 0;
        bool ok = true;
        char ch;
        bool cha = true;
        for(auto p:mp){
            if(p.second % 2 ==1){
                cnt++;
                if(cha){
                    ch = p.first;
                    cha = false;
                    mp[ch]--;
                }
            }
            if(cnt>1){
                ok = false;
                break;
            }
            
        }
        if(!ok){
            cout<<"NO SOLUTION"<<endl;
        }
        else{
            string ans1;
            for(auto p:mp){
                int x = p.se/2;
                while(x--){
                    ans1+= p.fi;
                }
            }
            string ans2 = ans1;
            reverse(ALL(ans2));
            if(!cha){
                ans1+=ch;
            }
            ans1+=ans2;
            cout<<ans1<<endl;
        }

    }
    return 0;
}