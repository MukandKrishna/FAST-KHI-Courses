#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
class small
{
	private: 
		int minimum ; 
	public:
	int min(int a, int b)
	{
		if(a>b)
		{
			minimum = b ;
		}
		else 
		{
			minimum = a ;
		}
			return  minimum;
	}
	int min(int a, int b, int c)
	{
		if(a<b&&a<c)
		{
			minimum = a ;
		}
		else if(b<a&&b<c)
		{
			minimum = b ;
		}
		else
		{
			minimum = c;
		}
			return minimum;
	}
};

int main()
{
	small s;
	cout << "\nMinimum value\n" << endl;
	cout << s.min(3,4) << endl;
	cout << "\nMinimum value\n" << endl;
	cout << s.min(3,4,5)<<endl;
	return 0;
}
