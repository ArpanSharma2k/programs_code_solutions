#include<bits/stdc++.h>
using namespace std;
int break_(int n)
{
	if(n/2+n/3+n/4<=n)
	return n;
	else
	{
		int a=break_(n/2);
		int b=break_(n/3);
		int c=break_(n/4);
		return a+b+c;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a=break_(n/2);
		int b=break_(n/3);
		int c=break_(n/4);
		cout<<a+b+c<<endl;
	}
}
