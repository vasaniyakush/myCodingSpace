// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef pair<int, int> pii;
// typedef pair<ll, ll> pll;
// typedef pair<string, string> pss;
// typedef vector<int> vi;
// typedef vector<vi> vvi;
// typedef vector<pii> vii;
// typedef vector<ll> vl;
// typedef vector<vl> vvl;
// ll m = 1e9 + 7;
// double epsilon = 1e-6;
// #define fi first
// #define se second
// #define mp make_pair
// #define pb push_back
// #define VALUE(x) cerr << "The value of " << #x << " is " << x << endl;
// #define endl "\n" 
// #define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
// #define REP(i, n) FOR(i, 0, n)
// #define ALL(v) v.begin(), v.end()
// int psh(int* a){
//     return ((a[0]*1000) + (a[1]*100)+(a[2]*10)+a[3]);
// }
// bool isP(int * a){
    
//     if(a[0] == a[3] and a[1] == a[2]){
//         return true;
//     }
//     else return false;
// }
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int ttt = 1;
//     cin>>ttt;
//     // int a[4] = {0};
//     // map<int,bool> mp;
//     // while(a[0]<3){
//     //     if(isP(arr)){
//     //         mp[psh(arr)] = true;
//     //     }
//     // }
//     while(ttt--){
//         string s;
//         cin>>s;
//         int x;
//         cin>>x;
//         int b[4];
//         b[0] = s[0] - 48;
//         b[1] = s[1] - 48;
//         b[2] = s[3] - 48;
//         b[3] = s[4] - 48;
//         int init = psh(b);
//         int curr = psh(b);
//         int cnt = 0;
//         if(x == 1440){
//             cout<<1<<endl;
//             continue;
//         }
//         if(x == 0){
//             if(isP(b)){
//                 cout<<1<<endl;

//             }
//             else cout<<0<<endl;
//             continue;
//         }
        
//         do{
//             if( isP(b) ){
//                 cnt++;
//             }
            

//         }while(curr != init);
        
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;
ll m = 1e9 + 7;
double epsilon = 1e-6;
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define VALUE(x) cerr << "The value of " << #x << " is " << x << endl;
#define endl "\n" 
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define REP(i, n) FOR(i, 0, n)
#define ALL(v) v.begin(), v.end()
bool isP(int x,int b){
    string a ;
    if(x == 0){
        a +="00";
    }
    else {if(x<10){
        a = "0";
    }
    a+=(to_string(x));
    }
    if(b == 0){
        a +="00";
    }
    else {
        if(b < 10){
        a += "0";
    }
    a+=(to_string(b));
    }
    // cout<<a<<endl;
    if(a[0] == a[3] and a[1] == a[2]){
        return true;
    }
    else return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt = 1;
    cin>>ttt;
    while(ttt--){
        string s;
        cin>>s;
        int x;
        cin>>x;
        int h = 0, m = 0;
        h += 10*(s[0] - 48);
        h += (s[1] - 48);
        m += 10*(s[3] - 48);
        m += (s[4] - 48);
        // cout<<h<<" "<<m<<endl;
        int inih = h;
        int inim = m;
        int currh = h;
        int currm = m;
        int cnt = 0;
        if(isP(currh,currm)){
            cnt++;
        }
        currh = currh + ((currm + x)/60);
        currh = (currh %24);
        currm = (currm + (x%60));
        currm = (currm %60);
        while(currh != inih or currm != inim  ){
            // cout<<currh<<" "<<currm<<endl;
            if(isP(currh,currm)){
                cnt++;
            }
            currh = currh + ((currm + x)/60);
            currh = (currh %24);
            currm = (currm + (x%60));
            currm = (currm %60);
            // cout<<currh<<" "<<currm<<" "<<ttt<<endl;
                
        }
        cout<<cnt<<endl;
    }
    return 0;
}