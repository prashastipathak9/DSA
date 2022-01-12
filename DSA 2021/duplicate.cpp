#include<iostream>
#include<algorithm>
using namespace std;

bool dupCheck(int arr[], int n)
{
	sort(arr, arr+n);
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]==arr[i+1])
		return false;
	}
	return true;
}

int main()
{
	int n, a[n];
	cout<<"Enter the size of array: "<<endl;
	cin>>n;
	cout<<"Enter the elements of array: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	sort(a, a+n);
	
	cout<<dupCheck(a, n);
	
	return 0;
}
