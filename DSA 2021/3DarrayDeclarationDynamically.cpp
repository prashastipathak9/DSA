#include<iostream>
using namespace std;
in main()
{
	int row, col;
	cout<<"Number of rows: "<<endl;
	cin>>rows;
	cout<<"Number of columns: "<<endl;
	cin>>col;
	
	int ***ptr = new int **[row];
	for(int i=0;i<row;i++)
	{
		ptr[i]=new int*[col];
		for(int j=0;j<col;j++)
		{
			ptr[i][j]= new int *[col];
		}
	}
}
