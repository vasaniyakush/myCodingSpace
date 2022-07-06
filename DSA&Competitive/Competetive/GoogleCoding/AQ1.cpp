#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    // unordered_map<int,int> mp;
    vector<int> task(N + 1,0);
    for (int i = 1; i < N + 1; i++)
    {
        cin>>task[i];
        // mp[task[i]] = 1;
    }
    int Q;
    vector<int> rem(N + 1,0);
    cin>>Q;
    for(int i = 0 ; i< Q; i++){
        int l,r,k;
        cin>>l>>r>>k;
        for (int i = l; i <= r; i++)
        {
            rem[i] -= k;
        }
    }
    sort(task.begin() + 1,task.end(),greater<int>());
    sort(rem.begin(),rem.end());
    int i = 0, j = 1;
    int count = 0;
    while (i < N and j < N + 1)
    {
        if(task[j] < abs(rem[i])){
            j++; i+++
            count++;
        }
        else{
            j++;
        }
    }
    cout<<count<<endl;
    
    

    return 0;
}