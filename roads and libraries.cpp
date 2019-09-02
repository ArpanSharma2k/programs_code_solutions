#include<bits/stdc++.h>
using namespace std;
bitset<1000001>visited;
vector<vector<int>>a(1000001);
long long unsigned dfs(int u)
{
	if(visited[u]) return 0;
	visited[u]=1;
	long long unsigned count=1;
	for(auto i:a[u])
	count+=dfs(i);
	return count;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long unsigned n,m,clib,croad,x,y;
		cin>>n>>m>>clib>>croad;
		for(long unsigned i=1;i<=n;i++)
		a[i].clear();
		visited.reset();
		for(long unsigned i=0;i<m;i++)
		{
			cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		long long unsigned cost=0,count=0;
		if(clib<=croad)
		cost=n*clib;
		else
		{
		for(long unsigned i=1;i<=n;i++)
		{
			if(!visited[i])
			{
				count=dfs(i);
				cost+=(clib+(count-1)*croad);
				
			}
		}
	}
		cout<<cost<<endl;
		
	}
}
