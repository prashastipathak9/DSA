#include<iostream>
using namespace std;
int main()
{
	int n,arr[n],sum=0;
	cout<<"Value of n: ";
	cin>>n;
	cout<<"Numbers: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		}
	for(int i=0;i<n;i++)
	{
		sum=0;
		for(int j=i;j<n;j++)
		{
			sum+=arr[j];
			cout<<sum<<endl;
		}
	}
	return 0;
}
