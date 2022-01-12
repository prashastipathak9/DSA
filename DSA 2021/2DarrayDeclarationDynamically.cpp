#include<iostream>
#include<string>
using namespace std;
void userInput(int **p, int r, int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<"Enter value at index ("<<i<<","<<j<<")"<<endl;
			cin>>p[i][j]; //taking input
		}
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<p[i][j]<<" ";
		}
		cout<<endl; //displaying output
	}
}

int main()
{
	int row, col;
	cout<<"Number of rows: "<<endl;
	cin>>row;
	cout<<"Number of columns: "<<endl;
	cin>>col;
	
	int **ptr= new int*[row]; //memory allocation
	for(int i=0;i<row;i++)
	{
		ptr[i]= new int[col];
	}
	
	userInput(ptr, row, col);
	delete(ptr); //deleting the memory allocated or memory deallocation
	return 0;
}

