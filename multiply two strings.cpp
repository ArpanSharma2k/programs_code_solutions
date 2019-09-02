#include<bits/stdc++.h>
using namespace std;
string multiply(string s1,string s2)
{
	int n1=s1.length(),n2=s2.length();
	if(n1==0 || n2==0)
	return "0";
	vector<int>result(n1+n2,0);
	int n11=0,n22=0;
	for(int i=n1-1;i>=0;i--)
	{
		int a=s1[i]-'0';
		int carry=0;
		n22=0;
		for(int j=n2-1;j>=0;--j)
		{
			int b=s2[j]-'0';
			int sum=a*b+result[n11+n22]+carry;
			result[n11+n22]=sum%10;
			carry=sum/10;
			n22++;
		}
		if(carry>0)
		result[n11+n22]+=carry;
		n11++;
	}
	string str="";
	int i=result.size()-1;
	while(i>=0 && result[i]==0)
	i--;
	if(i==-1)
	return "0";
	while(i>=0)
	str+=to_string(result[i--]);
	return str;
}
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	cout<<multiply(s1,s2);
}
