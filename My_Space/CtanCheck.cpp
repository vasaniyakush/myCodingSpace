#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
#include<cctype>
using namespace std;
int main(){
    string s;
    cout<<"enter the main string"<<endl;
    getline(cin,s);
    int i,j = 0;
    bool cndt = 1;
    string ch;
    cout<<"enter the word you want to search"<<endl;
    cin>>ch;
    for( i = 0; i < s.length() - 1; i++)
    {
        if(s[i] == ch[j]){
            j++;
            if(j == ch.length()){
                cout<<"the entered word exists"<<endl;
                cndt = 0;
                break;
            }
           
        }
        else
        {
            j = 0;
        }
        
    }
    if(cndt){
        cout<<"the entered word DOES NOT exist";
    }
    
return 0;
}