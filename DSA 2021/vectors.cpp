#include<iostream>
#include<vector>
using namespace std;

int main()
{
	
	//Vectors
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	} //1 2 3 
	
	cout<<endl;
	
	vector<int>::iterator it;
	for(it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<" ";
		}	//1 2 3
		
		cout<<endl;
		
	v.pop_back();  //vector becomes 1 2
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	
	cout<<endl;
	
	vector<int>v2(3,50);
	//50 50 50
	for(int i=0;i<v2.size();i++)
	{
		cout<<v2[i]<<" ";
	}
	
	cout<<endl;
	
	swap(v,v2);
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	
	cout<<endl;
	
	for(int i=0;i<v2.size();i++)
	{
		cout<<v2[i]<<" ";
	}
	
	//Pairs
	pair <int,char> p;
	p.first=3;
	p.second='z';
	
	return 0;
}
