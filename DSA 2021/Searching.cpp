#include<iostream>
using namespace std;
int main()
{
	int n,m,arr[n][m],num;
	
	cout<<"Number of Rows and Columns: "<<endl;
	cin>>n>>m;
	cout<<"Enter the nubers: "<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
		cin>>arr[i][j];
	}
	}
	
	cout<<"Matrix is: "<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"Enter the number to search: ";
	cin>>num;
	bool flag=false;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(arr[i][j]==num)
			{
				cout<<i<<" "<<j<<"\n";
				flag=true;
			}
		}
	}
	if(flag)
	{
		cout<<"Element is found.";
	}
	else
	{
		cout<<"Element not found.";
	}
	return 0;
}

