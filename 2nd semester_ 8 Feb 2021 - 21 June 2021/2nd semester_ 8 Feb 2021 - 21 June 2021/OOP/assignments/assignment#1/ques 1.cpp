#include<iostream>
#include<string>
#include<conio.h>
const long long int Num_length = 11;
const int Num_length1 = 0;
const int Num_pin = 4;
using namespace std;
//the functions are defined outside class with scope resolution operator
class bankaccount
{
	private:
		string name;
		int age;
		string address;
		long long int nic;
		long long int contact;
		float Openingbalance;
		float Currentbalance;
		int pin;
		float tax;
		
	public:
		bankaccount();
		void modify();		
		void print();
		void show_balance();
		void taxcalculate();		
};


bankaccount :: bankaccount()
{
		cout<<"\t\tPAKISTAN BANK \n";
		cout<<"\t\tEnter the details\n";
		cout<<"Enter name : ";
		getline(cin,name);
		cout<<"Enter age(Tax is 0.15% of the current balance for customers aged 60 or above and 0.25% for all other customers) : ";
		cin>>age;
			if(age<0)
			{			
				cout<<"Invalid! Enter age again: ";
				cin>>age;
			}
		
		cout<<"Enter address : ";
		fflush(stdin);
		getline(cin,address);
		cout<<"Enter CNIC : ";
		cin>>nic;

		cout<<"Enter contact number: ";
		fflush(stdin);
		cin>>contact;
				if(contact >= Num_length || contact < Num_length1)
				{
					cout<<"Invalid! Enter contact no again: ";
					fflush(stdin);
					cin>>contact;
				}
		cout<<"Enter pin (4-digit): ";
		cin>>pin;
				if(pin<0||pin>9999)
				{
					cout<<"Invalid! Enter pin(4 digit) again: ";
					cin>>pin;
				}

		cout<<"Enter amount of opening balance: ";
		fflush(stdin);
		cin >>Openingbalance;
	
		Currentbalance=Openingbalance;
			if(Openingbalance<0)
			{
				cout<<"Invalid! Enter Balance again: ";
				fflush(stdin);
				cin>>Openingbalance;
				Currentbalance=Openingbalance;	
			}
			taxcalculate();
		cout<<"\t\t\t The account is created";
		
		getch();
		system("cls");
		char ma;
	cout<<endl<<"\nEnter 1 to modify account.\nEnter 2 to print information.\nEnter 3 to print balance.\nEnter 4 to exit: ";
			cin>>ma;
			if(ma=='1'||ma=='2'||ma=='3'||ma=='4')
			{
				if(ma=='1')
				{
					system("cls");
					modify();
				}
				else if(ma=='2')
				{	
					system("cls");
					print();
				}
				else if(ma=='3')
				{
					system("cls");
					show_balance();
				}
				else
					exit(1);
			}
			else
			{
				cout<<endl<<"Wrong Input! Kindly enter the given choices: ";
				cin>>ma;
			}
}

void bankaccount::taxcalculate()
{
	int t;
	if(age>=60)
	{
		t = Currentbalance*0.0015;
		tax = tax + t;
		Currentbalance=Currentbalance-t;
	}
	else
	{
		t = Currentbalance*0.0025;
		tax = tax + t;
		Currentbalance=Currentbalance-t;
	}
	cout << "\n\tTax is calculated!!\n"<<endl;
}

void bankaccount :: modify()
{	
	ag:
	int operation;
    cout << "\nWhich Operation u want to perform? \n";
    cout << "1 - Modify name.\n";    
    cout << "2 - Modify Age.\n"; 
    cout << "3 - Modify Address.\n";
    cout << "4 - Modify Contact number.\n";
    cout << "5 - Modify Current balance.\n";
    cout << "6 - Print Information.\n";
    cout << "7 - Exit from modifying operation\n";
    cout << "\tEnter the choice :   ";
    cin >> operation;
    switch(operation)
	{
    	case 1:
		{
    			string n;
    			fflush(stdin);
    			cout<<"Enter New name : ";
    			fflush(stdin);
				getline(cin,n);
					
				if(n==name)
				{
					cout<<"Same name";
				}
				else
				{
					name = n;
					cout<<"Completed";
					system("cls");
					cout <<"After modification!\n"<<endl;
					print();
				}
				break;
		}
			case 2:
			{
				int a;
    			fflush(stdin);
				cout<<"Enter New age  : ";fflush(stdin);
				cin>>a;
					
				if(a==age)
				{
						cout<<"Same age";
				}
				else
				{
					if(a<0)
					{
						cout<<"Invalid! Enter age again: ";
						cin>>a;
					}
					age = a;
					taxcalculate();
					cout<<"Completed";
					system("cls");
					cout <<"After modification!\n"<<endl;
					print();
				}
				break;
			}
			case 3:
			{
				string ad;fflush(stdin);
				cout<<"Enter New address : ";
				getline(cin,ad);fflush(stdin);
				if(ad==address)
				{
					cout<<"Same address:";
				}
				else
				{
					address = ad;
					cout<<"Completed";
					system("cls");
					cout <<"After modification!\n"<<endl;
					print();
				}
				break;
			}
							
			case 4:
			{
				int cn;fflush(stdin);
				cout<<"Enter new contact no: ";
				cin>>cn;fflush(stdin);
				if(cn==contact)
				{
					cout<<"Same contact no: ";
				}
				else
				{
					if(contact >= Num_length || contact < 0)
					{
						cout<<"Invalid! Enter again: ";
						cin>>cn;
					}
					contact = cn;
					cout<<"Completed!!";
					system("cls");
					cout <<"After modification!\n"<<endl;
					print();
				}
				break;	
			}
			
			case 5:
			{
				float cb;fflush(stdin);
				cout<<"Enter New Balance : ";
				cin>>cb;fflush(stdin);
				if(cb==Currentbalance)
				{
					cout<<"Same Balance: ";
				}
				else
				{
					if(cb<0)
				{
					cout<<"Invalid! Enter again: ";
					cin>>cb;
				}
					Currentbalance = cb;
					cout<<"Completed";
					show_balance();
					system("cls");
					cout <<"After modification!\n"<<endl;
					print();	
				}
				break;	
			}

			case 6:
			{
				system("cls");
				print();
				break;
			}
			case 7:
			{
				cout<<"Exited";
				system("cls");
				break;
			}
			default:
			{
				cout <<"Invalid choice!" << endl;
				goto ag;
				break;
			}
		}
		
}


void bankaccount::show_balance()
{
	cout<<"\nYour Current Balance is : $"<<Currentbalance<<endl;
}

void bankaccount::print()
{
	
	cout<<"\nAccount Holder : "<<name<<endl;
	cout<<"Age : "<<age<<endl;
	cout<<"CNIC No : "<<nic<<endl;
	cout<<"Address: "<<address<<endl;
	cout<<"Balance: $"<<Currentbalance<<endl;
	cout<<"Contact No : "<<contact<<endl;
	cout<<"Tax deducted: $"<<tax;
	cout<<endl;
}

int main()
{
	bankaccount holder;
}
