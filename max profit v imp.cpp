#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		int ar[n];
		for(int i=0;i<n;i++)
		cin>>ar[i];
		int a[k+1][n+1];
		int maxdiff=-INT_MAX;
		for(int i=0;i<=k;i++)
		for(int j=0;j<=n;j++)
		{
			if(i==0||j==0)
			a[i][j]=0;
			else
			{
				maxdiff=max(a[i-1][j-1]-ar[j-1],maxdiff);
				a[i][j]=ar[j-1]+maxdiff
			;}
		}
		/*for(int i=0;i<=k;i++,cout<<endl)
		for(int j=0;j<=n;j++,cout<<" ")
		cout<<a[i][j];*/
		cout<<a[k][n]<<endl;
	}
}
