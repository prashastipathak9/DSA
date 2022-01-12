#include<iostream>
using namespace std;
int main()
{
	int n,arr[n];
	cout<<"Value of n: ";
	cin>>n;
	cout<<"Numbers: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			for(int k=i;k<=j;k++)
			{
				cout<<arr[k];
			}
			cout<<endl;
		}
	}
	return 0;
}
