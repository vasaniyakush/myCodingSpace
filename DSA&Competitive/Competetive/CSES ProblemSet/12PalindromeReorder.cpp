#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    // string s;
    // cin>>s;
    // unordered_map<char,int> mp;
    // for(char ch:s){
    //     mp[ch]++;
    // }
    // string ans = "";
    // bool flag = true;
    // for(pair<char,int> p:mp){
    //     if(p.second % 2 != 0){
    //         if(flag){
    //             ans = p.first;
    //             flag = false;
    //             mp[p.first]--;
    //             continue;
    //         }else{

            
    //          cout<<"NO SOLUTION"<<endl;
    //          return 0;
    //         }
    //     }
    // }
    // for(pair<char,int> p : mp){
    //     while (p.second)
    //     {   
    //         // cout<<p.second<<" ";
    //         // cout<<"wait"<<endl;
    //         ans = p.first + ans + p.first;
    //         p.second -=2;    
    //         // cout<<p.second<<endl;
    //     }
        
    // }
    // cout<<ans;
    string s;
    cin>>s;
    int arr[26] = {0LL};
    for(char ch:s){
        arr[ch - 'A']++;
    }
    string ans;
    bool flag = true;
    for (int i = 0; i < 26; i++)
    {
        if(arr[i] % 2 != 0){
            if(flag){
                ans = (char)(i + 'A');
                flag = false;
                arr[i]--;
            }
            else{
                cout<<"NO SOLUTION"<<endl;
                return 0;
            }
        }
    }
    for (int i = 0; i < 26; i++)
    {
        while(arr[i] != 0){
            ans = (char)(i + 'A') + ans + (char)(i + 'A') ;
            arr[i]-=2;
        }
    }
    cout<<ans;
    
    

    return 0;
}