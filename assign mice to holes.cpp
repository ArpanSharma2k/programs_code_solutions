#include<bits/stdc++.h>
using namespace std;
int assign(vector<int>mice,vector<int>holes)
{
	sort(mice.begin(),mice.end());
	sort(holes.begin(),holes.end());
	int max=INT_MIN;
	for(int i=0;i<mice.size();i++)
	{
		int d=abs(mice[i]-holes[i]);
		if(d>max)
		max=d;
	}
	return max;
}
int main()
{
	int n;
	cin>>n;
	vector<int>mice(n);
	vector<int>holes(n);
	for(int i=0;i<n;i++)
	cin>>mice[i];
	for(int i=0;i<n;i++)
	cin>>holes[i];
	cout<<assign(mice,holes);
}
