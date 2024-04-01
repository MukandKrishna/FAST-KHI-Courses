#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class personType
{
	private:
		string firstName; 
		string lastName;
		string MiddleName;
	public:
		void setFirstName();
		void setLastName();
		void setMiddleName();
		void checkFirst();
		void checkMiddle();
		void checklast();
		void print();
		void persontype();
		void another();
};
void personType::print()
{
cout <<"The Name entered: "<< firstName;
cout<< " " << MiddleName << " " << lastName<<endl;
}

void personType::setFirstName() 
{
	string get;
	cout<<"First name: ";
	cin>>get;
	firstName=get;
}
void personType::setMiddleName()
{
	string get;
	cout<<"Middle name: ";
	cin>>get;
	MiddleName=get;
}

void personType::setLastName()
{
	string get;
	cout<<"Last name: ";
	cin>>get;
	lastName=get;
}

void personType::checkFirst()
{
	string get;
	cout<<"First name: ";
	cin>>get;
	if(firstName==get)
		cout<<"YES, first name is the same\n"<<endl;
	else
		cout<<"NO, first name is not same\n"<<endl;
}

void personType::checkMiddle()
{
	string get;
	cout<<"Middle name: ";
	cin>>get;
	if(MiddleName==get)
		cout<<"Yes, middle name is same\n"<<endl;
	else
		cout<<"No, middle name is not same\n"<<endl;
}


void personType::checklast()
{
	string get;
	cout<<"Last name: ";
	cin>>get;
	if(lastName==get)
		cout<<"Yes, last name is same\n"<<endl;
	else
		cout<<"NO, last name is not same\n"<<endl;
}

void personType::persontype()
{
	cout<<"\tName of person!"<<endl;
	int x;
	cout<<"Enter 1 to set first name\n";
	cout<<"Enter 2 to set middle name\n";
	cout<<"Enter 3 to set last name\n";
	cout<<"Enter 4 to check first name\n";
	cout<<"Enter 5 to check middle name\n ";
	cout<<"Enter 6 to check last name\n";
	cout<<"Enter 7 to print name\n";
	
	cin>>x;
	switch(x)
	{
		case 1:
			system("cls");
			setFirstName();
			another();
			break;
		case 2:
			system("cls");
			setMiddleName();
			another();
			break;	
		case 3:
			system("cls");
			setLastName();
			another();
			break;
		case 4:
			system("cls");
			checkFirst();
			another();
			break;
		case 5:
			system("cls");
			checkMiddle();
			another();
			break;
		case 6:
			system("cls");
			checklast();
			another();
			break;
		case 7:
			system("cls");
			print();
			another();
			break;					
		default: 
		cout<<"wrong input";
	}

		getch();		
}

void personType::another()
{
	int i;
	cout <<"Do you want to perform other function!!(enter '1' otherwise"
	" Enter any key for no )"<<endl;
	cin >> i;
	switch(i)
	{
		case 1:
			persontype();
			break;
		case 2:
			cout <<"Thanks for coming!"<<endl;
			exit(1);
			break;
	}			
}

int main()
{
	personType p1;
	p1.persontype();
	return 0;
}

