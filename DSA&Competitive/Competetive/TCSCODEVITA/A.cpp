#include<bits/stdc++.h>
using namespace std;
#define int long long
class element{
    public:
    int qnt; //quantity
    // string typ; //type
    int eval; //emotional value
    int nov;// number of vowels
};


signed main(){
    unordered_map<string,int> nv;
    nv.insert(make_pair("Land",1));
    nv.insert(make_pair("Road",2));
    nv.insert(make_pair("People",3));
    nv.insert(make_pair("Stone",2));
    nv.insert(make_pair("Clouds",2));
    nv.insert(make_pair("House",3));
    nv.insert(make_pair("Forest",2));
    nv.insert(make_pair("Gates",2));
    nv.insert(make_pair("Water",2));
    nv.insert(make_pair("Electricity",4));
    nv.insert(make_pair("Agriculture",5));
    nv.insert(make_pair("Farms",1));
    nv.insert(make_pair("Shops",1));
    nv.insert(make_pair("Transport",2));
    nv.insert(make_pair("Mountains",4));

    unordered_map<string,int> ev;
    ev.insert(make_pair("Happy",10));
    ev.insert(make_pair("Sad",5));
    ev.insert(make_pair("Neutral",2));
    ev.insert(make_pair("None",1));
    
    element el[15]; //elements;
    string inp; // input string for each test case
    int tovol = 0; //total number of vowels
    int toeval = 0;
    string dig; //digits

    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        dig = "";
        cin>>inp;
        int j = 0;
        while(inp[j] < 'A'){
            dig += inp[j++];
        }
        inp.erase(0,j);
        el[i].qnt = stoi(dig);
        el[i].nov = nv[inp];
        tovol += el[i].qnt * el[i].nov;

    }
    for (int i = 0; i < n; i++)
    {
        cin>>inp;
        el[i].eval = ev[inp];
        toeval += el[i].qnt* el[i].eval;
    }

    unordered_map<int,string> ans;
    ans.insert(make_pair(0,"Zero"));
    ans.insert(make_pair(1,"One"));
    ans.insert(make_pair(2,"Two"));
    ans.insert(make_pair(3,"Three"));
    ans.insert(make_pair(4,"Four"));
    ans.insert(make_pair(5,"Five"));
    ans.insert(make_pair(6,"Six"));
    ans.insert(make_pair(7,"Seven"));
    ans.insert(make_pair(8,"Eight"));
    ans.insert(make_pair(9,"Nine"));
    int final = max(toeval,tovol)/min(toeval,tovol);
    if(final == 2 or final == 3 or final == 5 or final == 7){
        cout<<"Yes "<<ans[final];
    }
    else{
        cout<<"No "<<ans[final];
    }
    
    

    
    return 0;
}