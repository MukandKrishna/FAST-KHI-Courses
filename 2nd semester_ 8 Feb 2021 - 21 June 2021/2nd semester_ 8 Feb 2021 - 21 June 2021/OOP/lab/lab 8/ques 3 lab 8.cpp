#include<iostream>
using namespace std;
class Person 
{
	protected:
		int employee_ID;
	public:		
	Person(int employee_ID)
	{
		this->employee_ID = employee_ID;
	}
	int getData()
	{
		return employee_ID;
	}
	
	void displayData()
	{
		cout << "Employee ID: " <<employee_ID<< endl;
	} 
	
};

class Admin:public Person
{
	private:
		string name;
		float m_salary;
		float bonus ;
		float total_salary;
	public:
		Admin(string Name,float M_Salary,int employee_ID): Person(employee_ID)
		{
			name = Name;
			m_salary = M_Salary;
			this->employee_ID = employee_ID;
		}
	void Bonus()
	{
		bonus = m_salary + (m_salary * 5/100);
		total_salary = m_salary +  bonus ;
	}	
	void displayData()
	{
		cout << "Name of employee: " << name ;
		cout <<"\nID of the Employee: "  << employee_ID;
		cout << "\nMonthly Salary: " << total_salary ;
		cout << "\nBonus: " << bonus << endl; 
	}
};

class Accounts:public Person
{
	private:
		string name;
		float m_salary;
		float bonus ;
		float total_salary;
	public:
	Accounts(string Name,float M_Salary,int employee_ID):Person(employee_ID)
	{
		name = Name;
		m_salary = M_Salary;
		this->employee_ID = employee_ID;
	}
	void Bonus()
	{
		bonus = m_salary + (m_salary * 5/100);
		total_salary = m_salary +  bonus ;
	}
	void displayData()
	{
		cout << "Name of employee: " << name ;
		cout <<"\nID of the Employee: "  << employee_ID;
		cout << "\nMonthly Salary: " << total_salary ;
		cout << "\nBonus: " << bonus << endl; 		
	}	
};
int main()
{
	// ADMIN
	Admin ad("Ali",50000.34, 23);
	ad.Bonus(); // calculating the BONUS 
	cout << "\tDisplaying the information of the ADMIN\n\n";
	ad.displayData();
	cout << endl;
	/// ACCOUNTS
	Accounts ac("Ahmed",43320.11, 12);
	ac.Bonus(); // calculating the BONUS
	cout << "\tDisplaying the information of the ACCOUNTS\n\n";
	ac.displayData();
	return 0;
}
