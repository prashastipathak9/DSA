#include<iostream>
using namespace std;
int sum(int n)
{
	int prevSum;
	if(n==0)
	{
		return 0;
	}
	prevSum= sum(n-1);
	return n+prevSum;
}

int main()
{
	int n;
	cout<<"Enter value of n:"<<endl;
	cin>>n;
	
	cout<<"Sum = "<<sum(n);
	
	return 0;
}
