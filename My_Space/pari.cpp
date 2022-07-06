#include <iostream>
#include<vector>
using namespace std;

int main()
{
    
    int t;
    cout<<"Enter the number of test cases"<<endl;
    
    cin >> t;
    while (t--)
    {
        cout<<"Enter the value of n"<<endl;
        int n;
        cin >> n;

        int arr[n];

        int count[n];
        for (int i = 0; i < n; i++)
        {
            
            arr[i]=i+1;
            count[i] = 1;
        }
    label2:
        static int i=0;
        i++;
        {
        label:
            if (arr[i] == 1)
            {
                count[i]++;
                //  cout<<count<<endl;
                if(i==n)
                {
                    goto label3;
                }

                goto label2;
            }
            else if ((arr[i]%2 )== 0)
            {
                arr[i]=arr[i]/2;
                count[i]++;
                  //cout<<count<<endl;
                goto label;
            }
            else
            {
                arr[i] = arr[i] * 3 + 1;
                count[i]++;
                //cout<<count<<endl;
                goto label;
            }
        }
        label3:{
            cout<<*max_element(count,count+n);
        }
        
    }

        return 0;
    }