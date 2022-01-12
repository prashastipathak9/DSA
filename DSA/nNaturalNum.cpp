#include<iostream>
using namespace std;
naturalNum(int n)
{
	if(n==0){
	return 0;}
	naturalNum(n-1);
	cout<<n<<" ";
}
int main()
{
	int lastNum;
	cout<<"Value of n: "<<endl;
	cin>>lastNum;
	
	cout<<"Natural numbers till "<<lastNum<<" : "<<endl;
	naturalNum(lastNum);
	
	return 0;
}
