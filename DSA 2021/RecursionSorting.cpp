#include<iostream>
using namespace std;
bool sorting(int arr[], int n)
{
	if(n==1)
	{
		return true;
	}
	return (arr[0]<arr[1] && sorting(arr+1, n-1));
}

int main()
{
	int n, arr[n];
	cout<<"Enter the size of array: "<<endl;
	cin>>n;
	cout<<"Enter the elements of array: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Is sorted: "<<sorting(arr, n);
	
	return 0;
}
