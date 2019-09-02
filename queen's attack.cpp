#include<bits/stdc++.h>
using namespace std;

int no_ob(int rp,int cp,vector<vector<int>>a,int n,int k)
{
	int sum=0;
	for(int i=0;i<k;i++)
	{
		int b=a[i][0];
		int c=a[i][1];
		if(b-rp==0)
		{
			if(c-cp>0)
			sum+=(n-c+1);
			else sum+=(c);
		}
		else if(c-cp==0)
		{
			if(b-rp>0)
			sum+=(n-b+1);
			else sum+=(b);
		}
		else if(abs(b-rp)==abs(c-cp))
		{
			if(b-rp <0 && c-cp <0)
			sum+=min(b,c);
			else if( b-rp >0 && c-cp >0)
			sum+=min(n-b+1,n-c+1);
			else if(b-rp >0  && c-cp <0)
			sum+=min(b,n-c+1);
			else if(b-rp <0 && c-cp>0)
			sum+=min(c,n-b+1);
		}
	}
	return sum;
}
int main()
{
	int n,k,x,y;
	cin>>n>>k;
	cin>>x>>y;
	vector<vector<int>>a(k,vector<int>(2));
	for(int i=0;i<k;i++)
	for(int j=0;j<2;j++)
	cin>>a[i][j];
	int t=no_ob(x,y,a,n,k);
	int no=2*(n-1)+min(n-y,x-1)+min(y-1,n-x)+min(n-y,n-x)+min(x-1,y-1);
	cout<<no-t;
	return 0;
}
