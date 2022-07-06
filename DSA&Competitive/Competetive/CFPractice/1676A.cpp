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
        int num1= 0;
        int num2 = 0;

        num1 += s[0]-48;
        num1 += s[1]-48;
        num1 += s[2]-48;
        num2 += s[3]-48;
        num2 += s[4]-48;
        num2 += s[5]-48;
        if(num1 == num2){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;  

    }
    return 0;
}