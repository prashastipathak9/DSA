#include<iostream>
using namespace std;
int main()
{
	int n;
	char arr[n+1];
	
	cout<<"Total number of characters: ";
	cin>>n;
	cout<<"Enter the character: ";
	cin>>arr;
	bool check=1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=arr[n-1-i])
		{
			check=0;
			break;
		}
	}
	if(check==true)
	{
		cout<<"Palindrome!";
	}
	else{
		cout<<"Not palindrome!";
	}
	
	return 0;
}
