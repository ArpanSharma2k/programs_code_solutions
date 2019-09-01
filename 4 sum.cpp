#include<bits/stdc++.h>
using namespace std;
void findFourElements(int *a,int n,int X)
{
	unordered_map<int,pair<int,int>>mp;
	for(int i=0;i<n-1;i++)
	for(int j=i+1;j<n;++j)
	mp[a[i]+a[j]]={i,j};
	for(int i=0;i<n-1;i++)
	for(int j=i+1;j<n;++j)
	{
		int curr=a[i]+a[j];
		int k=X-curr;
		if(mp.find(k)!=mp.end())
		{
			pair<int,int>p=mp[k];
			if(p.first!=i && p.first!=j && p.second!=i && p.second!=j)
			{
				cout<<a[i]<<" "<<a[j]<<" "<<a[p.first] <<" "<<a[p.second];
				return;		
			}
		}
		
	}
}
int main()
{
	int arr[] = {10, 20, 30, 40, 1, 2}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int X = 73; 
    findFourElements(arr, n, X); 
    return 0; 
}
