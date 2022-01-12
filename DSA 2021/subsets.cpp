#include<iostream>
using namespace std;

void subsets(int arr[], int n)
{
	for(int i=0;i<(1<<n);i++)   //i=1 to Total Number of subsets(2^n)
	{
		for(int j=0;j<n;j++)
		{
			if(i & (1<<j))      //if j(th) bit 1
			{
				cout<<arr[j]<<" ";
			}
		}
		cout<<endl;
	}
}

int main(){
	int n, arr[n];
	
	cout<<"Enter the size of array: "<<endl;
	cin>>n;
	cout<<"Enter the elements of array: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Subsets are: "<<" "<<endl;
	subsets(arr, n);
	
	return 0;
}
