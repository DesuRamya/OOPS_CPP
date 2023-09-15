/*
--The class that give the properties is called Base class or parent class
--The class that inherits the properties is called child class
*/
#include<bits\stdc++.h>
using namespace std;
class Person
{
protected:
	int age;
	string name;
public:
	void SetAge(int a)
	{
		age=a;
	}
	void SetName(string n)
	{
		name=n;
	}
};
class Student:protected Person//can be public also
{
public:
	// Person::SetAge;//It increases the scope of the variable
	// Person::SetName;
	 int id;
	string college;
	void SetId(int i)
	{
		id=i;
	}
	void SetCollege(string c)
	{
		college=c;
	}
	void SetAge(int a)
	{
		age=a;
	}
	void SetName(string n)
	{
		name=n;
	}

void display()
{
	cout<<name<<" "<<age<<" "<<id<<" "<<college<<endl;
}

};
int main()
{
Student R;
R.SetAge(17);
R.SetName("Ramya");
R.SetId(11);
R.SetCollege("AEC");
R.display();
}