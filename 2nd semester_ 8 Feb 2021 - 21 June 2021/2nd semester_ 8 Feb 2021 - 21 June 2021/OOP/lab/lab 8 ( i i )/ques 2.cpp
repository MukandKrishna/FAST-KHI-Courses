#include <iostream>
using namespace std;
class Shape 
{
   double length;
   double width;
   
   public:
   int area(void)
	{
      return length * width ;
	}
   
   void setLength(int len )
	{
      length = len;
	}
 
   void setwidth(int wid ) 
	{
      width = wid;
	}
   
   // Overload + operator to add two Box objects.
   Shape operator+(const Shape& s) 
   {
    	Shape shape;
    	shape.length = this->length + s.length;
    	shape.width = this->width + s.width;
    	return shape;
   }
};
int main()
{
	Shape shape1, shape2, sum;
	shape1.setLength(30);
	shape1.setwidth(18);
	
	shape2.setLength(13);
	shape2.setwidth(42);
	
	cout << "Area of Shape1:  " << shape1.area();
	cout << "\nArea of Shape2:  " << shape2.area();
	sum = shape1 + shape2;
	cout << "\nTotal area of two shapes:  " << sum.area();
	return 0;	
}
