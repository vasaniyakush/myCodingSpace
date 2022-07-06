#include<iostream>

#include<cstdlib>

using namespace std;
int main(){
    int steps;
    int mat[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>mat[i][j];
            if (mat[i][j] == 1)
            {
                steps = (abs(2 - i)) + (abs(2 - j));
            }
            

        }
        
    }
    cout<<steps;
    
return 0;
}