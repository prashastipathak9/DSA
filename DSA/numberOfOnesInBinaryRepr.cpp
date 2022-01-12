#include<iostream>
using namespace std;

numberOfOnes(int n)
{
	int count=0;
	while(n)
	{
		n= (n & (n-1));
		count++;
	}
	return count;
}

int main()
{
	int num;
	
	cout<<"Enter the number: "<<endl;
	cin>>num;
	
	cout<<"Number of ones in "<<num<<" = "<<numberOfOnes(num)<<endl;
	
	return 0;
}
