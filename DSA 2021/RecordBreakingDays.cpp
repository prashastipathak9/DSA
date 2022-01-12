#include<iostream>
using namespace std;
int main()
{
	int T;
	cout<<"Number of test cases: ";
	cin>>T;
	//8, 1 2 0 7 2 0 2 2
	while(T--)
	{
		int n,a[n+1];
		a[n]=-1; //basically n= means n+1 here | so that in last, for n,n+1 2nd condition will always be true
		cout<<"No of days(minimum 2): ";
		cin>>n;
		cout<<"No. of visitors in each day: ";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		if(n == 1)
		{
			cout<<"1";
			return 0;
		}	
		int ans =0;
		int mx = -1;
		for(int i=0;i<n;i++)
		{
			if(a[i]>mx && a[i]>a[i+1])
			{
				ans++;
			}
			mx = max(mx, a[i]);
		}
		cout<<"No. of record breaking days: "<<ans;
	}
	
	return 0;
}
