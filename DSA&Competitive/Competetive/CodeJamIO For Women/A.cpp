#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define REP(i, n) FOR(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define ll long long
#define vi vector<int> 
#define umpii unordered_map<int ,int> 
#define pii pair<int,int> 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt = 1;
    cin>>ttt;
    for(int abc = 1; abc<= ttt; abc++){
        int topleftI = 0, bottleftI = 0, toprightI = 0 , bottrightI = 0;
        int n;
        cin>>n;
        vector<string> str(2*n);
        for (int i = 0; i < 2*n; i++)
        {
            cin>>str[i];
        }
        for(int i = 0; i< n; i++){
            REP(j,n){
                if(str[i][j] == 'I'){
                    topleftI++;
                    
                }
            }
        }
        REP(i,n){
            FOR(j,n,2*n){
                if(str[i][j] == 'I'){
                    toprightI++;
                    
                }
            }
        }
        for(int i = n; i< 2*n; i++){
            REP(j,n){
                if(str[i][j] == 'I'){
                    bottleftI++;
                    
                }
            }
        }
        for(int i = n; i< 2*n; i++){
            FOR(j,n,2*n){
                if(str[i][j] == 'I'){
                    bottrightI++;
                    
                }
            }
        }
        
        int ans = max(abs((topleftI+toprightI) - (bottleftI + bottrightI)),abs((topleftI+bottleftI) - (toprightI + bottrightI)));
        cout<<"Case #"<<abc<<": "<<ans<<endl;
        

    }
    return 0;
}