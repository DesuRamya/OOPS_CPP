#include<bits/stdc++.h>
using namespace std;
class Student{
public:
	string name;
	void display();
};
void Student::display()
{
	cout<<name<<endl;
}
int main()
{
Student ramya;
ramya.name="Ramya";
ramya.display();
Student *Vasavi=new Student();
Vasavi->name="Vasavi";
Vasavi->display();

}
/*
scope resolution operator is used to access public members and functions outside the class
--> :: ->scope resolution operator
*/