#include<iostream>
using namespace std;
int fib( int n)
{
	if(n==0 || n==1)
	{
		return n;
	}
	
	return fib(n-1)+fib(n-2);
}

int main()
{
	int num;
	cout<<"Enter value of n: "<<endl;
	cin>>num;
	
	cout<<num<<"th Fibonacci number = "<<fib(num);
	
	return 0;
}
