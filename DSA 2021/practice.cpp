#include<iostream>
using namespace std;
int main()
{
	int t;
	cout<<"No of test cases: ";
	cin>>t;
	
	while(t--)
	{
		int n, a[n+1];
		a[n]=-1;
		cout<<"No of days(minimum 2): ";
		cin>>n;
		cout<<"No of visitors: ";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		if(n==1)
		{
			cout<<"1";
			return 0;
		}
		int ans=0;
		int mx=-1;
		for(int i=0;i<n;i++)
		{
			if(a[i]>mx && a[i]>a[i+1])
			{
				ans++;
			}
			mx=max(mx,a[i]);
		}
		
		cout<<"RB days: "<<ans<<endl;
	}
	
	return 0;
}
