#include<iostream>
#include<iomanip>
#include<conio.h>
#include<cmath>
#define pi 3.14 // #define sq  2

double radius(double ,double ,double ,double );
double distance(double ,double ,double ,double );
double circumference(double );
double area(double );
using namespace std;
int main()
{
	double x1;
	double x2;
	double y1;
	double y2;

	cout <<"Enter the x and y coordinates of point" << endl;
	cin >> x1 >> y1 ;
	
	cout << "Enter the x and y coordinates of center" << endl;
	cin >> x2 >> y2;
	
	cout <<"Radius of Circle is: \n" << radius(x1,y1,x2,y2)<<endl;
	
	cout <<"Diameter of Circle is: \n" << radius(x1,y1,x2,y2)+radius(x1,y1,x2,y2)<<endl;  
	
	cout <<"Circumference of Circle is: \n" << circumference(radius(x1,y1,x2,y2)) << endl ;
	
	cout << "Area of Circle is: \n"<< area(radius(x1,y1,x2,y2)) << endl;
	getch();
	return 0 ;
}

double radius(double x1,double y1,double x2,double y2)
{
	return distance(x1,y1,x2,y2);
}

double distance(double x1,double y1,double x2,double y2)
{
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double circumference(double r)
{
	return (2*pi*r);
}

double area(double r)
{
	return (pi*pi);
}


