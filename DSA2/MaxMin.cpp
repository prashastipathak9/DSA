#include<iostream>
using namespace std;
int getMax(int arr[], int n)
{
	int maxE=INT_MIN;
	for(int i=0;i<n;i++)
	{
		maxE = max(maxE, arr[i]);
		/* if(arr[i]>maxE)
		{
			maxE=arr[i];
		} */
	}
	return maxE;
}
int getMin(int arr[], int n)
{
	int minE=INT_MAX;
	for(int i=0;i<n;i++)
	{
		minE = min(minE, arr[i]);
		/* if(arr[i]<min)
		{
			minE=arr[i];
		} */
	}
	return minE;
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
	
	cout<<"Max num: "<<getMax(arr, n)<<endl;
	cout<<"Min num: "<<getMin(arr, n)<<endl;
	
	return 0;
}
