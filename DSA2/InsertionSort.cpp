#include<iostream>
using namespace std;
void insertionSort(int n, int arr[])
{
	int i, j, temp;
	for(i=0;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		while(temp<arr[j]&&j>=0)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	return ;
}
int main()
{
	int n, arr[n];
	cout<<"Size of array + its elements? "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	insertionSort(n, arr);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"  ";
	}
	
	
	return 0;
}
