#include<iostream>
using namespace std;
void printArray(int arr[], int n)
{
	cout<<"Array with swapped alternate: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void swapAlternate(int arr[], int n)
{
	int temp;
	for(int i=0;i<n;i+=2)
	{
		if((i+1)<n)
		{
			//swap(arr[i], arr[i+1]);
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
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
	
	swapAlternate(arr, n);
	printArray(arr, n);
	
	return 0;
}

