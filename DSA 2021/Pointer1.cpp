#include<iostream>
using namespace std;
void increment(int *a)
{
	*a+=1;
}
int main()
{
	int a=2;
	increment(&a);
	cout<<a;
	return 0;
}
void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int a=2;
	int b=4;
	
	swap(&a,&b);
	cout<<a<<endl<<b;
	return 0;
}

