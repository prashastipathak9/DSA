#include<iostream>
using namespace std;
int main()
{
	int n, arr[n];
	int mx=-199999;
	cout<<"Number of terms: ";
	cin>>n;
	cout<<"Numbers: \n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		mx=max(mx,arr[i]);
		cout<<mx<<" ";
	}
	return 0;
}
