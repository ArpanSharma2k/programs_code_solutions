#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int i=0;
	while(i<n)
	{
		cout<<"a";
		if(a[i]<=0)
		{
			++i;
			continue;
		}
		if(a[i]>0)
		{
			if(a[i]>1)
			{
			cout<<"1";
			return 0;
		}
			else if(a[i]==1)
			{
				for(int j=i+1;j<n;++j)
				{
					if(a[j]-a[j-1]>1)
					{
					cout<<a[j]+1;
					return 0;
					}
				}
			}
		}
	}
	if(i==n)
	cout<<a[i-1]+1;
	return 0;
}
