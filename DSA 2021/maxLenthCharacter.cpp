#include<iostream>
using namespace std;
int main()
{
	int n;
	char arr[n+1];
	cout<<"Number of characters: ";
	cin>>n;
	cin.ignore();
	
	cin.getline(arr,n);
	cin.ignore();
	
	int i=0;
	int currLen=0, maxLen=0;
	while(1)
	{
		if(arr[i]=' ' || arr[i]='\0')
		{
			if(currLen>maxLen)
			{
				maxLen=currLen;
			}
			currLen=0;
		}
		currLen++;
		if(arr[i]=='\0')
		break;
		i++;
	}
	cout<<maxLen;
	return 0;
}
