// #include <bits/stdc++.h> 
// using namespace std; 
  
// int Square_Diff(int n){ 
  
// int l, k, m; 
  
//     // Sum of the squares of the 
//     // first n natural numbers is 
//     l = (n * (n + 1) * (2 * n + 1)) / 6; 
      
//     // Sum of n naturals numbers 
//     k = (n * (n + 1)) / 2; 
  
//     // Square of k 
//     k = k * k; 
      
//     // Differences between l and k 
//     m = abs(l - k); 
      
//     return m; 
  
// } 
  
// // Driver Code 
// int main() 
// { 
//     int t,n;
//     cin>>t;
//     while(t--){
//     cin>>n; 
//     cout<<Square_Diff(n);
//     } 
//     return 0; 
      
// } 
#include<iostream>
using namespace std;
#define int long int
//#define double long double
signed main(){
double d=1.12345;
int a=d;
double b=d-a;


cout<<b;
b+=0.5;
cout<<endl<<b;
d=a+b;
cout<<endl<<d;

return 0;
}