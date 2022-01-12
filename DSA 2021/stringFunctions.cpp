#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1= "abc";
	string s2= "xyz";
	cout<<s2.compare(s1)<<endl; //if positive means s2>s1, if negative means s2<s1
	if(s2.compare(s1)==0) //comparing s2 with s1
	{
		cout<<s1<<" and "<<s2<<" are equal."<<endl;
	}
	else{
		cout<<s1<<" and "<<s2<<" are not equal."<<endl;
	}
	
	string s3= "Prashasti";
	cout<<s3.erase(5, 2)<<endl;
	
	return 0;
}
