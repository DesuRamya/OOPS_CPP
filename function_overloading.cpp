#include<bits/stdc++.h>
using namespace std;
class A{
public:
	void add(int x,int y){
		cout<<x+y<<endl;
	}
	void add(int x,int y,int z)
	{
		cout<<x+y+z<<endl;
	}
};
int main()
{
A a;
a.add(1,2);
a.add(1,2,3);
}
/*
polymorphism:1.compile time polymorphism
			 2.Runtime polymorphism
function oveloading is a part of complie time overloading
here the functions arre same name but differ in their parameters
*/