// #include<bits/stdc++.h>
// #include <sstream>  // for string streams
// #include <string>  // for string
// using namespace std;
// int main(){
// int ttt;
// cin>>ttt;
// while(ttt--){
//     int n = 100;
//     cin>>n;
//     ostringstream str1;
//     str1 << n;
//     string num = str1.str();
//     int mini = INT_MAX,l1 = 0,r1 = -1,l2 = -1, r2 = -1, l3 = -1, r3 = -1, d1,d2,d3;
//     for (int i = num.length() - 1; i >= 0; i--)
//     {
//         // if (num[i] == '5' && i > r1)
//         // {
//         //     r1 = i;
            
//         // }
//         // if (num[i] == '0' && (i > l1 || l1 > r1))
//         // {
//         //     l1 = i;
//         // }
//         if (num[i] == '0' && i > r2)
//         {
//             r2 = i;
            
//         }
//         if (num[i] == '0' && (i > l2 || l2 == r2))
//         {
//             l2 = i;
//         }
//         // if (num[i] == '7' && i > r3)
//         // {
//         //     r3 = i;
            
//         // }
//         // if (num[i] == '5' && (i > l3 || l3 > r3))
//         // {
//         //     l3 = i;
//         // }
//     }
//     // d1 = (num.length() - r1 + 1) + abs(r1 - l1);
//     d2 = (num.length() - r2 + 1) + abs(r2 - l2);
//     // d3 = (num.length() - r3 + 1) + abs(r3 - l3);
//     // cout<<min(d1,min(d2,d3))<<endl;
//     cout<<d2<<endl;
    
    
// }
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
int ttt;
cin>>ttt;
while(ttt--){
    int n = 100;
    cin>>n;
    ostringstream str1;
    str1 << n;
    string num = str1.str();
    int *arr0 = new int[num.length()];
    int *arr7 = new int[num.length()];
    int *arr5 = new int[num.length()];

    for (int i = 0; i < num.length(); i++)
    {
        arr0[i] = 0;
        arr5[i] = 0;
        arr7[i] = 0;
    }
    

    for (int i = 0; i < num.length(); i++)
    {
        if (num[i] == '0')
        {
            arr0[i] = 1;
        }
        if (num[i] == '5')
        {
            arr5[i] = 1;
        }
        if (num[i] == '7')
        {
            arr7[i] = 1;
        }
    }
    int u5 = 0;


}
return 0;
}