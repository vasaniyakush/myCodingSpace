#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt;
    cin>>ttt;
    while(ttt--){
        string s;
        cin>>s;
        int n = s.length();
        int maxc = 0;
        int nz = 0 ,no = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '0') nz++; else no++;
        }
        if(nz == no) cout<<nz-1<<"\n";
        else cout<<min(nz,no)<<"\n";
            
    }

return 0;
}