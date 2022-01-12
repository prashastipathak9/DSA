#include<iostream>
using namespace std;
int binaryToOcta(int n)
{
	int ans=0;
	int sum=1;
	while(n>0)
	{
		int y=n%10;
		ans+=y*sum;
		sum*=8;
		n/=10;
	}
	return ans;
}

int main()
{
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	cout<<binaryToOcta(n);
	
	return 0;
}
