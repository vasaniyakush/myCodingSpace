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
        vi v;
        int x;
        REP(i,n){
            cin>>x;
            v.push_back(x);
        }
        // for(auto x:v){cout<<x;}
        // cout<<endl;
        stack<int> s;
        REP(i,n){
            s.push(n - i);
        }
        if(n == 1){
            cout<<-1<<endl;
            continue;
        }
        vi ans;
        int temp;
        REP(i,n){
            temp = s.top();
            s.pop();
            if(v[i] == temp){
                if(!s.empty())
                ans.push_back(s.top());
                else{
                    ans.push_back(temp);
                    swap(ans[n -1],ans[n-2]);
                }
                if(!s.empty())
                s.pop();
                s.push(temp);
            }
            else ans.push_back(temp);
        }
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}