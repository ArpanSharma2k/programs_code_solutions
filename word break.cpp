#include<bits/stdc++.h>
using namespace std;
bool compare(string a,string b)
{
	return a<b;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string>str(n);
		for(int i=0;i<n;i++)
		cin>>str[i];
		string s;
		cin>>s;
		string temp="";
		for(int i=0;i<s.length();++i)
		{
			temp+=s[i];
			for(int j=0;j<n;j++)
			if(str[j]==temp)
			temp="";
		}
		if(temp.length())
		cout<<"0\n";
		else
		cout<<"1\n";
	}
}
