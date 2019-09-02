#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>k>>n;
		vector<int>a(n);
		for(int i=0;i<n;i++)
		cin>>a[i];
		sort(a.begin(),a.end());
		int ans=a[n-1]-a[0];
		int mini=a[0]+k,maxi=a[n-1]-k;
		if(mini>maxi)
		swap(maxi,mini);
		for(int i=1;i<n-1;i++)
		{
			if(a[i]-k<mini && a[i]+k>maxi)
			{
				if(maxi-(a[i]-k)<(a[i]+k-mini))
					mini=a[i]-k;
				else
					maxi=a[i]+k;
			}
		}
		cout<<min(maxi-mini,ans)<<endl;
	}
}
