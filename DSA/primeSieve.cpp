#include<iostream>
using namespace std;
//Sieve of Eratosthenes
void isPrime(int n)
{
	int prime[n]={0};
	for(int i=2;i<n;i++)
	{
		if(prime[i]==0){
		for(int j=i*i;j<n;j+=i)
		{
		prime[j]=1;	
		}
	}
	}
	for(int i=2;i<n;i++)
	{
		if(prime[i]==0)
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;
}

int main()
{
	int num;
	cout<<"Enter the number: "<<endl;
	cin>>num;
	
	isPrime(num);
	
	return 0;
}
