#include<bits/stdc++.h>
using namespace std;
long unsigned sum=0,i;
int super_digit(string str,int k)
{
	for(int i=0;i<str.length();i++)
	sum+=(str[i]-'0')%9;
	sum*=k;
	if(sum%9==0) // REMINDER BY DIVIDING BY ( GIVES YOU THE SUM OF DIGITS
	return 9;
	else
	return sum%9;
}
int main()
{
	string str;
	cin>>str;
	int k;
	cin>>k;
	cout<<super_digit(str,k);
}
