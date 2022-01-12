#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n, og_n, sum;
	cout<<"Enter the number to check: ";
	cin>>n;
	
	og_n=n;
	while(n>0)
	{
		int lastdig=n%10;
		sum+=pow(lastdig,3);
		n=n/10;
	}
	if(sum==og_n)
	{
		cout<<"Armstrong Number.";
	}
	else{
		cout<<"Not an Armstrong number.";
	}
	return 0;
}
