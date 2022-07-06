#include<bits/stdc++.h>
using namespace std;
bool comparator(pair<int,int> &p, pair<int,int> &q)
{
    return p.second<q.second;
}
bool comparator2(pair<int,int> &p, pair<int,int> &q){
    return p.first<q.first;
}
int main(){
    int ttt;
    cin>>ttt;
    while(ttt--){
        getchar();
        int n,m;
        cin>>n>>m;
        vector<pair<int,int>> v;
        unordered_map<int ,int> mp;
        for (int i = 0; i < m; i++)
        {
            v.push_back(make_pair(0,0));
            cin>>v[i].first;
            cin>>v[i].second;
            mp.insert({v[i].first, i + 1});
        }
        cout<<endl;
        
        sort(v.begin(),v.end(),comparator);
        sort(v.begin(),v.begin() + 2*n ,comparator2);
        int summ  = 0;
        vector<pair<int,int>> ans;
        for (int i = 0; i < n; i++)
        {
            summ +=v[i].second + v[(2*n - 1 - i)].second;
            ans.push_back(make_pair(   mp[v[i].first], mp[ v[2*n - i - 1].first ]   ));
        }
        cout<<summ<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<ans[i].first<<" "<<ans[i].second<<endl;
        }
        cout<<endl;
        
    }
    return 0;
}