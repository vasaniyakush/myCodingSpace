#include<iostream>
#include<vector>

using namespace std;
int main(){
    int size ,first = 0,second = 0,third = 0, t;
    cin>>t;

    while(t--)
    {
        cin>>size;
        vector<int> arr(size);
        for( int i = 0 ; i < size ; i++ ){
            cin>>arr[i];
        }
        first = arr[0];
        second = arr[1];
        third = arr[2];

        if (first != second && first != third)
        {
            cout<<"1"<<endl;
            continue;
        }
        else if (second != third && second != first)
        {
            cout<<"2"<<endl;
            continue;
        }
        else
        {
            for (int i = 2; i < size ; i++)
            {
                if ( arr[i] != arr[i-1] )
                {
                    cout<<i+1<<endl;
                    break;
                
                    
                }
                
            }
        }
    }
    
    
return 0;
}