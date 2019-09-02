#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[1002][1002];
	a[0][0]=1;
	for(int i=1;i<=1000;i++)
	for(int j=0;j<=1000;j++)
	{
	a[i][j]=a[i-1][j-1]+a[i-1][j];
	cout<<a[i][j]<<" ";
}
}
