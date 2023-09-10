/*

*/
#include<bits/stdc++.h>
using namespace std;
class Student{//class creation
private:
	string name;
	int age;
public:
	void SetData(int a,string n)
	{
		age=a;
		name=n;
	}
	void GetData(){
		cout<<name<<" "<<age<<endl;
	}
};
int main()
{
Student ramya;
ramya.SetData(17,"ramya");
ramya.GetData();
}
/*
the private members cannot be accessed outside the class so,we use getter 
setter are used to access private variabes
*/