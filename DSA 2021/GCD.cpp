#include<iostream>
using namespace std;
//Highest Common Factor or Greatest Common Divisor
void gcd(int a, int b)
{
	while(b!=0)
	{
		int rem= a%b;
		a=b;
		b=rem;
	}
	cout<<"HCF = "<<a;
}

int main()
{
	int n1, n2;
	
	cout<<"Enter two numbers: "<<endl;
	cin>>n1>>n2;
	
	gcd(n1, n2);
	
	return 0;
}
