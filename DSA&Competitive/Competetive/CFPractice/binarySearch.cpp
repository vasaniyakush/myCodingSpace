// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    bool check(int arr[],int n, int key, int D){
        int cnt = 1,sum = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] > key){
                return false;
            }
            if(sum + arr[i] <= key){
                sum += arr[i];
            }
            else{
                sum = arr[i];
                cnt++;
            }
        }
        // cout<<"key = "<<key<<" count = "<<cnt<<endl;
        return (cnt <= D);
    }
    int leastWeightCapacity(int arr[], int N, int D) {
        int key_min = 0, key_max = 5e7, key_mid;
        while(key_min+1 < key_max){
            key_mid = (key_min + key_max)/2;
            if(check(arr, N, key_mid, D)){
                key_max = key_mid;
                // cout<<"km = "<<key_mid<<endl;
            }else{
                key_min = key_mid;
            }
        }
        if(check(arr, N, key_min, D)){
            return key_min;
        }else{
            return key_max;
        }
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}  // } Driver Code Ends
// #include<bits/stdc++.h>
// using namespace std;
// int main(){


// return 0;
// }
// 1 3 5 6 7 9 10 11 34 45 54 55 56 57 58 67 72 75 89 99
// 0       4   6  7    9  10                         19
//10
//left = 6, right = 7
//bsearch(left, right)
// till left<right