#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt;
    cin>>ttt;
    while(ttt--){
        int l,r,a;
        cin>>l>>r>>a;
        int mult = (r/a)*a;

        if( r < mult) {
            cout<<r%a<<"\n";
            continue;
        }
        if(mult <= l){
            cout<<(r/a) + (r%a)<<endl;
            continue;
        }
        // if(a < l){
        //     cout<<max(r%a,l%a);
        // }
        if((r/a)*a > l and (r/a)*a <= r){
            // int mult = (r/a)*a;
            // int div = r/a;
            // int diff = r - a;
            // if(diff >= a - 1){
            //     cout<<div
            // }
            if((r + 1) % a == 0 or mult == l){
                cout<<(r/a) + (a - 1)<<"\n";
            }
            else{
                cout<<(mult - 1)/a + (a - 1)<<"\n";
            }
        }

    }
    return 0;
}