#include<iostream>
using namespace std;
void printArray(int arr[], int n)
{
	cout<<"Array with swapped elemenets: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void reverseArray(int arr[], int n)
{
	int s=0, e=n-1;
	while(e>=s)
	{
		swap(arr[s], arr[e]);
		s++;
		e--;
	}
}
int main()
{
	int n, arr[100];
	cout<<"Enter array size and then its elements: "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	reverseArray(arr, n);
	printArray(arr, n);
	
	return 0;
}
