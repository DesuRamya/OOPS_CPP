#include<bits\stdc++.h>
using namespace std;
class Person{
public:
	Person()
	{
		cout<<"Constructor of base"<<endl;
	}
	~Person()
	{
		cout<<"Destructor of base"<<endl;
	}
};
class Student : public Person{
public:
	Student()
	{
		cout<<"Constructor of child"<<endl;
	}
	~Student()
	{
		cout<<"Destructor of child"<<endl;
	}
};
int main()
{
	Student R;
}
/*
Priority order of calling Constructors,Destructors in inheritance:
1.Constructor of base
2.Constructor of Child
3.Destructor of Child
4.Destructor of base
--As soon as object is created constructor is callled 
-- in inheritance destructor is also called
*/