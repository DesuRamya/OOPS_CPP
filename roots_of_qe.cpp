#include<bits/stdc++.h>
using namespace std;
void roots(int a,int b,int c)
{
float d=(b*b)-(4*a*c);
if (d>0)
{
	cout<<"roots are real and distinct"<<endl;
	float x1=((-1*b)+sqrt(d))/(2*a);
	float x2=((-1*b)-sqrt(d))/(2*a);
	cout<<x1<<endl<<x2;
}
else if (d==0)
{
	cout<<"roots are real and equal"<<endl;
	float x3=(-1*b)/(2*a);
	cout<<x3<<endl<<x3;
}
else
{
	cout<<"roots are imaginary"<<endl;
	float r=(-1*b)/(2*a);
	float i=(sqrt(-1*d))/(2*a);
	cout<<r+i<<endl<<r-i;
}
}
int main()
{
int a,b,c;
cin>>a>>b>>c;
roots(a,b,c);
}