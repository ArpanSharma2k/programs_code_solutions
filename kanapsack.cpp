#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n,w;
         cin>>n>>w;
         int val[n],wt[n];
         for(int i=0;i<n;++i)
         cin>>val[i];
         for(int i=0;i<n;++i)
         cin>>wt[i];
         int a[n+1][w+1];
         for(int i=0;i<=n;i++)
         for(int j=0;j<=w;j++)
         {
             if(i==0 || j==0)
             {
                 a[i][j]=0;
                 continue;
             }
             if(j<val[i-1])
             a[i][j]=a[i-1][j];
             else if(j>=va)
             a[i][j]=max(max(a[i-1][j],a[i][j-1]),val[i-1]+a[i-1][j-val[i-1]]);
         }
         cout<<a[n][w]<<endl;
     }
}
