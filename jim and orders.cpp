#include<bits/stdc++.h>
using namespace std;
int main()
{
	multimap<int,int>mp;
	int n,x,i,j;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>j;
		cin>>x;
		mp.insert(pair<int,int>(x+j,i));
	}
	for(auto itr=mp.begin();itr!=mp.end();itr++)
	cout<<itr->second<<"\t";
}
