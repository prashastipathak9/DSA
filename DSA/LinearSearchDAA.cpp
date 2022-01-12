#include<iostream>
using namespace std;
int linearSearch(int arr[], int n, int num)
{
	for(int i=0;i<n;i++)
	if(arr[i]==num)
	return true;
	return false;
}
int main()
{
	int n, arr[n], key;
	cout<<"Enter the number of elements: "<<endl;
	cin>n;
	cout<<"Enter the elements: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the number you want to find: "<<endl;
	cin>>key;
	bool ans;
	ans= linearSearch(arr, n, key);
	if(ans)
	cout<<"Found ";
	else
	cout<<"Not found";
	
	return 0;
	
}
