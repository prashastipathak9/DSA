#include<iostream>
using namespace std;

//GetBit
int getBit(int num, int position)
{
	return ((num & (1<<position))!=0);
}

//SetBit
int setBit(int num, int position)
{
	return ((num | (1<<position)));
}

//ClearBit
int clearBit(int num, int position)
{
	int mask= ~(1<<position);
	return (num & mask);
}

int main()
{
	int n,p;
	cout<<"Enter the number and position: "<<endl;
	cin>>n>>p;
	
	cout<<getBit(n,p)<<endl;
	cout<<setBit(n,p)<<endl;
	cout<<clearBit(n,p)<<endl;
	
	return 0;
}
