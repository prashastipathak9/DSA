#include<iostream>
using namespace std;
int arraySum(int arr[], int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	return sum;
}
int main()
{
	int n, arr[1000];
	cout<<"Enter array size and then its elements: "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Sum: "<<arraySum(arr, n);
	
	return 0;
}
