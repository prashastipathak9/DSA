#include<iostream>
using namespace std;

void merge(int a[], int s, int e)
{
	int mid = (s+e)/2;
	//pointers
	int i = s;
	int j = mid+1;
	int k = s;
	//temporary array to store the combined result after merging
	int temp[100];
	
	while(i<=mid &&j<=e)
	{
		if(a[i]<a[j])
		{
			temp[k++] = a[i++];
		}
		else
		{
			temp[k++] = a[j++];
		}
	}
	while(i<=mid)
	{
		temp[k++] = a[i++];
	}
	while(j<=e)
	{
		temp[k++] = a[j++];
	}
	
	//copy all the elements of temp array to og array
	for(int i=s; i<=e; i++)
	{
		a[i]=temp[i];
	}
}

void mergeSort(int a[], int s, int e)
{
	//base case : 1 or 0
	if(s>=e)
	{
		return;
	}
	//recursively sorting the arrays
	int mid = (s+e)/2;
	mergeSort(a, s, mid);
	mergeSort(a, mid+1, e);
	//merging the 2 sorted arrays
	merge(a, s, e);
	
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
	
	mergeSort(a, 0, n-1);
	cout<<"Sorted array: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<",  ";
	}
	
	return 0;
}




