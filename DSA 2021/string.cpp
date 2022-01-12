#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	getline(cin, str); //using getline to take the whole sentence with spaces as input
	cout<<str<<endl;
	
	string s1="fam";
	string s2="ily";
	
	s1.clear(); //clears the value of s1
	
	cout<<s1+s2<<endl;
	
	s1.append(s2); //adding s2 in s1
	cout<<s1<<endl;
	cout<<s1[1]; //for any particular alphabet of the string
	
	return 0;
}
