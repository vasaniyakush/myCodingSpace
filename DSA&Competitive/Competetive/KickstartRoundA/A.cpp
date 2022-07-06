#include<bits/stdc++.h>
using namespace std;

int main(){
    int ttt;
    cin>>ttt;
    for(int abc = 1; abc <= ttt; abc++){
        string str,p;
        cin>>str;
        cin>>p;
        int i = 0, j = 0;
        int count = 0;
        while( i < str.length() and j < p.length()){
            if(str[i] != p[j]){
                count++;
                j++;
            }
            else{
                i++;j++;
            }
        }
        if(i != str.length()){
            cout<<"Case #"<<abc<<": "<<"IMPOSSIBLE"<<endl;
        }
        else{
            cout<<"Case #"<<abc<<": "<<count + (p.length() - (j))<<endl;
        }
        // if(flag){
        //     for(pair<char,int> p:mp){
        //         count += p.second;
        //     }
        //     cout<<"Case #"<<abc<<": "<<count<<endl;
        // }
        // else{
        //     cout<<"Case #"<<abc<<": "<<"IMPOSSIBLE"<<endl;
        // }
        
    }
}