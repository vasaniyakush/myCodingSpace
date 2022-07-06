#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    int t ; 
    cin >> t ; 
    while( t-- ){
        int n ;            
        cin >> n ;         
        int Cake[n];
        for (int i = 0; i < n; i++)
        {
            Cake[i] = 0;
        }
        
        int l;                                    
        vector<int> v;
        for(int i = 0; i < n ; i++){
            cin >> l;
            v.push_back(l);
        }
        for (int i = 0; i < n; i++)
        {
            int cnt = v[i];
            int j = i;
            while((cnt--)&&j>=0 ){
                Cake[j] = 1;
                j--;}    
            
        }
        for (int i = 0; i < n; i++)
        {
            cout<<Cake[i]<<" ";
        }
        

        cout<<endl;
        


    }

return 0;
}
