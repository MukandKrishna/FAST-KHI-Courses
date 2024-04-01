#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std ;
int account_no;
float minutes ;
char service_code;
float amount_due;
float Premium_serviceD;
float Premium_serviceN;
float daymin ;
float nightmin ;
float totalmin ;
float totaldue ;
float regular();
float premium();

int main()
{

	cout << "Enter the Account number!" << endl;
	cin >> account_no ;

cout <<"Enter the service code, r or R (regular service)"
	<<"p or P (premium service)" << endl;
	cin >> service_code ;
	
	if(service_code=='r' || service_code=='R')
	{
		regular();
	}
	else if(service_code=='p' || service_code=='P')
	{
		premium();
	}
	else
	{
		cout << "Invalid Entry!. Try again!" << endl;
	}
	
	getch();
	
	return 0 ;	
}


float regular()
{
	cout <<"Enter the minutes the service was used!!" << endl;
	cin >> 	minutes ;

	cout << "Account number:__ " << account_no << endl ;
	cout <<"Service type:__ " << service_code << endl ;
	
	if(minutes <=50)
	{
		amount_due = 10 ;
cout<<"Account Number: " << account_no <<"  with regular service: " <<service_code
	<<"\nAmount due:$ " << amount_due << "  with total minutes: "<<minutes<< endl; 
	
	}
	
	else if(minutes>50)
	{
		amount_due = ((minutes - 50)*0.20) ;

cout<<"Account Number: " << account_no  <<"with regular service: " <<service_code
	<<"\nAmount due:$ " << amount_due << "with total minutes: "<<minutes<< endl; 

	}


}

float premium()
{
	cout <<"Enter the minutes the service was used in the day time!!" << endl;
	cin >> 	daymin ;
	cout<<"Enter the minutes the service was used in the night time!!" << endl;
	cin >> nightmin ;

	cout << "Account number:__ " << account_no << endl ;
	cout <<"Service type:__ " << service_code << endl ;

	if(daymin<=75)
	{
		Premium_serviceD = 25 ;
		cout <<"For calls made from 6:00 a.m. to 6:00 p.m!!" << endl;
		cout <<"The Service was used for minutes:_ "<< daymin << endl;
		cout << "Amount due:$  "<<Premium_serviceD ;
	}
	
	else if(daymin>75)
	{
		Premium_serviceD = ((daymin-75)*0.10) + 25 ;
		cout <<"For calls made from 6:00 a.m. to 6:00 p.m!!" << endl;
	cout <<"The Service was used for minutes:_ "<< daymin <<endl ;
	cout << "Amount due:$  "<<Premium_serviceD ;

	}
	if(nightmin<=100)
	{
		Premium_serviceN = 25 ;
		cout <<"For calls made from 6:00 p.m. to 6:00 a.m!!" << endl;
		cout <<"The Service was used for minutes:_ "<< nightmin << endl;
		cout << "Amount due:$  "<<Premium_serviceN ;
		cout << endl;
	}
	
	else if(nightmin>100)
	{
		Premium_serviceN = ((daymin-75)*0.05) + 25 ;
		cout <<"For calls made from 6:00 p.m. to 6:00 a.m!!" << endl;
		cout <<"The Service was used for minutes:_ "<< nightmin << endl;
		cout << "Amount due:$  "<<Premium_serviceN ;
	}
	
	totalmin = daymin + nightmin ;
	
	totaldue = Premium_serviceN + Premium_serviceD ;
	
	cout << "\nTotal minutes the service was used: " << totalmin << endl;
	
	cout <<"\nTotal due:$  "<< totaldue << endl ;
}

