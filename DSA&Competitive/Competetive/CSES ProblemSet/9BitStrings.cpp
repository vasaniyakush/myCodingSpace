#include<bits/stdc++.h>
using namespace std;
#define m (int)10e9+7
#define int long long
signed main(){
    int n;
    cin>>n;
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans = (ans % (int)(1e9+7) )*2;
        // cout<<ans<<endl;
        ans = ans%(int)(1e9 + 7);
        // cout<<ans<<endl<<endl;
    }
    ans = ans%(int)(1e9+7);
    cout<<ans;
    

    return 0;
}