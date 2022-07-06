#include<bits/stdc++.h>
using namespace std;
int main(){
int ttt;
cin>>ttt;
while(ttt--){
    int n,k,num,catD = 0,mice = 0;
    cin>>n>>k;
    int arr[n + 1] = {0};
    for (int i = 0; i < k; i++)
    {
        cin>>num;
        arr[num + 1]++;
        
    }
    for (int i = n ; i >= 0; i--)
    {
        if (arr[i] != 0)
        {
            if (catD >= i)
            {
                break;
            }
            else {
                arr[i + 1]--;
                catD += (n - i + 1);
                mice ++;
            }
        }
    }
    cout<<mice<<endl;
    

    
}
return 0;
}