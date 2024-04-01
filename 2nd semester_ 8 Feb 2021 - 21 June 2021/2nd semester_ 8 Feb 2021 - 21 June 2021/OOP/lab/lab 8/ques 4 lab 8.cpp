#include <iostream>
using namespace std;
class Multiplication 
{
	public:
    int mul(int a,int b) 
	{
        return a*b;
    }
    int mul(int a,int b, int c) 
	{
        return a*b*c;
    }
    double mul(double a,double b) 
	{
        return a*b;
    }
	double mul(double a, double b,double c)
	{
		return a*b*c;
	}
};
 
int main() 
{
    Multiplication obj; 
    cout<<obj.mul(2, 5)<<endl;
    cout<<obj.mul(7, 3, 1)<<endl;
    cout<<obj.mul(4.4, 10.8)<<endl;
    cout<<obj.mul(3.2, 5.7, 7.2);
	
	return 0;
}
