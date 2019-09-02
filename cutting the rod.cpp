#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[3];
		for(int i=0;i<3;i++)
		cin>>a[i];
		int ans[4][n+1];
		for(int i=0;i<4;++i)
		for(int j=0;j<=n;++j)
		{
			if(i==0 || j==0)
			{
				ans[i][j]=0;
				continue;
			}
			if(j<a[i-1])
			ans[i][j]=ans[i-1][j];
			if(a[i-1]==j)
			ans[i][j]=ans[i-1][j-1]+1;
			
		}
		for(int i=0;i<4;++i,cout<<"\n")
		for(int j=0;j<=n;++j)
		cout<<ans[i][j]<<" ";
	}
}
