#include<iostream>
using namespace std;
void fun(int i,int n)
{
	int a[100];
	if (i>n)
	return;
	cout<<i<<" ";
	return fun(i+1,n);
}
int main()
{
	int n;
	cin>>n;
	fun(1,n);
}
