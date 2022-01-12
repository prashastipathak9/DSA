#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s1;
	int freq[26];
	
	cout<<"Enter the string: "<<endl;
	cin>>s1;
	
	for(int i=0;i<26;i++)
		freq[i]=0;
	
	for(int i=0;i<s1.length();i++)
		freq[s1[i]-'a']++;
		
	char ans= 'a';
	int maxF= 0;
	
	for(int i=0;i<26;i++)
	{
		if(freq[i]>=maxF)
		{
			maxF=freq[i];
			ans=i+'a';
		}
	}
	
	cout<<maxF<<endl<<ans;
	
	return 0;
}
