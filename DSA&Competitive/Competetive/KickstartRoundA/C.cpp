#include<bits/stdc++.h>
using namespace std;
#define int long long
pair<long long,long long> prosum(int x){
    int pro = 1,sum = 0;
    string s = to_string(x);
    for(char c:s){
        pro*= (c - 48);
        sum += (c-48);
    }
    return make_pair(pro,sum);
}
signed main(){
    int ttt;
    cin>>ttt;
    for(int abc = 1; abc <= ttt; abc++){
        // long long pro = 1,sum = 0;
        pair<int,int> p;
        int l,r;
        cin>>l>>r;
        // cout<<"hello";
        int count = 0;
        // ofstream out("ans.txt");
        for(int i = l; i <= r; i++)
        {
            // cout<<i;
            p = prosum(i);
            if(p.first % p.second == 0){
                count++;
            }
            
        }
        cout<<"Case #"<<abc<<": "<<count<<endl;
    }

    return 0;
}