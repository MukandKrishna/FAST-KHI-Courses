#include<iostream>
using namespace std;

class Glass
{
	public : 
	int LiquidLevel = 200;
	
	void Drink(int x)
	{
		LiquidLevel = LiquidLevel - x ;
	}
	
	void Refill()
	{	
		if(LiquidLevel <=100)
		{
			LiquidLevel = 200;
		}
	}
};

int main()
{
	int x , i;
	Glass juice;
	
	for(;;)
	{
		cout <<"Enter the amount of liquid: ";
		cin>>x;
	
		juice.Drink(x);
		juice.Refill();
	}
	return 0;
}
