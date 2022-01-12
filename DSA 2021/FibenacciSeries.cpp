#include<iostream>
using namespace std;
//fibenacciSequence- 0,1,1(0+1),2(1+1),3(1+2),5(2+3),8...

void fS(int n)
{
	int t1=0,t2=1,nextTerm;
	for(int i=1;i<=n;i++)
	{
		cout<<t1<<endl;
		nextTerm=t1+t2;
		t1=t2;
		t2=nextTerm;
	}
	return;
}

int main()
{
	int n;
	cout<<"Enter number of terms in series: ";
	cin>>n;
	fS(n);
	return 0;
}
