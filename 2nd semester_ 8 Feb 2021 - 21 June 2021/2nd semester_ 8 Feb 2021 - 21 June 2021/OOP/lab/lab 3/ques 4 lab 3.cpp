#include<iostream>
#include<string.h>
using namespace std ;

class Employee
{
	public:
	string first_name;
	string last_name;
	double monthly_salary;
	
	
	void EmployeeTest()
	{
		cout <<"\tEmployees are working in the Pepsi Cola Factory\n"<<endl;
	}

};

int main()
{
	Employee e,e1,e2;
	int i;
	double yearly_salary1, yearly_salary2 ;
	e.EmployeeTest();
	
	cout<<"Enter the First name of employees" << endl;
	cin >> e1.first_name >> e2.first_name;

	cout<<"Enter the Last name of employees" << endl;
	cin >> e1.last_name >> e2.last_name;
	
	cout<<"\nEnter the salary of two Employee:$ ";
	cin>>e1.monthly_salary>>e2.monthly_salary;
	
	if(e1.monthly_salary<0 && e2.monthly_salary<0)
	{
		e1.monthly_salary=0.0;
		e2.monthly_salary=0.0;
	}
		yearly_salary1 = e1.monthly_salary * 12 ;
		yearly_salary2 = e2.monthly_salary * 12 ;
		
		i = 1 ; 
		
		cout << "\nFull name of Employee "<< i << ": "<< e1.first_name << " " <<e1.last_name<<endl;
			
		cout<< "Yearly salary of Employee " << i << ":$ " << yearly_salary1 << endl;
		
		i=2;
		cout << "\n\nFull name of Employee "<< i << ": "<< e2.first_name << " " <<e2.last_name<<endl;
		
		cout<< "Yearly salary of Employee " << i << ":$ " << yearly_salary2 << endl;
		
		return 0;
}
