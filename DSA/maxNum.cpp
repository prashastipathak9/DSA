#include<iostream>
using namespace std;

//max number
int main()
{
	int n,arr[n];
	cout<<"Enter the size of array: "<<endl;
	cin>>n;
	cout<<"Enter the elements: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int mx=-19999;
	for(int i=0;i<n;i++)
	{
		mx = max(mx,arr[i]);
	}
	cout<<"Maximun number: "<<mx;
	
	return 0;
}
