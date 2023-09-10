#include<bits/stdc++.h>
using namespace std;
class Student{//class creation
public:
	string name;
	void display(){
		cout<<name<<endl;
	}
};
int main()
{
Student ramya;//object creation--Method-1
ramya.name="ramya";
ramya.display();
Student *Vasavi=new Student();//object creation using a pointer--Method-2
Vasavi->name="Vasavi";
Vasavi->display();
}
/*
class--consists of member functions and member variables--generally donot take space
until an object is assigned as its a blueprint
object--created using two methods
1.takes stack memory
2.takes heap memory-- using pointer

*/