/*The compiler supplies an implicit pointer along with the names of the functions as ‘this’.
The ‘this’ pointer is passed as a hidden argument to all nonstatic member function calls and is available as a local variable within the body of all nonstatic functions.
 ‘this’ pointer is not available in static member functions as static member functions can be called without any object (with class name).
For a class X, the type of this pointer is ‘X* ‘.
 Also, if a member function of X is declared as const, then the type of this pointer is ‘const X *’



#include<iostream>
using namespace std;
  
// local variable is same as a member's name 
class Test
{
private:
   int x;
public:
   void setX (int x)
   {
       // The 'this' pointer is used to retrieve the object's x
       // hidden by the local variable 'x'
       this->x = x;
   }
   void print() 
	{
		cout << "x = " << x << endl; 
	}   
};
  
int main()
{
   Test obj;
   int x = 20;
   obj.setX(x);
   obj.print();
   return 0;
}
*/

#include<iostream>
using namespace std;
class Test
{	private:
	int x, y;
public:
Test(int x = 0, int y = 0)
	{
		this->x = x;
		this->y = y;
	}
Test& setX(int a)
	{
		x = a;
		return *this;
	}
Test& setY(int b)
	{
		y = b;
		return *this;
	}
void display()
	{
		cout<<"from "<<this<<"  object have x = "<<x<<" y = "<<y<<endl<<endl;;
	}
};
int main()
{
	Test ob1;
	Test ob2;
	ob1.setX(10).setY(20);
	ob1.display(); //10 20 
	ob2.display(); // 0 0
	ob2 = ob1.setX(30);
	ob1.display(); //20 30
	ob2.display(); //20 30
	return 0;
}
