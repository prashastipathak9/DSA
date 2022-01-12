#include<iostream>
using namespace std;
void TowerOfHanoi(int n, char a, char b, int aux)
{
	if(n==0)
	return;
	TowerOfHanoi(n-1, a, aux, b);
	cout<<a<<"->"<<b<<endl;
	TowerOfHanoi(n-1, aux, b, a);
}
int main()
{
	int n;
	cout<<"Value of n: "<<endl;
	cin>>n;
	TowerOfHanoi(n, 'A', 'B', 'C');
	return 0;
}
