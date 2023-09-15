/*
hirarechical--		A
				   / \
				  B	  C
*/
#include<bits\stdc++.h>
using namespace std;
class A
{
public:
	int age;
	string name;
	A(int a,string n)
	{
		age=a;
		name=n;;
	}
};
class B:public A
{
public:
	int roll;
	int per;
	B(int a,string n,int r,int p):A(a,n)
	{
		roll=r;
		per=p;
	}
	void display1()
	{
		cout<<age<<" "<<name<<" "<<roll<<" "<<per<<endl;
	}
};
class C:public A
{
public:
	int s;
	int m;
	C(int a,string n,int sa,int ma):A(a,n)
	{
		s=sa;
		m=ma;
	}
void display2()
{
	cout<<age<<" "<<name<<" "<<s<<" "<<m<<endl;
}
};
int main()
{
B r(11,"aaa",11,123);
r.display1();
C s(11,"aaa",55,78);
s.display2();
}