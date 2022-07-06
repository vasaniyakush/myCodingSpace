// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
   public:
   vector<int> TopK(vector<int>& a, int k)
   {
    //   map<int,int> mp;
    //   for(int i = 0; i< a.size(); i++){
        //   auto itr = mp.find(a[i]))
        
        map<int, int> mp;
 
    // insert elements in random order
        mp.insert({ 2, 30});
        mp.insert({ 1, 40 });
        mp.insert({ 3, 60 });
     
        // does not inserts key 2 with element 20
        mp.insert({ 2, 20 });
        mp.insert({ 5, 50 });
     
        // prints the elements
        cout << "KEY\tELEMENT\n";
        for (auto itr = mp.begin(); itr != mp.end(); itr = itr.operator++()) {
            cout << itr->first
                 << '\t' << itr->second << '\n';
        }
        
    }
};

// { Driver Code Starts.

int main()
{
    int t = 1;
    // cin>>t;
    while(t--)
    {
        int n,k ;
        // cin>>n;
        
        vector<int>array(n);
        
        // for(int i=0; i<n; i++)
            // cin>>array[i];
            
        // cin>>k;
        
        Solution obj;
        vector<int> result = obj.TopK(array,k);
        
        // for(int i=0; i<result.size();i++)
            // cout<<result[i]<<" ";

        // cout<<"\n";

    }
    return 0;
}  // } Driver Code Ends