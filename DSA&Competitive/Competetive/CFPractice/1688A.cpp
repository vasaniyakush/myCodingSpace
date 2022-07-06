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
// int getPosOfRightmostSetBit(int n)
// {
// 	return log2(n&-n)+1;
// }

// function to get the position of rightmost unset bit
// int getPosOfRightMostUnsetBit(int n)
// {
// 	// if n = 0, return 1
// 	if (n == 0)
// 		return 1;
	
// 	// if all bits of 'n' are set
// 	if ((n & (n + 1)) == 0)
// 		return -1;
	
// 	// position of rightmost unset bit in 'n'
// 	// passing ~n as argument
// 	return getPosOfRightmostSetBit(~n);	
// }
// unsigned int getFirstSetBitPos(int n)
// {
// 	return log2(n & -n) + 1;
// }
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int ttt = 1;
	cin>>ttt;
	while(ttt--){
		int x;
		cin>>x;
		// int i = getFirstSetBitPos(x) - 1;
		// int j = getPosOfRightMostUnsetBit(x) - 1;
		// cout<<i<<" "<<j<<endl;
		// cout<<pow(2,i)+pow(2,i)<<endl;
		int y = 1;
		int l = __builtin_ffs(x) - 1;
		int cnt = __builtin_popcount(x);
		if(cnt == 1){
			if(l == 0){
				cout<<3<<endl;
			}
			else
			cout<<x+1<<endl;
			continue;
		}else{
		y = y<<l;
		// y+= 1;
		}
		cout<<y<<endl;

	}
	return 0;
}