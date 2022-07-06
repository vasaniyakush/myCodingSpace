#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int ttt;
    cin>>ttt;
    while(ttt--){
        int row,col;
        cin>>row>>col;
        int val = 1;
        // if((max(row,col) % 2)  == 0)
        //     val = ((max(row,col) - 1) * 4) - 1;
        // else
        //     val = ((max(row,col) - 1) * 4) + 1;
        // for(int i = 1; i <= max(row,col); i++){
        //     val = val + (( i - 1)*2);
        // }
        int maxx = max(row,col);
        val = 1 + 2*(  ((maxx - 1)  * ( maxx))/2 );

        // cout<<"val = "<<val<<endl;
        if(row == col) cout<<val<<endl;
        else if(row > col){
            if(row % 2 != 0){
                cout<<val - row + col<<endl ;
            }else{
                cout<<val + row - col<<endl ;
            }
        }
        else if(col > row){
            if(col % 2 == 0){
                cout<<val - col + row<<endl;
            }else{
                cout<<val + col - row<<endl;
            }
        }
        
    }
    return 0;
}