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
    //cin>>ttt;
    while(ttt--){
        int n;
        cin>>n;
        int x;
        int arr[8] = {0};
        REP(i,n){
            cin>>x;
            arr[x]++;
        }
        bool ok = true;
        if(arr[7] > 0) ok = false;
        if(arr[5] > 0) ok = false;
        if(arr[1] != n/3) ok = false;
        if(arr[6] < arr[3]) ok = false;
        if(arr[4] + (arr[6] - arr[3]) != arr[2]) ok = false;
        if(ok){
            REP(i,n/3){
                cout<<1<<" ";
                if(arr[2] > 0){
                    if(arr[4] > 0){
                        cout<<2<<" "<<4;
                        arr[2]--;arr[4]--;
                    }
                    else{ 
                        cout<<2<<" "<<6;
                        arr[2]--;arr[6]--;
                    }
                }
                else{
                    cout<<3<<" "<<6;
                    arr[3]--;arr[6]--;
                }
                cout<<endl;
            }
        }
        else cout<<-1;
    }
    return 0;
}