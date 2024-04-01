#include<conio.h>
#include<iostream>
#include<iomanip>
using namespace std;

const double RES_BASIC_SERV_COST = 20.50;
const double RES_BILL_PROC_FEES = 4.50;
const double RES_COST_PREM_CHANNEL = 7.50;

const double BUS_BILL_PROC_FEES = 15.00;
const double BUS_BASIC_SERV_COST = 75.00;
const double BUS_BASIC_CONN_COST = 5.00;
const double BUS_COST_PREM_CHANNEL = 50.00;
int main()
{
	int accountNumber;
	char customerType;
	int numOfPremChannels;
	int numOfBasicServConn;
	double amountDue;

	cout << "Enter account number: ";
	cin >> accountNumber ;
	cout << "Enter customer type: "<< "R or r (Residential), B or b ( Business): "; //Step 4
	cin >> customerType; 
	cout << endl;
	
	switch (customerType)
	{
	case 'r': 
	case 'R':
	cout << "Enter the number of premium channels: "; 
	cin >> numOfPremChannels ;
	amountDue = RES_BILL_PROC_FEES + RES_BASIC_SERV_COST + numOfPremChannels *RES_COST_PREM_CHANNEL;
	cout << "Account number : "<< accountNumber<< endl; 
	cout << "Amount due: $" << amountDue << endl; 
	break ;

	case 'b': 
	case 'B':
	cout << "Enter the number of basic service connections: \n";
	cin >> numOfBasicServConn; 
	
	cout << "Enter the number of premium channels: \n"; 
	cin >> numOfPremChannels; 
	
	if (numOfBasicServConn<= 10) 
	amountDue = BUS_BILL_PROC_FEES+ BUS_BASIC_SERV_COST+ numOfPremChannels *BUS_COST_PREM_CHANNEL;
	
	else
	amountDue = BUS_BILL_PROC_FEES+ BUS_BASIC_SERV_COST+ (numOfBasicServConn - 10) *BUS_BASIC_CONN_COST+ numOfPremChannels *BUS_COST_PREM_CHANNEL;
	
	cout << "Account number: "<< accountNumber << endl; 
	cout << "Amount due: $" << amountDue<< endl; 
	break ;
	
	default:
	cout << "Invalid customer type." << endl;
	}
	getch();
	return 0;
}

