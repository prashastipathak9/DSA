#include<iostream>
#include<string>
using namespace std;

void reverse(string a)
{
	if(a.length() == 0)
	{
		return;
	}
	
	string ros = a.substr(1);
	reverse(ros);
	
	cout<<a[0];
}

int main()
{
	string a;
	cout<<"Enter the elements of string: "<<endl;
	cin>>a;
	
	reverse(a);
	
	return 0;
}
