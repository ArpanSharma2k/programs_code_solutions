#include<bits/stdc++.h>
using namespace std;
unsigned int MOD=1000000007;
int fac(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	fact=(fact*i)%MOD;
	return fact;
}
int city_tour(int m,vector<int>a)
{
	int n=a.size();
    if(n==1)
    return 1;
	vector<int>d;
	for(int i=0;i<n;++i)
	{
		if(i==0)
		d.push_back(a[i]-1);
		else
		d.push_back(a[i]-a[i-1]-1);
	}
	d.push_back(m-a[n-1]);
	int ans=0,count=0;
	for(int i=0;i<d.size();++i)
	{
		if(d[i])
		{
			if(i==0 || i==d.size()-1)
			{
				count++;
				d[i]--;
			}
			else
			{
				count+=min(d[i],2);
				d[i]-=min(d[i],2);
			}
		}
		if(count && i==d.size()-1)
		{
		ans=(ans+fac(count))%MOD;
		i=-1;
		count=0;
		continue;
		}
		if(!count && i==d.size()-1)
		return ans;
		
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	vector<int>a(m);
	for(int i=0;i<m;++i)
	cin>>a[i];
	cout<<city_tour(n,a);
}
