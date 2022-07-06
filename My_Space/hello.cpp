#include<iostream>
using namespace std;
int main()
{
	int ct=0,n=0,i=1,j=1,num,k=0;
	int arr[30],t;
	cout<<"Enter number of rows:";
	cin>>num;
	while(n<num)
	{
		j=1;
		ct=0;
		while(j<=i)
		{
			if(i%j==0)
			ct++;
			j++;
		}
		if(ct==2)
		{
			arr[k]=i;
			cout<<arr[k]<<" ";
			n++;
		}
		k++;
		i++;
	}
	cout<<"\n";
	for(i=1;i<=n;i++)
	{
		t=1;
		for(j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<arr[t]<<" ";
			t++;
		}
		cout<<"\n";
	}
	return 0;
}