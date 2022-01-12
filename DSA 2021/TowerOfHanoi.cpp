#include<iostream>
using namespace std;

void towerOfHanoi(int n, char src, char dest, char helper)
{
	if(n==0)
	{
		return;
	}
	
	towerOfHanoi(n-1, src, helper, dest);
	cout<<"Move from "<<src<<" to "<<dest<<endl;
	towerOfHanoi(n-1, helper, dest, src);
}

int main()
{
	int n;
	char s='S', d='D', h='H';
	cout<<"Enter the number of Hanoi: "<<endl;
	cin>>n;
	
	towerOfHanoi(n, s, d, h);
	
	return 0; 
}
