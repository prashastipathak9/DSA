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
	
	student()
	{
		cout<<"Default constructor(as you didnt pass the parameter)."<<endl;
	}
	
		student(string s, int a, bool g)
	{
		name = s;
		a =age;
		gender =g;
	} //parameterised constructor
	
	~student()
	{
		cout<<"Destructor called"<<endl;
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
	student a;
	student b("PP", 20, 1);
	b.printInfo();
	
	
	return 0;
}
