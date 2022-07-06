#include<bits/stdc++.h>
using namespace std;
class num{
    public:
    int A,B;
};
int main(){
    int ttt;
    cin>>ttt;
    while(ttt--){
        int n;
        cin>>n;
        int count = n;
        vector<num> v(n);
        int x;
        for (int i = 0; i < n; i++)
        {
            
            cin>>x;
            v[i].A = x;
        }
        for (int i = 0; i < n; i++)
        {
            
            cin>>x;
            v[i].B = x;
        }

        for (auto i = 0; i < n; i++)
        {
            for (auto j = 0; j < n; j++)
            {
                if( (v[i].A) < (v[j].A) and (v[i].B) < (v[j].B)) {
                    // auto next = i + 1;
                    count--;
                    v.erase(v.begin() + i);
                    n --;
                   i --; j--;
                   break;
                }
                
                
            }
            
        }
        cout<<v.size()<<endl;
        // cout<<endl<<count;
        
        
        
    }
    return 0;
}