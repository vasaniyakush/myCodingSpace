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
        ll x,y;
        cin>>x>>y;
        if(x == 0 and y !=0){
            cout<< -1<<endl;
            continue;
        }
        else if(x != 0 and y == 0){
            cout<< -1<<endl;
            continue;
        }
        ll count = 0;
        if(x > y ){
            swap(x,y);
        }
        while(x != 0 and y != 0){
            if(x == 1 and y == 2){
                count+=3;
                x = y = 0;
            }
            else if(x == y){
                count+= x;
                break;
            }
            else if(y > x){
                ll temp = y/x;
                temp = log2(temp);
                if(temp > 0){
                    count += temp;
                    x = x*(pow(2,temp));
                }
                else {
                    count += (x -1);
                    y -= x - 1;
                    x = 1;
                }
            }
            
            
        }
        cout <<count<<endl;
       
    }
    return 0;
}
