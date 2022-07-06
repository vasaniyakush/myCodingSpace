#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> level(n+1,0);
    int temp;
    int size;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>temp;
        level[temp] = 1;
    }
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>temp;
        level[temp] = 1;
    }
    
    for (int i = 1; i <= n; i++)
    {
        if (!(level[i]))
        {
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    cout<<"I become the guy";


return 0;
}
