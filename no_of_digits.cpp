#include<iostream>
using namespace std;
int fun(int n,int c)
{
	if (n==0)
	{
	return c;
 }
	else
	{
		c=c+1;
		return fun(n/10,c);
	}
}
int main()
{
	int n;
	cin>>n;
	cout<<fun(n,0);
}
