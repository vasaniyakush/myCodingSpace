#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1>>str2;
    int j = 0;
    bool roundend = false;
    if (str1.length() == str2.length())
    for (int i = 0; i < str1.length() && j < str2.length() ; i++)
    {
        if (str1[i] = str2[j])
        {
            j++;
        }
        else j = 0;
        if (i == str1.length() - 1 && !roundend)
        {
            i = 0;
            roundend = true;
        }
    }
    if ( j == str2.length() )
    {
        cout<<"is rotation";
    }
    else cout<<"is not";
return 0;
}