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
int main()
{
    int n = 5,game[6][6];
    for(int i = 0 ; i < n ; ++i)
        for(int j = 0 ; j < n ; ++j)
            cin >> game[i][j];
    int p[6], panss[6], anss = -1, temp;
    for(int i = 0 ; i < n ; ++i)
        p[i] = i;
    
    do
    {
        //01234
        temp = game[p[0]][p[1]] + game[p[1]][p[0]];
        temp += game[p[2]][p[3]] + game[p[3]][p[2]];
        
        //1234
        temp += game[p[1]][p[2]] + game[p[2]][p[1]];
        temp += game[p[3]][p[4]] + game[p[4]][p[3]];
        
        //234
        temp += game[p[2]][p[3]] + game[p[3]][p[2]];
        
        //34
        temp += game[p[3]][p[4]] + game[p[4]][p[3]];
        
        if(temp > anss)
        {
            anss = temp;
            for(int i = 0 ; i < n ; ++i)
                panss[i] = p[i];
        }
    }
    while(next_permutation(p, p+n));
    
    cout << anss << "\n";
    return 0;
}