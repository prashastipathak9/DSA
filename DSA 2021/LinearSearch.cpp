#include<iostream>
using namespace std;
int linearSearch(int a[],int s,int k)
{
	for(int i=0;i<s;i++)
	{
	if(a[i]==k)
	{
		return i; //taking i cuz we want index not value
	}
}
	return -1;	
}

int main()
{
	int n,arr[n],key;
	
	cout<<"Enter the size of array: "<<endl;
	cin>>n;
	cout<<"Enter the elements: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the key:"<<endl;
	cin>>key;
	
	cout<<linearSearch(arr,n,key);
	return 0;
}
