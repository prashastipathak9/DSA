#include<iostream>
using namespace std;
pow()
{
	int n,p;
	cout<<"Enter the number and its power: "<<endl;
	cin>>n>>p;
	int ans=1;
	
	for(int i=0;i<p;i++)
	{
		ans=ans*n;
	}
	return ans;
}
int main()
{	
	cout<<pow()<<endl;;
	return 0;
}
