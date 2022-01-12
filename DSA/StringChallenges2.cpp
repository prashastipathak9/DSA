#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s1;
	cout<<"Enter the string: "<<endl;
	cin>>s1;
	
	sort(s1.begin(), s1.end(), greater<int>());
	cout<<s1;
	
	return 0;
}
