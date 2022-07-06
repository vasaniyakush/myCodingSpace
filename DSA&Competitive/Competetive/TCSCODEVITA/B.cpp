#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int row,col;
    cin>>row>>col;
    int mat[row][col] = {0};
    int s1,s2;
    string s;
    getline(cin>>ws,s);
    stringstream sss(s);
    sss>>s1;
    if(sss.peek() == ',') sss.ignore();
    sss>>s2;
    int x,y;
    int matsum = 0;
    int toPoi = 0;
    bool res = true;
    for (int i = 0; i < row; i++)
    {

        string dig = "";
        string s;
        getline(cin>>ws,s);


        // string str = "11,21,31,41,51,61";
 
        vector<int> v;
 
    // Get the string to be taken
    // as input in stringstream
        stringstream ss(s);
 
    // Parse the string
        ss>>x;
        if(ss.peek() == ',') ss.ignore();
        ss>>y;
        // cout<<"x = "<<x<<" y = "<<y<<endl;



        // int j = 0;
        // while(s[j] != ','){
        //     dig += s[j++];
        // }
        // x = stoi(dig);
        // s.erase(0,j+1);
        // y = stoi(s);
        cin>>mat[x][y];
        matsum += mat[x][y]; 
    }
    int possible = matsum;
    char mov = 'a';
    while(mov != 'Q'){
        cin>>mov;
        if(mov == 'U'){
            if(s1 - 1 < 0){
                res = false;
                break;
            }
            else{
                s1--;
                toPoi += mat[s1][s2];
                toPoi -=2;
                matsum -= mat[s1][s2];
                mat[s1][s2] = 0;
            }
        }
        if(mov == 'D'){
            if(s1 + 1 >= row){
                res = false;
                break;
            }
            else{
                s1++;
                toPoi += mat[s1][s2];
                toPoi -=2;
                matsum -= mat[s1][s2];
                mat[s1][s2] = 0;
            }
        }
        if(mov == 'R'){
            if(s2 + 1 >= col){
                res = false;
                break;
            }
            else{
                s2++;
                toPoi += mat[s1][s2];
                toPoi -=1;
                matsum -= mat[s1][s2];
                mat[s1][s2] = 0;
            }
        }
        if(mov == 'L'){
            if(s2 - 1 < 0){
                res = false;
                break;
            }
            else{
                s2--;
                toPoi += mat[s1][s2];
                toPoi -=1;
                matsum -= mat[s1][s2];
                mat[s1][s2] = 0;
            }
        }
        
    }
    if(res and matsum != 0){
        res = false;
    }
    
    if(res){
        cout<<"*** Mission Passed! ***\n";
        cout<<"You have collected maximum points : "<<toPoi;
    }
    else{
        cout<<"*** Mission failed! ***\n";

    }
    

    return 0;
}