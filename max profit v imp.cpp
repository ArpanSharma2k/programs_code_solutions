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
		for (int i = 0; i <= k; i++) 
          a[i][0] = 0;
    for (int j = 0; j <= n; j++) 
        a[0][j] = 0; 
		for(int i=1;i<=k;i++,maxdiff=-INT_MAX)
		
		for(int j=1;j<n;j++)
	{
	
				maxdiff=max(a[i-1][j-1]-ar[j-1],maxdiff);
				a[i][j]=max(a[i][j-1],ar[j]+maxdiff);
		}
		/*for(int i=0;i<=k;i++,cout<<endl)
		for(int j=0;j<=n;j++,cout<<" ")
		cout<<a[i][j];*/
		cout<<a[k][n-1]<<endl;
	}
}
