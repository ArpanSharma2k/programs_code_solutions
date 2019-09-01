#include<bits/stdc++.h>
using namespace std;
string binary(string s1,string s2)
{
	int i=s1.length()-1,j=s2.length()-1,s=0;
	string result="";
	while(i>=0 || j>=0 || s==1)
	{
		s+=((i>=0)?s1[i]-'0':0);
		s+=((j>=0)?s2[j]-'0':0);
		result=char(s%2+'0')+result;
		s/=2;
		--i,--j;
	}
	return result;
}
int main()
{
	string s1,s2;
	cin>>s1;
	cin>>s2;
	cout<<binary(s1,s2);
}
