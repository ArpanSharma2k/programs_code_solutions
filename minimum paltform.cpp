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
		vector<int>d(n);
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=0;i<n;i++)
		cin>>d[i];
		/*multimap<int,char>mp;
		for(int i=1;i<n;i++)
		{
			mp.insert(make_pair(a[i],'a'));
			mp.insert(make_pair(d[i],'d'));
		}
		int pl=0,max_pl=-1;
		for(auto itr=mp.begin();itr!=mp.end();itr++)
		{
			if(itr->second=='a')
			pl++;
			else
			pl--;
			max_pl=max(max_pl,pl);
		}
		cout<<max_pl<<endl;*/
		sort(a.begin(), a.begin()+n); 
   sort(d.begin(), d.begin()+n); 
  
   int plat_needed = 1, result = 1; 
   int i = 1, j = 0; 
  
   while (i < n && j < n) 
   { 
      if (a[i] <= d[j]) 
      { 
          plat_needed++; 
          i++; 
   
          if (plat_needed > result)  
              result = plat_needed; 
      } 
      else
      { 
          plat_needed--; 
          j++; 
      } 
   } 
   cout<<result<<endl;
	}
}
