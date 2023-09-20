#include<iostream>
using namespace std;
class Student{
	public:
		string name,rollno;
		Student()//default constructor
		{
			name="Ramya";
			rollno="05h3";
		}
		Student(string name,string rollno)//parameterised -- have some parameters
		{
			this->name=name;
			this->rollno=rollno;
		}
		Student(Student &s)//copy constructor--copy of another constructor is passed as parameter
		{
			this->name=s.name;
			this->rollno=s.rollno;
		}
		Student (string name)
		{
		this->name=name;
		this->rollno="123";	
		}
		inline void display()//inline functions are those dont have return type,loops,conditional statements
		{
			cout<<name<<" "<<rollno<<endl;
		}
};
int main()
{
	Student s1;//default--no parameters
	Student s2(" Ramy","111");//parameterised--parameters passed
	Student s3(s1);//copy--just simply pass the object as parameter
	Student s4("RAMY");
	s1.display();
	s2.display();
	s3.display();
	s4.display();
}
//if same name is used for multiple constructors then it is called constructor overloading
