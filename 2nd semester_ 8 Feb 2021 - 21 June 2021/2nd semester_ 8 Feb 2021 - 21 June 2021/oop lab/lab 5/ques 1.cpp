#include<iostream>
#include<Windows.h>
#include<unistd.h>
using namespace std;
class Hotel_Merceto
{
	private:
		string customer_name;
		int number_of_days;
		const float charges = 1000.85;
		float discount ;
		float hotel_price ;
			
	public:
		Hotel_Merceto(string customer_name)
		{
			cin >> customer_name ;
			this->customer_name = customer_name;
		}
		
		void RentCalculator(int days)
		{
			float dis ;
			float price ;
			if(days > 7)
			{
				price = (days * charges) - charges;
				dis = charges ;
			}
			else
			{
				price = days * charges;
				dis = 0 ;
			}
				number_of_days = days;
				hotel_price = price ;
				discount = dis;
		}
		void DisplayRent()
		{
			cout << "CustomerName: " << customer_name <<endl;
			cout << "Days: " << number_of_days<<endl;
			cout <<"Rent:  " << hotel_price <<"  with Discount:  "<< discount ;
		}
};
int main()
{
	string name ;
	int days;
	cout << "Enter Customer's name"<<endl;
	Hotel_Merceto customer1(name);  // constructor is called for 1st intialized instance(object)
	Hotel_Merceto customer2(name);  // constructor is called for 2nd intialized instance(object)
	cout << "Enter days" << endl;    cin >> days;	
	customer1.RentCalculator(days);  cin >> days;	
	customer2.RentCalculator(days);
	system("cls");
	customer1.DisplayRent();cout << endl;
	customer2.DisplayRent();	
	return 0;
}
