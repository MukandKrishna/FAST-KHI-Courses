#include<iostream>
using namespace std;
class rectangle
{
	public:
	int real_integer(int length,int width)
	{
		return length * width ;
	}
	
	double real_integer(int length, double width)
	{
		return length * width;
	}
};
int main()
{
	rectangle a;
	cout << "\nReal value\n";
	cout << a.real_integer(3,2) << endl;
	cout << "\nInteger value\n";
	cout << a.real_integer(3,2.25) << endl;
	return 0;
}
