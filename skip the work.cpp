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
		int inc=a[0];
		int ex=0;
	    for(int i=1;i<n;i++)
	    {
	    	int inc_new=a[i]+min(ex,inc);
	    	int ex_new=inc;
	    	inc=inc_new;
	    	ex=ex_new;
		}
		cout<<min(inc,ex)<<endl;
	}
}
