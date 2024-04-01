#include<iostream>
#include <string>
using namespace std;
class Employee
{
	private:
		char* name;
		char emp_name;
		int id;
		static int num;
		static int n;

	public:
	void getter()  // function to get the details of the Employees
 	{
 		name = &emp_name;
	 	cout << "Enter details of Employee number: "<< num<<endl;
 		cout << "\nEnter Employee Id and name : ";
 		cin>>id>>name;
 		num++;
	}
  
	void mutator() // function to change the name of Employees 
	{
		cout <<"\nEnter Employee's Name : ";
		cin >> *name;
 	}
  
	void accessor() // function to Display the details of the Employees
	{
		cout << "Employee no "<<n<<" name is: "<< *name<<" with ID: "<< id<<endl;
		n++;
	}

};
int Employee::num = 1;
int Employee::n = 1;
int main()
{
	int e,i;
	int get;
 	Employee emp[3];
	for(i=0;i<3;i++)
 	{
		emp[i].getter();
 	}
	cout << endl;
	for(i=0;i<3;i++)
	{	
		emp[i].accessor();
	}
	cout << endl;
	cout<<"Enter (1) to change employee's name otherwise any other key: ";
	cin>> get;
	if(get==1)
 	{
 		cout<<"Enter the number of employee/s: ";
 		cin>>e;
	}
	for(i=0;i<e;i++)
	{
		emp[i].mutator();
	}
	for(i=0;i<3;i++)
 	{	
 		emp[i].accessor();
 	}	
	return 0;
}
