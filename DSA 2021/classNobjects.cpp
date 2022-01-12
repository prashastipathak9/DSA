#include<iostream>
using namespace std;
class student{
	string name;
	public:
		
	int age;
	bool gender;
	
	void setName(string s)   //setter function to access pvt data members
	{
		name = s;
	}
	
	void getName()
	{
		cout<<name<<endl;
	}
	
	void printInfo()
	{
	cout<<name<<endl;
	cout<<age<<endl;
	cout<<gender<<endl;	
	}
};

int main()
{
	student arr[2];
	for(int i=0;i<2;i++)
	{
		string s;
		cout<<"Name, age, gender: ";
		cin>>s;
		arr[i].setName(s);
		cin>>arr[i].age;
		cin>>arr[i].gender;
	}
	
	for(int i=0;i<2;i++)
	{
		arr[i].printInfo();
	}
}
