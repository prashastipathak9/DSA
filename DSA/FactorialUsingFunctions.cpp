#include<iostream>
using namespace std;
//nCr= n!/((n-r)!*r!)
int fact(int a)
{
	int factorial=1;
	for(int i=2;i<=a;i++)
	{
		factorial*=i;
	}
	return factorial;
}

int main()
{
	int n,r,comb;
	cout<<"Enter the value of n and r: ";
	cin>>n>>r;
	comb=fact(n)/(fact(r)*fact(n-r));
	cout<<comb;
	return 0;
}
