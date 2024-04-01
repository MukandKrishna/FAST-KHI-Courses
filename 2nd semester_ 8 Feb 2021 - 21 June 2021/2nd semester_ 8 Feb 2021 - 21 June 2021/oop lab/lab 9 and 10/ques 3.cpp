#include<iostream>
#include<string>
using namespace std;

class Account
{
	public:	
		static float Balance ;
		virtual void deposit(){cout << "Deposit money" ;}
		virtual void withdraw(){cout << "Withdraw money";}
		float CheckBalance(){return Balance;}
};
float Account::Balance = 500;

class InterestAccount:public virtual Account
{
	private:
		float interest ;

	public:

		void deposit()
		{
			cin >> Balance;
			interest = Balance * 0.30;
			Balance = Balance + Balance*interest;
		}
		void displayAmm()
		{
			cout << "\nBALANCE in the account is: "<< Balance << "$  With interest of " << interest << endl;
		}
};

class ChargingAccount:public virtual Account
{
	private:
		static float fee ;
		float balance ;
	public:
		void withdraw()
		{
			cin >> balance ;
			Balance = Balance - balance - fee;
		}
		void displayAmm()
		{
			cout << "\nBALANCE in the account is: "<< Balance << "$  With charges of " << fee << "$ "<<endl;
		}
};
float ChargingAccount :: fee = 3;

class ACI: public ChargingAccount, public InterestAccount
{
	public:
		void transfer(double amount, Account &acc) 
		{
			acc.Balance = acc.Balance + amount;
			cout << "\nAmount in the Acount is: " << acc.CheckBalance();
		}
		void transfer(double amount, InterestAccount &iacc) 
		{
			iacc.Balance = iacc.Balance + amount;
			cout << "\nAmount in the Interest acount is: " << iacc.CheckBalance();
		}
		void transfer(double amount, ChargingAccount &cacc)
		{
				cacc.Balance = cacc.Balance + amount;
				cout << "\nAmount in the Charging acount is: " << cacc.CheckBalance();
		}
};


int main()
{
	Account *acc, ac;
	ChargingAccount ca;
	InterestAccount ia;
	ACI aci;
	double amount ;
	int get;
	
	cout << "Intial Amount in the account is: " << ac.Balance <<endl; 

	cout << "\nEnter  (1)  to deposit money in the account\n";
	cout << "\nEnter (2) to withdraw money in the account\n";
	cout << "\nEnter (3) to tranfer money in the account\n";
	cout << "\nEnter (4) to check money in the account\n";
	cout << "\nEnter (5) to Close the program\n" ;

	do{
		cout << "\n\tYour choice: ";
		cin >> get;
		switch(get)
		{
	
		case 1:
			cout << "\tEnter amount of money to be deposited in the account" << endl;		
			acc = &ia;
			acc->deposit();
			ia.displayAmm();	
		break;

		case 2:
			cout << "\n\tEnter amount of money to withdraw from account" << endl;
			acc = &ca;
			acc->withdraw();
			ca.displayAmm();		
		break;
	
		case 3:
			// For charging account 
			aci.transfer(500, ca);
			// For Interest account 
			aci.transfer(345, ia);
			// For Account
			aci.transfer(204, ac);
		break;

		case 4:		
			cout << "\nBalance in the account is:  "<<acc->CheckBalance();
		break;
		
		case 5:
			exit(0);
		
		default:
			cout << "Error. Wrong Input!" << endl;
		}
		
	}while(get);

}

