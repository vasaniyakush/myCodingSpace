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
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt = 1;
    cin>>ttt;
    while(ttt--){
        int n;
        cin>>n;
        string s1;
        string s2;
        cin>>s1;
        cin>>s2;
        int a =0,b = 0,c=0;
        int A=0, B= 0, C = 0;
        REP(i,n){
            if(s1[i] == 'a') a++;
            else if(s1[i] == 'c')c++;
            else b++;
            if(s2[i] == 'a') A++;
            else if(s2[i] == 'c')C++;
            else B++;
        }
        if(a != A or b != B or c != C){
            cout<<"NO"<<endl;
            continue;
        }
        int i =  n -1,j = n-1;
        int na1 = 0 ,na2 = 0 ,nc1 = 0,nc2 = 0;
        string ans = "YES";
        while(i>= 0 and j >= 0){
            if(s1[i] == 'a'){
                na1++;
                i--;

            }
            else if(s1[i] == 'c'){
                nc1++;
                i--;
            }
            if(s2[j] == 'a'){
                na2++;
                j--;

            }
            else if(s2[j] == 'c'){
                nc2++;
                j--;
            }
            // VALUE(na1);
            // VALUE(na2);
            // VALUE(nc1);
            // VALUE(nc2);
            // VALUE(s1[i]);
            // VALUE(s2[j]);
            if(s1[i] == 'b' and s2[j] == 'b'){
                if(nc2 > nc1){
                    ans = "NO";
                    break;
                }
                if(na1>na2){
                    ans = "NO";
                    break;
                }
                i--;j--;
            }
        }
        // cout<<ans;
        if(ans == "NO"){
            cout<<ans<<endl;
            continue;
        }
        i = j = 0;
        while(i<n and j <n){
            if(s1[i] == s2[j]){
                i++;j++;

            }
            else{
                
                if(s1[i] == 'b' ){
                    i++;
                }
                else{
                    if(s2[j] == 'b'){
                        j++;
                    }
                    else {ans = "NO";break;}
                }

            }
        }
        cout<<ans<<endl;

    }
    return 0;
}