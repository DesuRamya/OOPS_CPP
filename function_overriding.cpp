#include<bits/stdc++.h>
using namespace std;
class Base{
public:
	void print()
	{
		cout<<"Its Base class"<<endl;
	}
};
class Inherited:public Base{
public:
	void print()
	{
		cout<<"Its Inherited class"<<endl;
	}

};
void whoami(Base &B)
{
	B.print();
}
int main()
{
	Inherited i;
	i.print();
	whoami(i);
}
/*
Its in runtime polymorphism
Function overriding means having different classes inherited to eachother with same parameters
*/