#include<iostream>
using namespace std;
int main()
{
	int n,m,arr[n][m];
	
	cout<<"Rows and Columns: \n";
	cin>>n>>m;
	cout<<"Numbers: \n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"Matrix: \n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<arr[i][j];
		}
	cout<<"\n";	
	}
	return 0;
}
