/*
Multilevel:grandfather--father--child
*/
#include<bits\stdc++.h>
using namespace std;
class GrandFather{
public:
	int a;
	string n;
	GrandFather(int age, string name)
	{
		a=age;
		n=name;
	}
};
class Father:public GrandFather
{
public:
	int aa;
	string nn;
	Father(int age,string name,int agee,string namee):GrandFather(age,name)
	{
		aa=agee;
		nn=namee;
	}
};
class Child:public Father
{
public:
	int aaa;
	string nnn;
	Child(int age,string name,int agee,string namee,int ageee,string nameee):Father(age,name,agee,namee)
	{
		aaa=ageee;
		nnn=nameee;
	}
	void display()
	{
		cout<<a<<" "<<n<<" "<<aa<<" "<<nn<<" "<<aaa<<" "<<nnn<<endl;
	}
};
int main()
{
Child R(100,"vvv",50,"sss",18,"rrr");
R.display();
}