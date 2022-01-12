#include<iostream>
using namespace std;
void divisibles(int n, int n1, int n2)
{
	int a= n/n1;
	int b= n/n2;
	int c= n/(n1*n2);
	
	int d= a+b-c;
	cout<<d<<endl;
}

int main()
{
	int n, n1, n2;
	
	cout<<"Enter n, n1, n2: "<<endl;
	cin>>n>>n1>>n2;
	
	divisibles(n,n1,n2);
	
	return 0;
}
