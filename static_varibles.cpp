#include<bits/stdc++.h>
using namespace std;
class Bank{
public:
	static string bank_name;//static variable declaration
	string name;
	int accno;
	Bank(string n,int ac)
	{
		this->name=n;
		this->accno=ac;
	}
	void display()
	{
		cout<<name<<" "<<accno<<" "<<bank_name<<endl;
	}
};
string Bank::bank_name="KVB";//static variable assignment
int main()
{
Bank b1("Ramya",123);
b1.display();
Bank b2("Vasavi",456);
b2.display();
}
/*
if its a static variable,it creates only one reference for any number of object
but for normal,it creates alot of references
*/