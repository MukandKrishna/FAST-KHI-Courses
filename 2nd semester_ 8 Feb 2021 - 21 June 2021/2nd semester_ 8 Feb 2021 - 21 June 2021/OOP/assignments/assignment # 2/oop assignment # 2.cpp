#include<iostream>
using namespace std;

//-----------------Part 1------------------------

// Write down about accessibility of x, y and z
//  in class B, class C as well as in main
// (if we make object of C in main) 
/*
class A
{
	private:
    	int x; 
	protected: 
    	int y;  
	public:
    	int z;
};
class B:public A  
{
	public:
//	void setx(int x1)
//	{
		x = 4;   // the private variable X is not accessible in the  class B
//	}
//	void sety(int y1)
//	{
		y = y1;   // the protected variable Y is   protected  member variable in  the class B
					// so it can be accessed
//	}
//	void setz(int z1)
//	{
		z = z1;  // 	the public variable Z is public  member variable in class B, so it can be accessed
//	} 	
};
class C:public B
{
	public:
//	void setX(int x)
//	{
//		void getx(x);  // the private variable X is not accessible in the  class C 
//		cout << "The value of x: "  << x ;
//	}
//	void getY(int y)
//	{
//		sety(y);  // the variable Y is  protected   member variable in  the class C as the data members 
//		cout << "\nThe value of y: "  <<
		 y = 4;	// of the CLASS B are publically called
//	}
//	void getZ(int z)
//	{
//		setz(z); // the public variable Z is public  member variable in class B, so it can be accessed
//		cout << "\nThe value of z: "  << 
		z = 5;
//	}	
};

int main()
{
	class C c1;
//	c1.getX(2); // as x is private it cannot be accessed
	c1.x = 3;
//	c1.getY(3); // the variable Y is  protected   member variable in  the class C as the data members 
	c1.y = 4;				// of the CLASS B are publically called so it can be accesed in the main too
//	c1.getZ(4); // the public variable Z is public  member variable in class C, so it can be accessed
	c1.z = 5;
	return 0;
}

*/
//------------------------ part 2--------------------------

//Write down about accessibility of x, y and z
//in class B, class C as well as in main
//(if we make object of C in main) 

class A
{
	private:
		int x;
	protected:
		int y;
	public:
    	int z;
};
class B:protected A
{
	public:
//		void setX(int x1)
//		{
//			x = x1; //  as x is private it cannot be accessed
//		}
		void setY(int y1)
		{
			y = y1;  // the variable Y is  protected   member variable in  the class B as 
					// the data members of class A are protectedly called  
		}
		void setZ(int z1)
		{
			z = z1;  // the variable Z  is  protected  member variable in  the class B as
					// the data members of class A are protectedly called 
		}
};
class C:public B
{
	public:
//	void getx(int x)
//	{
//		setX(x); //  as x is private it cannot be accessed
//		cout << "The value of X : " << x
//	}
	void gety(int y)
	{
		setY(y); // the variable Y is  protected  member variable in  the class B as 
					// the data members of class A are protectedly called, and in C it is 
					// protected variable as it is publically called by C  so it remains protected
		cout << "\nThe value of Y : " << y;			
	}
	void getz(int z)
	{
		setZ(z); // the variable Z  is  protected  member variable in  the class B as
					// the data members of class A are protectedly called, and in C it is 
					// become protected as it became protected in class B 
		cout << "\nThe value of Z: " << z;			
	}

};
int main()
{
	class C c1;
//	c1.getx(1); // as X is private it cannot be accessed in the main
		
	c1.gety(2); // the Y became protected in the MAIN too because it became protected in the CLASS B
				// and in CLASS C it became protected so that's whay by making OBJECT of 
				// CLASS C Y became protected in the MAIN too 
	
	c1.getz(3); // the Z became protected in the MAIN too because it became protected in the CLASS B
				// and in CLASS C it became protected so that's whay by making OBJECT of 
				// CLASS C  'Z' became protected in the MAIN 
	return 0;
}


//------------------------ PART 3--------------------------

//Write down about accessibility of x, y and z
//in class B, class C as well as in main
//(if we make object of C in main)
/*
class A
{
	private:
    	int x;
  	protected:
    	int y;
  	public:
    	int z;
};
class B:private A
{
  	public:
//		void setX(int x1)
//		{
//			x = 3; //  as x is private it cannot be accessed
//		}
//
//		void setY(int y1)
//		{
//			y = 4;  // the variable Y  becomes private member variable in  the class B as 
//					// the data members of class A are privately called  
//		}
//
//		void setZ(int z1)
//		{
//			z = 5;  // the variable Z  becomes private member variable in  the class B as
					// the data members of class A are privately called 
//		}
};
class C:public B
{
	public:
//	void setx(int x)
//	{
//		setX(x); //  as x is private it cannot be accessed
//		cout << "The value of X : " << 
//		x = 3;
//	}
//	void sety(int y)
//	{
//		setY(y); // the variable Y is  private member variable in  the class B as 
//					// the data members of class A are privately called, and in C it is 
//					// private variable as it is privately called by C  so it remains privately
//		cout << "\nThe value of Y : " << 
//		y = 4;
//	}

//	void setz(int z)
//	{
//		setZ(z); // the variable Z is private member variable in  the class B as
//					// the data members of class A are Privately called, and in C it is 
//					// becomes private as it became Private in class B 
//		cout << "\nThe value of Z: " << 
//		z = 5;
//	}

};

int main()
{
	class C c1;
//	c1.getx(1); // as X is private it cannot be accessed in the main
	c1.x = 3	
//	c1.gety(2); // AS it became protected in the CLASS B and in
	c1.y = 4;	// CLASS C it became Private so that's whay by making OBJECT of 
				// CLASS C Y became Private in the MAIN too, so it cannot be accessed in the MAIN
	
//	c1.getz(3); // As it became protected in the CLASS B and in
	c1.z = 5	// CLASS C it became Private so that's whay by making OBJECT of 
				// CLASS C  'Z' became protected in the MAIN so it cannot be accessed in the MAIN

	return 0;
}

*/

/*
class A
{
	private:
		int x; protected: int y;public: int z;
};
class B : 
int main()
{
	class C a1;
	a1.z = 3;
	cout << "the value of z is : " << a1.z;	
}

*/
