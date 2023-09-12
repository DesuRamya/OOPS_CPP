/*Destructor is called when delete an object
* Use tilda(~)before class number
*
NO parameters are passed into destructor
*/
#include<bits/stdc++.h>
using namespace std;
class person{
private:
	string *name;
	int *age;
public:
	person(string n="NO" ,int a=12)
	{
		name=new string;
		age= new int;
		*name=n;
		*age=a;
	}	
	~person()
	{
		delete name;
		delete age;
		cout<<"Destructor called";
	}

};
int main()
{
 person *p=new person();
 delete p;
}