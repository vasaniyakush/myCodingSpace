// https://codeforces.com/problemset/problem/271/A
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
int j,i;
bool cmp(string &s){
    for (i = 0; i < 4; i++)
    {
        for (j = (i  + 1); (j) < (4); ++(j)){
            if(s[i] == s[j]){
                return true;
            }
        }
    }
    return false;
    
}
void incc(string& s,int k){
    if(s[k] == '9'){
        s[k] = '0';
        incc(s,k - 1);
    }
    else s[k] = s[k] + 1;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt = 1;
    //cin>>ttt;
    while(ttt--){
        string s;
        cin>>s;
        incc(s,3);
        while(cmp(s)){
            incc(s,3);
        }
        cout<<s;
    }
    return 0;
}