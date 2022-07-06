#include<bits/stdc++.h>
using namespace std;
int main(){
    int charac = 0, lines = 0, words = 0 ;
    ifstream in("text1.txt");
    string str;
    while (!in.eof())
    {
        in>>str;
        words++;   
    }
    
    in.close();
    in.open("text1.txt");
    while (!in.eof())
    {
        getline(in,str);
        lines++;
        charac += str.length();
    }
    cout<<"Lines = "<<lines<<endl;
    cout<<"Characters = "<<charac<<endl;
    cout<<"Number of words = "<<words;

return 0;
}