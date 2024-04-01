#include<iostream>
#include<vector>
using namespace std;
template < class X, class Y >
class Add
{
	public:
		X sum1(X i, Y j)
		{
			return i + j;
		}
};

int main()
{
	Add <float, int> add1;
	Add <string, string> add2;
	cout << "Sum: " << add1.sum1(0.23, 10);
	cout << endl;
	char* char1 = new char[10];
	char* char2 = new char[10];
	
//	char1 = "Now";
//	char2 = " Then";
//	cout << "Sum: " << add2.sum1(char1, char2);
//	
			// or 
	
	cout << "\n\t**Enter two strings**\n";
	cin >> char1;
	cin >> char2;
	string s1, s2;
	s1 = char1;
	s2 = char2;
	cout << "Sum: " << add2.sum1(s1, s2);
	return 0;
}


