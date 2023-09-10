#include<bits/stdc++.h>
using namespace std;
class Student{//class creation
private:
	string name;
	int age;
public:
	Student()//--Default 
	{
		name="NO NAME";
		age=12;
	}
	Student(string n)
	{
		name=n;
		age=12;
	}
	Student(int a)
	{
		name="UNDECLARED";
		age=a;
	}

	Student(string n,int a)
	{
		name=n;
		age=a;
	}
	Student(Student &S)
	{
		name=S.name;
		age=S.age;
	}
	void display()
	{
		cout<<name<<" "<<age<<endl;
	}
};
int main()
{
Student A;//Non-parameterised: no parameters are passed or default
Student B(11);//Parameterised: parameters passed (be any n>0)
Student C("RAMYA");
Student D("ramya",17);
Student E(D);//copy Constructor: can pass other object as copy--parameter is an object
A.display();
B.display();
C.display();
D.display();
E.display();
}
/*
constructor is called during object creation
it donot have a return type
arguments are not mandatory
need not call setter while a constructor is declared
CONSTRUCTORS types:
1.Parameterised constructor
2.Non-Parameterised constructor
3.Copy constructor
*/