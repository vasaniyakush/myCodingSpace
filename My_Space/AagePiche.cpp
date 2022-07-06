#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
    int row,t, n,num = 1;
    cout<<"Enter a number n : ";
    cin>>n;
    row = n;

    for (int i = 1; i <= n; i++,row--)
    {
        t = row;
        if (i % 2 != 0)
        {
            while (t--)
            {
                // increasing
                cout<<num<<" ";
                if (t)
                {
                    num++;
                }
                
            }   
        }
        else {
            while (t--)
            {
                // descending
                cout<<num<<" ";
                if (t)
                {
                    num--;
                }
                
            }    
        }
        cout<<endl;
        
        
        
    }
    

return 0;
}
/* 
1 2 3 4 5 6 
6 5 4 3 2
2 3 4 5 
5 4 3 
3 4
4
*/