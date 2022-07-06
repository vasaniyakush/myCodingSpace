// https://codeforces.com/contest/1660/problem/D
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
        string s;
        cin>>s;
        vector<char> v;
        if(s.length() == 1){
            cout<<"1"<<endl;
            continue;
        }
        int count = 0;
        v.push_back(s[0]);
        FOR(i,1,s.length()){
            if(s[i] == v.back()){
                v.pop_back();
                count += v.size();
                v.clear();
            }
            else{
                auto itr = find(ALL(v),s[i]);
                if(itr == v.end()){
                    v.push_back(s[i]);
                }
                else{
                    while (s[i] != v.back() and !v.empty())
                    {
                        count ++;
                        v.pop_back();
                    }
                    v.pop_back();
                    count += v.size();
                    v.clear();
                }
                
                
            }
        }
        count+=v.size();
        cout<<count<<endl;
    }
    return 0;
}