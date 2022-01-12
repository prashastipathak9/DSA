#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	//a-32 = A
	string s1;
	cout<<"Enter the string: "<<endl;
	cin>>s1;
	
	for(int i=0; i<s1.length(); i++)
	{
		if(s1[i]>= 'a' && s1[i]<= 'z')
		{
			s1[i] -=32;
		}
	}
	cout<<s1<<endl;  //Output in upper case
	
	//A+32 =a
	string s2;
	cout<<"Enter the string: "<<endl;
	cin>>s2;
	
	for(int i=0;i<s2.length();i++)
	{
		if(s2[i]>='A' && s2[i]<='Z')
		{
			s2[i] +=32;
		}
	}
	cout<<s2<<endl;  //Output in lower case
	
	//using functions
	string s3;
	cout<<"Enter the string: "<<endl;
	cin>>s3;
	
	transform(s3.begin(), s3.end(), s3.begin(), ::toupper);
	cout<<s3<<endl;  //Output in upper case
	
	transform(s3.begin(), s3.end(), s3.begin(), ::tolower);
	cout<<s3<<endl;  //Output in lower case
	
	return 0;
}
