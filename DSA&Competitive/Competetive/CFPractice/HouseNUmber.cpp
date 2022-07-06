#include<bits/stdc++.h>
#include<ctime>
#define int long int
using namespace std;
signed main(){
    int t;
    cin>>t;
    while (t--)
    {
        int num, digitNum , Ans = 0;
        cin>>num;
        digitNum = log10(num) + 1;
        // cout<<digitNum<<endl;;
        
        switch (digitNum)
        {
        case 9:
            Ans += (num - 99999999)*9;
            Ans += 788888902;break;
            
        case 8:
            Ans += (num - 9999999)*8;
            Ans += 68888889;break;
            
        case 7:
            Ans += (num - 999999)*7;
            Ans += 5888889;break;
            
        case 6:
            Ans += (num - 99999)*6;
            Ans += 488889;break;
            
        case 5:
            Ans += (num - 9999)*5;
            Ans += 38889;break;
            
        case 4:
            Ans += (num - 999)*4;
            Ans += 2889;break;
            
        case 3:
            Ans += (num - 99)*3;
            Ans += 189;break;
            
        case 2:
            Ans += (num - 9)*2;
            Ans += 9;break;
        
        case 1:
            Ans += num ;break;
            
            
        
        default:
            break;
        }
        cout<<Ans<<endl;
    }
    
return 0;
}