#include<bits/stdc++.h>
using namespace std;
class person{
private:
	string name;
	int age;
public:
	person(string n , int a)
	{
		name=n;
		age=a;
	}
	 friend void Display(person Ramy); 
};
void Display(person Ramy)
{
	cout<<Ramy.name<<" "<<Ramy.age<<endl;
}

int main()
{
	person Ramy("Ramya",17);
	Display(Ramy);
}