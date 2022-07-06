// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    long long countPairs(int N, int X, vector<int> num){
        // code here
        string ans = to_string(X);
        long long count = 0;
        vector<string> v;
        for(int a:num){
            v.push_back(to_string(a));
        }
        for(int i = 0; i < N; i++){
            for(int j = 0 ; j < N ; j++){
                if(v[i] + v[j] == ans){
                    count++;
                }
            }
        }
        return count;
    }
}; 

// { Driver Code Starts.
int main() 
{ 
    int t;cin>>t;
    while(t--)
    {
        int N,X;
        cin>>N>>X;
        vector<int> numbers(N);
        for(int i=0;i<N;i++)
            cin>>numbers[i];
        Solution ob;
        long long ans = ob.countPairs(N, X, numbers);
        cout<<ans<<endl;
        
    }

    return 0; 
}  // } Driver Code Ends

