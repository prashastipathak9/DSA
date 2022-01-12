#include<iostream>
using namespace std;
int main()
{
	int *a=new int[10];  
	for(int i=0;i<10;i++)
	{
		a[i]=i+1;
	}
	/* int **ptr= new int*[row];
	for(int i=0;i<row;i++)
	{
		ptr[i]= new int[col];
	} */
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<endl;
	}
	delete(a);
	return 0;
}

