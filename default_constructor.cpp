//Default Constructor using parameterised
#include<bits/stdc++.h>
using namespace std;
class Student{
private:
	string name;
	int age;
public:
Student(string n="NO NAME",int a=12)//default parameters are used in same constructor to reduce code
	{
		this->name=n;
		this->age=a;
	}
	void display()
	{
		cout<<name<<" "<<age<<endl;
	}
};
int main()
{
Student A;
A.display();
}
