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
	void static display()//static function
	{
		cout<<bank_name<<endl;
	}
};
string Bank::bank_name="KVB";//static variable assignment
int main()
{
Bank b1("Ramya",123);
b1.display();
}