#include<iostream>
using namespace std;
void linearSearch(int s, int a, int key)
{
	for(int i=0;i<s;i++)
	{
		if(key == a[i])
		{
			cout<<"Key is present";
		}
	}
}

int main()
{
	int n, arr[n], k;
	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<"Enter the elements of array: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the key: ";
	cin>>k;
	
	linearSearch(n, arr, k);
	
	return 0;
}
