#include<iostream>
using namespace std;

isPowerOf2(int n)
{
	return (n && !(n & n-1));
}

int main()
{
	int num;
	
	cout<<"Enter the number to check: "<<endl;
	cin>>num;
	
	cout<<isPowerOf2(num);
	
	return 0;
}
