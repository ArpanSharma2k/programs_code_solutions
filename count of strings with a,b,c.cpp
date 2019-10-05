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
        int a[n+1][n+1];
        for(int i=1;i<=n;i++)
        a[0][i]=0;
        for(int i=0;i<=n;i++)
        a[i][0]=1;
        for(int i=0;i<=n;i++)
        a[1][i]=1;
        for(int i=1;i<=n;i++)
        a[2][i]=i+1;
        a[3][1]=3;
        for(int i=2;i<=n;i++)
        {
            a[3][i]=a[2][i]+i*a[2][i-1]+(i*(i-1)/2)*a[2][i-2];
        }
        for(int i=0;i<n+1;i++,cout<<endl)
        for(int j=0;j<n+1;j++,cout<<" ")
        cout<<a[i][j];
        cout<<a[3][n]<<endl;
    }
	
}
