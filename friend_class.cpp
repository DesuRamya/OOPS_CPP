#include<bits\stdc++.h>
using namespace std;
class teacher
{
private:
	int age;
	string name;
public:
	teacher(string n,int a)
	{
		name=n;
		age=a;
	}
	friend class student;
};
class student
{
public:
	
	void display(teacher &t)
	{
		cout<<t.name<<" "<<t.age<<endl;
	}

};
int main()
{
teacher t("RAMYA",12);
student s;
s.display(t);
}