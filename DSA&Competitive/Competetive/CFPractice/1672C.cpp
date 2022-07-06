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
        vi v(n);
        REP(i,n){
            cin>>v[i];
        }
        // list<int> li;
        // int x = v[0];
        if(n <= 2){
            cout<<0<<endl;
            continue;
        }
        // int count = 1;
        // FOR(i,1,n){
        //     if(v[i] == x){
        //         count++;
        //     }
        //     else{
        //         if(count>0)
        //         li.push_front(count);
        //         count = 1;
        //         x = v[i];
                
        //     }
        // }
        // if(count>0){
        //     li.push_back(count);
        // }
        // while(!li.empty()){
        //     if(li.back() == 1){
        //         li.pop_back();
        //     }
        //     else break;
        // }
        // while(!li.empty()){
        //     if(li.front() == 1){
        //         li.pop_front();
        //     }
        //     else break;
        // }
        // // cout <<"li: ";
        // // for(int y:li){
        // //     cout<<y<<" ";
        // // }
        // // cout<<endl;
        // int num = li.size();
        // count = 0;
        // int sum = 0;
        // while(!li.empty()){
        //     sum+=li.front();
        //     // if(li.front() > 4)
        //     //     count += li.front() -3;
        //     // else count+=1;
        //     li.pop_front();
        // }
        // cout<<sum<<endl;
        // if(sum > 3 and ){
        //     sum = sum - 3;
        // }
        // else sum = 1;
        // cout<<"sum: "<<sum<<endl;
        int l = -1 ,i,r;
        for ( i = 0; i < n - 1; i++)
        {
            if(v[i] == v[i + 1]){
                l = i;
                break;
            }
        }
        if(l == -1){
            cout<<0<<endl;
            continue;
        }
        for( i = n -2; i>=0 ; i--){
            if(v[i] == v[i + 1]){
                r= i + 1 ;
                break;
            }
        }
        if(r - l + 1 <=2){
            cout<<0<<endl;
        }
        else cout<<max(1,r - l - 2)<<endl;
        
        
    }
    return 0;
}