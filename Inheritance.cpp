#include<bits\stdc++.h>
using namespace std;
class father{
protected:
	int age;
	string name;
protected:
void setName(string name){
name=name;
}
void setage(int age){
age=age;
}
};
class daughter: protected father
{
public:
	int id;
	void SetId(int i)
	{
		id=i;
	}
	void display()
	{
		cout<<name<<" "<<age<<" "<<id<<endl;
	}
	void SetData(string n,int a)
	{
		name=n;
		age=a;
	}

};
int main()
{
	daughter Ramya;
	Ramya.id=155;
	Ramya.SetData("Vasavi",17);
	Ramya.display();
}
/*
private variables and functions are not accessed using inheritance
only the public and protected members of parent class are accessed by child class
the private members cannot be accssed in child class
the protected,public of parent are accessed using protected child class but the protected 
cannot be accessed using public chid class
--The class that give the properties is called Base class or parent class
--The class that inherits the properties is called child class
*/