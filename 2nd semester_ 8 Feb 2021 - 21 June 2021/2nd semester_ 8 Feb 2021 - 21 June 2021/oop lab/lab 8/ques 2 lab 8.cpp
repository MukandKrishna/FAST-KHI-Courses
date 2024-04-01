#include<iostream>
using namespace std;
class cube
{
	private:
		float volume ;
	public:
		void calculations(int side)
		{
			volume = side*side*side;
			cout << "volume of cube is: " << volume <<  endl;
		}
		
};
class cylinder
{
	private:
		float volume ;
	public:
		void calculations(int radius, int height)
		{
			volume = 3.14 * radius * radius * height;
			cout << "volume of cylinder is: " << volume <<  endl;
		}		
};
class rectangle
{
	private:
		float volume ;
	public:
		void calculations(int length, int breadth, int height)
		{
			volume = length * breadth * height;
			cout << "volume of rectangle is: " << volume <<  endl;
		}
};

int main()
{
	cube c;
	cylinder cy;
	rectangle r;
	c.calculations(3);
	cy.calculations(2,4);
	r.calculations(3,4,5);
	return 0 ;
}
