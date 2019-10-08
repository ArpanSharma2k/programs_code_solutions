#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		int a[str2.length()+1][str1.length()+1]={0};
		for(int i=0;i<str1.length()+1;i++)
		a[0][i]=1;
		for(int i=1;i<str2.length()+1;i++)
		for(int j=1;j<str1.length()+1;j++)
		{

			if(str1[j-1]==str2[i-1])
			a[i][j]=a[i][j-1]+a[i-1][j-1];
			else
			a[i][j]=a[i][j-1];
		}
	/*	for(int i=0;i<str2.length()+1;i++,cout<<endl)
		for(int j=0;j<str1.length()+1;j++,cout<<" ")
		cout<<a[i][j];*/
		cout<<a[str2.length()][str1.length()]<<endl;
	}
}
