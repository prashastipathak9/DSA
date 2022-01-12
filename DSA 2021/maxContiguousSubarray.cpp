#include<iostream>
using namespace std;
int main()
{
	int n, a[n];
	cout<<"Size of array: "<<endl;
	cin>>n;
	cout<<"Elements of array: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	int pd = a[1]-a[0];
	int curr = 2;
	int ans = 2;
	
	for(int j=2;j<n;j++)
	{
		if(pd == a[j]-a[j-1])
		{
			curr++;
		}
		else{
			pd = a[j]-a[j-1];
			curr = 2;
		}
		ans= max(ans,curr);
	}
	
	cout<<"Max. contiguous subarray length: "<<ans;
	
	return 0;
	
}
