#include<bits/stdc++.h>
using namespace std;
int bfs(vector<int>g[])
{
	int dis[105];
		bool visited[105];
		memset(visited,false,sizeof(visited));
		memset(dis,-1,sizeof(dis));
		
	int start=1;
	dis[start]=0;
	queue<int>q;
	visited[start]=true;
	q.push(start);
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		for(auto x:g[u])
		{
			if(!visited[x])
			{
				visited[x]=true;
				dis[x]=dis[u]+1;
				q.push(x);
			}
		}
	}
	return dis[100];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		vector<int>g[101];
		for(int i=1;i<=100;i++)
		for(int j=i+1;j<=i+6 && j<=100;j++)
		g[i].push_back(j);
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			int a,b;
			cin>>a>>b;
			for(int j=a-6;j<=a;j++)
			if(j>=1)
			g[j].push_back(b);
		}
		int m;
		cin>>m;
		for(int i=0;i<m;i++)
		{
			int a,b;
			cin>>a>>b;
			for(int j=a-6;j<=a;j++)
			{
			if(j>=1)
			g[j].push_back(b);
			}
			g[a].clear();
		}
		cout<<bfs(g)<<endl;
	}
}
