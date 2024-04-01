#include<iostream>
using namespace std;
class bank
{
	public:
		string city;
		int bcode;
		float loans;
		float intst;
	public:
		bank(string city, int bcode, float intst)
		{
			this->city = city;
			this->bcode = bcode;
			this->intst = intst;
		}
		
		void IssueLoan(float loans, string name, string address, string city, long int income)/*:customer(name, address,city, NIC, income)*/ 
		{
			cin >> loans;
			
			if(loans > income)
			{
				cout << "Customer doesnot resides in the same location!!\n" << endl;
			
			}
			else
			{
				cout << "Customer resides in the same location!!\n" << endl;
			}
			
				this-> loans; 				
		}
		
		void show()
		{		
			cout << "city: " << city;
			cout << "\nbcode" << bcode;
			cout << "\nintst: " << intst<<endl;	
		}
};

class customer:public bank
{
	public: 
		string name, address,city;
		const long int NIC = 0;
		long int income ;
	
	customer(string name, string address,string city, const long int NIC, long int income)
	{
		this->address = address;
		this->city = city;
		this->income = income;
		this->name = name;
		this->NIC = NIC;
	}
	
};

int main()
{
	bank b("karachi", 223, 343.55);
	b.IssueLoan(456, "ali", "karachi", "karachi", 457)
	b.show();
	return 0;
}
