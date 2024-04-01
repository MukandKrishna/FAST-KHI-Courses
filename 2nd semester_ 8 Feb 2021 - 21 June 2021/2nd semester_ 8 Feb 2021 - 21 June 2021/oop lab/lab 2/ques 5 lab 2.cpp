#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

double calculateBill(int income, int consultingMinutes, double hourlyRate);

int main()
{
    int income, consultingMinutes;
    double hourlyRate;
    
    cout << "Enter the clients income:$ " ;
    cin >> income;
    cout << "Enter the consulting time in minutes: ";
    cin >> consultingMinutes;
    cout << "Enter the hourly rate: $";
    cin >> hourlyRate;
    
    cout << "Your total bill ammount:$ " << calculateBill(income, consultingMinutes, hourlyRate) << endl;

    getch();
	return 0;    
}

double calculateBill(int income, int consultingMinutes, double hourlyRate)
{
    if (income <= 25000) 
	{
		if (consultingMinutes <= 30)
            {
            	return 0;
        	}
        else
            {
            	return hourlyRate * 0.40 * ((consultingMinutes - 30) / 60);
        	}
    }
    else 
	{
        if (consultingMinutes <= 20)
            {
            	return 0;
        	}
        else 
            {
            	return hourlyRate * 0.70 * ((consultingMinutes - 20) / 60);
        	}	
    }
}
