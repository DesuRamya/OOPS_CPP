#include<iostream>
using namespace std;
/*class Data{  //class classname
	string name,rollno,branch,college;
	int bc=10;
	float per;
};
int main()
{
	Data s1,s2;
	cout<<bc;----error bc was not declared
}


private:

class Data{  //class classname
	string name,rollno,branch,college;
	int bc=10;----error as it is private
	float per;
};
int main()
{
	Data s1,s2;
	cout<<s1.bc;
}
//to make a private to public

public:

class Data{  
public://to make the member variables public
		string name,rollno,branch,college;
		int bc=10;
		float per;
};
int main()
{
	Data s1,s2;
	cout<<s1.bc;
}


class Data{  
protected:
	string name,rollno,branch,college;
	int bc=10;//error--bc is protected
	float per;
};
int main()
{
	Data s1,s2;
	cout<<s1.bc;
}


member functions can be inside or outside a function
class Data{  
public://to make the member variables public
		string name,rollno,branch,college;
		int bc;
		float per;
		Data(string n,string r,string b,string c,int cb,float p)
		{
			this->name=n;
			this->rollno=r;//this-> denotes s1 i.e. object name
			branch=b;
			college=c;
			bc=cb;
			per=p;
		}
		void display()
		{
			cout<<name<<" "<<rollno<<" "<<branch<<" "<<college<<" "<<bc<<" "<<per<<endl;
		}
};

Function can also be defined outside class

class Data{  
public://to make the member variables public
		string name,rollno,branch,college;
		int bc;
		float per;
		Data(string n,string r,string b,string c,int cb,float p)
		{
			this->name=n;
			this->rollno=r;//this-> denotes s1 i.e. object name
			branch=b;
			college=c;
			bc=cb;
			per=p;
		}
		void display();
		
};
void Data::display()
{
			cout<<name<<" "<<rollno<<" "<<branch<<" "<<college<<" "<<bc<<" "<<per<<endl;

}*/
//constructor can also be defined outside the class but no return type for it 
/*class Data{  
public://to make the member variables public
		string name,rollno,branch,college;
		int bc;
		float per;
		 Data(string n,string r,string b,string c,int cb,float p);
		
		void display();
};
void Data::display()
{
			cout<<name<<" "<<rollno<<" "<<branch<<" "<<college<<" "<<bc<<" "<<per<<endl;

}
Data::Data(string n,string r,string b,string c,int cb,float p)
{
			this->name=n;
			this->rollno=r;//this-> denotes s1 i.e. object name
			branch=b;
			college=c;
			bc=cb;
			per=p;
		}
*/
//branch changes from person to person--instance variables
//local variables--belong to that particular function
//static variables--declared inside class--doesnot change--syntax:static data type variable_name
/*
To define a static varible:
 datatype calss_name::var=val
*/

class Data{  
public://to make the member variables public
		static string eduin; 
		string name,rollno,branch,college;
		int bc;
		float per;
		 Data(string n,string r,string b,string c,int cb,float p);
		
		void display();
};
string Data::eduin="aditya";
void Data::display()
{
			cout<<name<<" "<<rollno<<" "<<branch<<" "<<college<<" "<<bc<<" "<<per<<" "<<eduin<<endl;

}
Data::Data(string n,string r,string b,string c,int cb,float p)
{
			this->name=n;
			this->rollno=r;//this-> denotes s1 i.e. object name
			branch=b;
			college=c;
			bc=cb;
			per=p;
		}
int main()
{
	Data s1("Ramya","1","CSE","AEC",0,86.9);
	//object
	s1.display();
}
