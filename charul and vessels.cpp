#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,W;
		cin>>n>>W;
		int a[n];
		for(int i=0;i<n;++i)
		cin>>a[i];
		int ans[n+1][W+1];
		ans[0][0]=1;
		for(int i=0;i<=n;i++)
		for(int j=0;j<=W;j++)
		{
			if(i==0 && j==0) continue;
			else if(i==0)
			ans[i][j]=0;
			else if(j==0)
			ans[i][j]=1;
			else if(j<a[i-1])
			ans[i][j]=ans[i-1][j];
			else if(j==a[i-1])
			ans[i][j]=1;
			else
			ans[i][j]=ans[i-1][j]||ans[i][j-a[i-1]];
		}
		cout<<ans[n][W]<<endl;
		/*for(int i=0;i<=n;i++,cout<<"\n")
		for(int j=0;j<=W;j++,cout<<" ")
		cout<<ans[i][j];*/
	}
}
