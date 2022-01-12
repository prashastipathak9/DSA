#include<iostream>
using namespace std;
int sum(int a)
{
	int add=1;
	for(int i=2;i<=a;i++)
	{
		add+=i;
	}
	return add;
}

int main()
{
	int n;
	cout<<"Enter number of terms to be added: ";
	cin>>n;
	cout<<sum(n);
	return 0;
}
