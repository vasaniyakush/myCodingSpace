#include<bits/stdc++.h>
using namespace std;
bool compy(pair<int,int> &p1, pair<int,int> &p2){
    return p1.first < p2.first;
}
int main(){
    int t;
    cin>>t;
    while(t--){

        int N,K;
        cin>>N>>K;
        vector<int> desk(N + 1,-1);
        vector<int> tim(N + 1);
        vector<pair<int,int>> v;
        for (int i = 1; i < N + 1; i++)
        {
            cin>>tim[i];
        }
        
        
        for (int i = 1; i < N + 1; i++)
        {
            v.push_back(make_pair(tim[i],i));
        }
        sort(v.begin(),v.end(),compy);

        int groups = N;
        int timtotal = 0;
        desk[v[0].second] = 1;
        timtotal = v[0].first;

        for (int i = 0; i < N  ; i++)
        {
            if(v[i].second == 1){
                if(desk[2] == 1){
                    desk[1] = 1;
                }
                else{
                    desk[1] = 1;
                    groups++;
                }
                timtotal = v[i].first;
            }
            else if(v[i].second == N){
                if(desk[N - 1] == 1){

                    desk[N ] = 1;
                }
                else{
                    desk[N ] = 1;
                    groups++;
                }
                timtotal = v[i].first;
            }
            else if(desk[v[i].second - 1] == -1 and desk[v[i].second + 1] == -1 ){
                groups++;
                desk[v[i].second] = 1;
                timtotal = v[i].first;
            }
            else if(desk[v[i].second - 1] == 1 and desk[v[i].second + 1] == 1){
                groups--;
                desk[v[i].second] = 1;
                timtotal = v[i].first;

            }
            else{
                desk[v[i].second] = 1;
                timtotal = v[i].first;
            }

            groups--;
            if(groups <= K){
                break;
            }
        }
        cout<<timtotal<<endl;
        
    }
    

    return 0;
}
