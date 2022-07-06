// { Driver Code Starts
// C++ program to find all distinct palindrome sub-strings
// of a given string
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
  public:
    bool palcheck(string str, int l, int r){
        while(l<r){
            if(str[l++] != str[r--]) return false;
        }
        return true;
    }
    int palindromeSubStrs(string s) {
        // code here
        // map <string, bool> mp;
        unordered_set<string> us;
        int n = s.length();
        for(int i = 0; i < n; i++){
            string temp ="";
            for(int j = i; j < n; j++){
                
                temp += s[j];
                if(palcheck(s,i,j)){
                    us.insert(temp);
                }
                // us.insert(temp);
            }
        }
        return us.size();
    }
};

// { Driver Code Starts.

// Driver program
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.palindromeSubStrs(str) << endl;
    }
    return 0;
}
  // } Driver Code Ends