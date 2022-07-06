#include<bits/stdc++.h>
using namespace std;
// void reversee(string &str, int l , int r){
//     while(l < r){
//         swap(str[l++], str[r--]);
//     }
// }

// bool NextPermutation(string &str,int l,int r){
//     int i = r;
//     while(i>=l){
//         if(str[i] <= str[r] ){
//             i--;
//             continue;
//         }
//         else{
//             swap(str[i] , str[r]);\
//             break;
//         }
//     }
//     reversee(str,i + 1, r);
    
// }
void reversee(vector<int> &str, int l , int r){
        while(l < r){
            swap(str[l++], str[r--]);
        }
    }

    vector<int> nextPermutation(int N, vector<int> str){
        int i = N - 1;
        while(i>=0){
            if(str[i] <= str[i - 1] ){
                i--;
                continue;
            }
            else{
                i--;
                swap(str[i] , str[N - 1]);\
                break;
            }
        }
        reversee(str,i + 1, N - 1);
        return str;
    }

int main(){
    vector<int> arr = {3,2,1};
    nextPermutation(3,arr);
    for(auto x:arr){
        cout<<x<<" ";
    }

return 0;
}