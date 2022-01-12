#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the no. of test cases: "<<endl;
	cin>>n;
	
	while(n--)
	{
	int n,arr[n];
	cout<<"Enter the size of array: "<<endl;
	cin>>n;
	cout<<"Enter the elements: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int cur=0;
	for(int i=0;i<n;i++)
	{
		cur=0;
		for(int j=i;j<n;j++)
		{
			cur+=arr[j];
			cout<<"Sum of subarray: "<<cur<<endl;
		}
	}
}
	
	return 0;
}
