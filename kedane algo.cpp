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
		vector<int>a(n);
		for(int i=0;i<n;i++)
		cin>>a[i];
		int curr_sum=a[0],max_sum=a[0];
		for(int i=1;i<n;i++)
		{
			//curr_sum+=a[i];
			//max_sum=max(max_sum,curr_sum);
			if(curr_sum+a[i]<a[i])
			curr_sum=a[i];
			else
			curr_sum+=a[i];
			max_sum=max(max_sum,curr_sum);
		}
		cout<<max_sum<<endl;
	}
}
