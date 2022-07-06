#include <bits/stdc++.h>
using namespace std;

long long max_affinity(vector<vector<int>> inputs){

}

int main()
{
    int ttt;
    cin >> ttt;
    while (ttt--)
    {
        int n;
        cin>>n;
        vector<vector<int>>inputs(n, vector<int>(n, 0));
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n;j++){
                cin>>inputs[i][j];
                inputs[j][i] = inputs[i][j];
            }
        }

    }
    return 0;
}