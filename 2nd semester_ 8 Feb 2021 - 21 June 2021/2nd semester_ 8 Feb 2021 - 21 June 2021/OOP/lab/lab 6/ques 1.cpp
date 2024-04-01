#include <iostream>
using namespace std;
class Fruit 
{
	protected:
	/*static*/ int fruits;
	public:
		void printTotal() 
		{
    		cout << "Total fruits in the basket: " << fruits << endl;
		}
};
class Mango : public Fruit
{	
	private:
	int mangoes;
	public:
	void getMango(int x) 
	{
		mangoes = x;
	    cout  << " Mangoes in the basket: " <<mangoes << endl;
	    fruits = fruits + mangoes;
	}
};

class Apple : public Fruit
{
	private:
	int apples;
	public:	
	void getApple(int x) 
	{
	    apples = x;
	    cout  << " Apples in the basket: " <<apples << endl;
	    fruits = fruits + apples;
	}
};
//int Fruit::fruits = 0;
int main() 
{
	int get;
	Apple a;
	Mango m;
	cout << "Enter the number of apples: ";
	cin >> get;
	a.getApple(get);
	a.printTotal();
	cout << "Enter the number of mangoes: ";
	cin >> get ;
	m.getMango(get);
	m.printTotal();	
	return 0;
}
