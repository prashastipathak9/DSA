#include<iostream>
using namespace std;
bool linearSearch(int arr[], int n, int key)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			return true;
		}
	}
	return false;
}
int main()
{
int n, arr[100], e;
	cout<<"Enter array size and then its elements: "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the element to search: "<<endl;
	cin>>e;
	
	bool found = linearSearch(arr, n, e);
	if(found)
	{
		cout<<"Present.";
	}
	else
	cout<<"Not present.";
	
	return 0;
}
