// #include<iostream>
// #include<vector>
// #include<string>
// #include<cmath>
// #include<stack>
// #include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int t;
    bool cndt;
    cin >> t;
    while (t--)
    {
        cndt = 1;
        cin >> s;
        int a = s.length();
        if (a % 2 == 0)
        {
            sort(s.begin(), (s.begin() + (a / 2)));
            sort((s.begin() + (a / 2)), s.end());
            a = s.length();
            //cout<<s<<endl;
            for (int i = 0; i < a / 2; i++)
            {
                //  cout<<s[i]<<" and "<< s[i + (a/2) ]<<endl;
                if (s[i] != s[i + (a / 2)])
                {
                    cout << "NO" << endl;
                    cndt = 0;
                    break;
                }
            }
        }
        else
        {
            sort(s.begin(), (s.begin() + (a / 2)));
            sort((s.begin() + (a / 2) + 1), s.end());
            a = s.length();
            // cout<<s<<endl;
            for (int i = 0; i < a / 2; i++)
            {
                // cout<<s[i]<<" and "<< s[i + (a/2) + 1 ]<<endl;
                if (s[i] != s[i + (a / 2) + 1])
                {
                    cout << "NO" << endl;
                    cndt = 0;
                    break;
                }
            }
        }
        if (cndt)
            cout << "YES" << endl;
    }
    return 0;
}
