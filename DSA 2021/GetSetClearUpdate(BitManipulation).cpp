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

//UpdateBit
int updateBit(int num, int position, int value)
{
	int mask= ~(1<<position);
	num= num & mask;
	return (num | (value<<position));
}


int main()
{
	int n,p,v;
	cout<<"Enter the number, position and value: "<<endl;
	cin>>n>>p>>v;
	
	cout<<"Get Bit: "<<getBit(n,p)<<endl;
	cout<<"Set Bit: "<<setBit(n,p)<<endl;
	cout<<"Cleared Bit: "<<clearBit(n,p)<<endl;
	cout<<"Updated Bit: "<<updateBit(n,p,v)<<endl;
	
	return 0;
}
