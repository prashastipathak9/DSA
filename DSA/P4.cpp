#include<iostream>
using namespace std;
bool isPrime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return 0; //false or not prime
		}
	}
	return 1; //prime
}

int main()
{
	int num;
	cout<<"Enter the number: "<<endl;
	cin>>num;
	
	if(isPrime(num))
	{
		cout<<"Prime number."<<endl;
	}
	else
	cout<<"Not a Prime number.";
	
	return 0;
}
