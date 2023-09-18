/*
Multiple:if more than one base class is inherited to a child
*/
#include<bits\stdc++.h>
using namespace std;
class Father
{
public:
	int age;
	string name;
	Father(int a,string n)
	{
		age=a;
		name=n;
	}
};
class Mother
{
public:
	int ag;
	string nam;
	Mother(string name,int age)
	{
		ag=age;
		nam=name;
	}
};
class Child: public Father,public Mother
{
public:
	int aage;
	string namme;
	Child(int a,string n,string name,int age,int aa,string na):Father(a,n),Mother(name,age)
	{
		aage=aa;
		namme=na;
	}
	void display()
	{
		cout<<namme<<" "<<aage<<" "<<age<<" "<<name<<" "<<" "<<ag<<" "<<nam<<endl;
	}
};

int main()
{
	Child R(50,"Sathibabu","Lakshmi",42,18,"Ramya");
	R.display();
}