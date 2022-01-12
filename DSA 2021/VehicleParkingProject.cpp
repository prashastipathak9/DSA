#include<iostream>
using namespace std;
int main()
{
	int input, amount=0, count=0;
	int r=0, c=0, b=0;
	
	while(true)
	{
	//menu
	cout<<"Press 1 for Rickshaw"<<endl;
	cout<<"Press 2 for Car"<<endl;
	cout<<"Press 3 Bus"<<endl;
	cout<<"Press 4 to see the record"<<endl;
	cout<<"Press 5 to delete the record\n"<<endl;
	cin>>input;
	
	if(input==1)
	{
		if(count<50)
		{
			r += 1;
		amount += 100;
		count += 1;}
		else{
	cout<<"No more vehicles, Parking is full!\n"<<endl;}
	}
	else if(input==2)
	{
		if(count<=50)
		{
			c +=1;
		amount += 200;
		count += 1;}
		else{
	cout<<"No more vehicles, Parking is full!\n"<<endl;}
	}
	else if(input==3)
	{
		if(count<=50)
		{
			b += 1;
		amount += 300;
		count += 1;}
		else{
	cout<<"No more vehicles, Parking is full!\n"<<endl;}
	}
	else if(input==4)
	{
		cout<<"************************************"<<endl;
		cout<<"Total amount = "<<amount<<endl;
		cout<<"Total number of vehicles = "<<count<<endl;
		cout<<"Total number of Rickshaws = "<<r<<endl;
		cout<<"Total number of Cars = "<<c<<endl;
		cout<<"Total number of Buses = "<<b<<endl;
		cout<<"************************************"<<endl;
	}
	else if(input==5)
	{
		amount=0;
		count=0;
		r=0;
		c=0;
		b=0;
		cout<<"************************************"<<endl;
		cout<<"Record deleted!"<<endl;
		cout<<"************************************"<<endl;
	}
	else
	{
		cout<<"Invalid number!"<<endl;
}
}

	return 0;
}
