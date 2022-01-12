#include<iostream>
using namespace std;
int factorial(int n)
{
	int fact=1;
	
	for(int i=1;i<=n;i++)
	{
		fact= fact*i;
	}
	return fact;
}
int nCr(int n, int r)
{
	int ans, num, den;
	num=factorial(n);
	den=(factorial(r)*factorial(n-r));
	ans=num/den;
	
	return ans;
}

int main()
{
	int n, r;
	cout<<"Enter value of n, r: "<<endl;
	cin>>n>>r;
	
	cout<<"nCr = "<<nCr(n,r)<<endl;
	
	return 0;
}
