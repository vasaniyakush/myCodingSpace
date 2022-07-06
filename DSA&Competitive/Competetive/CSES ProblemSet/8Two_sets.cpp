#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    vector<int> one;
    vector<int> two;
    bool flag = true;
    if( ((n*(n + 1))/2) % 2 == 0){
        cout<<"YES"<<endl;
        if(n % 2 == 0)
        {
            for (int i = 1; i <= ceil(n/2); i++)
            {
                if(flag){
                    if(i != (n + 1 - i)){
                        one.push_back(n+ 1 -i);
                    }
                    one.push_back(i);
                    flag = false;
                }
                else{
                    if(i != (n + 1 - i)){
                        two.push_back(n + 1 -i);
                    }
                    two.push_back(i);
                    flag = true;

                }
            }
        }
        else{
            one.push_back(1);
            one.push_back(2);
            two.push_back(3);
            n-=3;
            for (int i = 1; i <= ceil(n/2); i++)
            {
                if(flag){
                    if(i != (n + 1 - i)){
                        one.push_back(n+ 1 -i + 3);
                    }
                    one.push_back(i + 3);
                    flag = false;
                }
                else{
                    if(i != (n + 1 - i)){
                        two.push_back(n + 1 -i + 3);
                    }
                    two.push_back(i + 3);
                    flag = true;

                }
            }
            
        }
        
    }
    else{
        cout<<"NO";
        return 0;
    }
    cout<<one.size()<<endl;
    for(auto i : one)
        cout<<i<<" ";
    cout<<endl<<two.size()<<endl;
    for(auto i: two)
        cout<<i<<" ";
    return 0;
}