#include<iostream>
using namespace std;

class Person
{
	private:
		int age;
	protected:
		string name;
	public:
		void setname(string name)
		{
			this->name = name;
		}
		void setage(int age)
		{
			this->age = age;
		}
		string getname()
		{
			return name;
		}
		int getage()
		{
			return age;
		}
};

class Employee
{
	private:
		int empID;
	protected:
		double salary;
	public:

		void setid(int empID)
		{
			empID = empID;
		}
		void setsalary(double salary)
		{
			this->salary = salary;
		}
		int getid()
		{
			return empID;
		}
		double getsalary()
		{
			return salary;
		}
};
class Manager:public Person, public Employee
{
	private:
		string type;
	public:

		void setType(string type)
		{
			this->type = type;
		}
		string getType()
		{
			return type;
		}
};
class ItManager:public Manager
{
	private:
		int NoOfPerson;
	public:
		ItManager(int age, string name, double salary,string type, int NoOfPerson)/*:Manager(type):Employee(empID, salary), Person(age,name)*/
		{
			this->NoOfPerson = NoOfPerson;
			setage(age);
			this->name=name;
			this->salary = salary;
			setType(type);
		}
		void setperson(int nNoOfPerson)
		{
			this->NoOfPerson = NoOfPerson;
		}
		int getperson()
		{
			return NoOfPerson;
		}
		void Display()
		{
			cout<<"\n Name of person   : " << getname()<<endl;
			cout<<"\n Age of person    : " << getage()<<endl;
			cout<<"\n Salary of person : "<<getsalary()<<endl;
			cout<<"\n Type of person   : " << getType()<<endl;
			cout<<"\n Number of persons: " << getperson()<<endl;
		}	
};

int main()
{
	ItManager obj(34,"ali", 54040, "Top_Level_Manager", 1);
	obj.Display();
	return 0;
}
