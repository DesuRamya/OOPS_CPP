#include<iostream>
using namespace std;
void fun(int n,int i)
{
	int a[100];
	if (n<i)
	return;
	cout<<n<<" ";
	return fun(n-1,i);
}
int main()
{
	int n;
	cin>>n;
	fun(n,1);
}
