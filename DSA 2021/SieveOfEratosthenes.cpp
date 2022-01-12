#include<iostream>
using namespace std;
void isPrime(int n)
{
	int arr[100]={0};
	
	for(int i=2;i<=n;i++)
	{
		if(arr[i]==0){
		for(int j=i*i;j<=n;j+=i)
		{
			arr[j]=1;
		}
	}
	}
	for(int i=2;i<=n;i++)
	{
		if(arr[i]==0)
		{
			cout<<i<<" ";
		}
	}
}
	
int main()
{
	int num;
	
	cout<<"Enter the value of n: "<<endl;
	cin>>num;
	
	isPrime(num);
	
	return 0;
}
