#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int key)
{
	int s=0;
	int e=n;
	int mid;
	
	while(s<=e)
	{
		mid=(s+e)/2;
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(arr[mid]>key)
		{
			e=mid-1;
		}
		else
		{
			s=mid+1;
		}
	}
	return -1;
}

int main()
{
	int n, arr[n], key;
	cout<<"Enter the number of terms: "<<endl;
	cin>>n;
	cout<<"Enter the numbers: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the key: ";
	cin>>key;
	cout<<binarySearch(arr,n,key);
	
	return 0;
}
