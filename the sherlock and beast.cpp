#include<bits/stdc++.h>
using namespace std;
bool cmp(long a,long b)
{
	if(a!=b)
	return a>b;
	else
	return a;
}
int main()
{
	long long n,k,i,d;
	cin>>n>>k;
	vector<long long>a(n);
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a.begin(),a.end(),cmp);
	long long min=10000000000;
	for(i=0;i<=n-k;i++)
	{
		d=abs(a[i+k-1]-a[i]);
		if(d<min)
		min=d;
	}
	cout<<d;
}
