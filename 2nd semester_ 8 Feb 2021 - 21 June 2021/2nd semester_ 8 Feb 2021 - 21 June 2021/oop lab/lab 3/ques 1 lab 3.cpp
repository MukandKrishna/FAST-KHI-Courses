#include<iostream>
#include<string.h>
using namespace std ;

class user
{
	private :
	int age ;
	string name ;
	
	public:
	set_name(string NAME)
	{
		name = NAME ;
	}
	
	string get_name()
	{
		return name ;
	}
	
	set_age(int AGE)
	{
		age = AGE ;
	}

	int get_age()
	{
		return age ;
	}

};
int main()
{
	user detail;
	detail.set_name("Toe");
	detail.get_name();

	detail.set_age(24);
	detail.get_age();

	cout << "My name is " <<detail.get_name()
	<< " And I'm " <<detail.get_age()<<"years old"<< endl;
	
	return 0 ;
}
