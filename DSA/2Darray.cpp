#include<iostream>
using namespace std;
int main()
{
	int n,m,arr[n][m];
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
	return 0;
}
