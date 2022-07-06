#include<bits/stdc++.h>
using namespace std;
#define int unsigned long long
signed main(){
    int G;
    cin>>G;
    int B, H;
    cin>>B>>H;
    vector<int> v(G);
    int totalvol = 0;
    for (int i = 0; i < G; i++)
    {
        cin>>v[i];
        totalvol += (v[i]);
    }
    totalvol *= (B)*(H);
     
    //<code>
    int maxvol = 0;
    for(auto i = v.begin(); i != v.end();i++){
        int currentvol = 0;
        auto j = i;
        do{
            // cout<<"val j: "<<(*j)<<" ";
            currentvol += (*i );
            // cout<<"1current vol : "<<currentvol<<" ";
        }while( j != v.begin() and *(--j) >= *i );
        // cout<<endl;
        j = i;
        j++;
        while( j != v.end() and *(j) >= *i ){
            // cout<<"val j:"<<(*j)<<" ";
            currentvol += (*i  );
            // cout<<"2current vol : "<<currentvol<<" ";
            j++;
        }
        maxvol = max(maxvol,currentvol);
        // cout<<"maxvol :"<<maxvol<<endl;
    }
    maxvol *= B*H;



    //</code>
    cout<<(totalvol - maxvol)%((int)(10e9 + 7));

    return 0;
}