#include<iostream>
#include<string>
using namespace std;

class senzubeans // class for the Senzu Beans
{   // static variables are for giving the values to sell and buy of the BEANS and the price of the meal
	private:
		float expense;
		float sale;
		float bill;
		
		static float pricesold;  
		static float pricebought;
		static float meal;
		static float water;
		static float gas;
	public:
		senzubeans();
		float senzu_sold();
		float senzu_bought();
		float salary();
		float electricity();
		float maintenance();
		float WATER();
		float GAS();
};

float senzubeans::pricesold=15;
float senzubeans::pricebought=5;
float senzubeans::water=3;
float senzubeans::gas=4; 

float senzubeans::electricity()  // function to calculate the electricity bill
{
    int unit;
      cout<<"Enter Usage of electricity_units for today: ";
      cin>>unit;
	if(unit<=100)
		{
			bill=unit*5;
		}
	else if(unit<=200)
		{
		    bill=(100*5)+(unit-100)*7;
		}
	else if(unit<=300)
		{
		    bill=(100*5)+(100*7)+(unit-200)*10;
		}
	else if(unit>300)
		{
		    bill=(100*5)+(100*7)+(100*10)+(unit-300)*15;
		}
	else
		{
		    bill = unit * 2;
		}
		    return bill;
	}

float senzubeans::salary()  // function for the salary given to the employee
{
	int emp;
	float sal;
	cout<<"Number of employees got salary: ";
	cin>>emp;
	cout<<"Salary per_employee: ";
	cin>>sal;
	return emp*sal;
}
float senzubeans::GAS()
{
	int m;
	float show;
	cout <<"How much gas was used? in (KG):  ";
	cin >> m;
	show = m *gas;
	cout << "Gas bill is: $ "<<show<<endl; 
}
float senzubeans::WATER()
{
	int i , t;
	float show;
	cout <<"How much liters water was used?"<<endl;
	cin >> i;
	cout <<"How many times(1 or 2 or 3) water was used in a day?"<<endl;
	cin >> t;
	if(t==3)
	{
		show = 3*(i * water);
	}
	else if(t==2)
	{
		show = 2*(i*water);
	}
	else
	{
		show = (i*water);
	}
	
	cout <<"Bill of water is: $ "<< show <<endl;
	
}

float senzubeans::senzu_bought() // function for buying the senzu beans
{
	float buy;
	int amt;
	cout<<"Amount of Senzu beans bought:KG ";
	cin>>amt;
	buy = pricebought*amt;
	return buy;
}


float senzubeans::senzu_sold()   // function for selling the senzu beans
{
	float sold;
	int amt;
	cout<<"Amount of Senzu beans sold:KG ";
	cin>>amt;
	sold = amt*pricesold;
	return sold;
}

float senzubeans::maintenance()  // function for maintenance of the office
{
	float chg;
	cout<<"Charges for maintenance :$ ";
	cin>>chg;
	return chg;
}

senzubeans::senzubeans()  // constructor which includes the information and the calling of the functions or methods of the class
{
	char i;
	cout<<"\t\tInformation for daily expenditure \n";
	sale=senzu_sold();
	cout<<endl;
	expense=senzu_bought();

	cout<<"\nFor Employees got salary enter(1) otherwise Enter any key for no: ";
	cin>>i;
	if(i=='1')
	{
		expense = expense + salary();
	}

	cout<<"\nFor maintainance charges enter(1) otherwise Enter any key for no: ";
	cin>>i;
	if(i=='1')
	{
		expense = expense + maintenance();
	}
	
	cout <<"\nFor gas charges enter (1) otherwise enter any key for no: " ;
	cin >> i;
	if(i=='1')
	{
		expense = expense + GAS();
	}

	cout <<"\nFor water charges enter (1) otherwise enter any key for no: " ;
	cin >> i;
	if(i=='1')
	{
		expense = expense + WATER();
	}
	
	cout<<"\nFor Electricity bills"<<endl;
	expense = expense + electricity();
	
	sale = sale - expense;
	if(sale>0)
	{
		cout<<"\nThe profit: $ "<<sale;
	}
	else
	cout<<"\nThe loss:$ "<<sale;
}

		// main function

int main()   
{
	senzubeans OFFICE;
}
