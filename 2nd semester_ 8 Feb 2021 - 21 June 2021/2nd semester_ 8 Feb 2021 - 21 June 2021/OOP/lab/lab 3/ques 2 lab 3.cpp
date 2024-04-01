#include<iostream>
#include<string.h>
using namespace std ;

class date 
{
	public:
	int month;
	int day;
	int year;
	
	void displaydate()
	{
		cout<<"\nThe day: "<<day<<"\tmonth: "<<month<<"\tyear: "<<year<<endl;		
	}
	void DateTest()
	{
cout<<"\nThe capabities of CLASS DATE is that it can make the variables and functions of Class public and private..\n\n"<< endl;	
	}
};

int main()
{
	date dmy;
	dmy.month= 3;
	dmy.day= 2;
	dmy.year = 2002;
	dmy.displaydate();
	dmy.DateTest();
	return 0;	
}
