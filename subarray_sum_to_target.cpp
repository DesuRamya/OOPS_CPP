#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>t;
	int c=0;
	for (int i=0;i<n;i++)
	{
		int s=0;
		for (int j=i;j<n;j++)
		{
			s=s+a[j];
			if (s==t)
			{
				c=c+1;
			}
		}
	}
	cout<<c;
}