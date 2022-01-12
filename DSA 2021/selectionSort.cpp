#include<iostream>
using namespace std;
int main()
{
	int n,arr[n],temp;
	cout<<"Enter the number of terms: ";
	cin>>n;
	cout<<"Enter the unsorted numbers:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
			{
			temp=arr[j];
			arr[j]=arr[i];
			arr[i]=temp;	
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
