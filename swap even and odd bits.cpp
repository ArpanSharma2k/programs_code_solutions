#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int odd= n& 0x55555555;
		long long int even= n& 0xAAAAAAAA;
		odd<<=1;
		even>>=1;
		n=odd|even;
		cout<<n;
		
	}
}
