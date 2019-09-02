#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		int l=str.length(),k=0;
		long long int dp[l+1];
		dp[l]=0;
		int x=-1,count;
		for(int i=l-1;i>=0;i--)
		{
			dp[i]=dp[i+1]+(str[i]-'0')*pow(2,k++);
			int res=log(dp[i])/log(5);
			if(pow(5,res)==dp[i])
			x=i;
		}
		if(x==0)
		cout<<"1"<<endl;
		else if(x==-1)
		cout<<"-1"<<endl;
		
	}
}
