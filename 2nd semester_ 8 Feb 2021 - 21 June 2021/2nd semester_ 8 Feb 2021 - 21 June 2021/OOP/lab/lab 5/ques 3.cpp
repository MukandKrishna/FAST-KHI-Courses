#include<iostream>
using namespace std;
class Bank
{
	private:
		string name;
		int AccountNum;
		string AccountType;
		float balance;
		static float interest;	
	public:
		Bank() // default constructor
		{
			name = "ali";
			AccountNum = 2;
			AccountType = "current";
			balance = 334.450;
			interest = 21.34;
		}
		Bank(string n, int accnum, string acctype, float bal,float intst)
		// parameterized constructor to get the details of the ACCOUNT HOLDER
		{
			name = n;
			AccountNum = accnum;
			AccountType = acctype;
			balance = bal;
			interest = intst;
		}
		void depositAmount(float amt) // function to DEPOSIT the AMOUNT into account
		{
			balance = balance + amt;
		}
		void withdrawAmount(float amt) // function to WITHDRAW the AMOUNT into account
		{
			balance = balance - amt;
		}

		void displaydata() // funtion to display the DEATAILS of the Account HOLDER
		{
			cout << "Account holder's name:	" << name << endl;
			cout << "Id:\t\t\t" << AccountNum << endl;
			cout << "Type:\t\t\t" << AccountType << endl;
			cout << "Balance:\t\t" << balance << endl;
			cout << "Interest Rate is\t"<< interest << endl;
		}
		
};
float Bank::interest = 1.31;
int main()
{
	int i ;
	// default constructor of the object is called but after that PARAMETERIZED is also called 
	// if the number of parameters are same
	Bank account("Mukand Krishna",1,"Entrepreneur",3123.33,23.11);
	
	account.displaydata(); // display the details of the ACCOUNT HOLDER
	cout << endl;
	
	cout << "To Deposit amount into the account enter (1) otherwise any key to proceed: ";
	cin >> i ;
	
	if(i==1)
	{
		account.depositAmount(50000.45);  // function to deposit the amount
	}
	
	cout << "To Withdraw amount from the account enter (2) otherwise any key to proceed: ";
	cin >> i ;
	
	if(i==2)
	{
		account.withdrawAmount(3500.53);  // function to withdraw the amount
	}
	cout << endl;
	
	account.displaydata(); // display the DETAILS of the ACCOUNT HOLDER
	// after the DEPOSITING and WITHDRAWING the AMOUNT into AccounT
	return 0;
}
