 #include<bits/stdc++.h>
 using namespace std;

bool palcheck(string str, int l, int r){
        while(l<r){
            if(str[l++] != str[r--]) return false;
        }
        return true;
    }

 int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin>>N;
    string s;
    cin>>s;
    int n;
    cin>>n;
    vector<int> subs(n);
    for(int i = 0; i< n; i++){
        cin>>subs[i];
    }
    int count = 0;

    for(int i: subs){
        for(int j = 0; j < N - i + 1; j++){
            if(palcheck(s,j,j + i - 1)){
                count++;
            }
        }
        
    }
    cout<<count;
 
     return 0;
 }