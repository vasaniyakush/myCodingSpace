#include<iostream>
#include <vector>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;

int main(){
    vector<int> v(100);
    v[2] = 34;
    srand((unsigned)(time(NULL)));

    // v.push_back(3456);
    // cout<<v.size();
    // v.pop_back();
    // v.pop_back();
    // v.pop_back();
    // v.pop_back();
    // cout<<v.size();
    
    // for(auto x:v){
    //     cout<<x<<" ";
    
    // }
    // {}{}{}{}{}{}{}
    // cout<<"hello HEllo";
    // cout<<"hello HEllo";
    // cout<<"hello HEllo";
    // cout<<"hello HEllo";
    int r,num ,dig;
    for (int i = 0; i < 5; i++)
    {
        r = 1 + rand()%6;
        cout<<r<<endl;

        num = rand();
        cout<<endl<<"number is "<<num<<endl;
        dig = log10(num) + 1;
        cout<<"digits is "<<dig<<endl;
    }
    
//     system("cls");

//     cout<<"alalallala";
// return 0;
}