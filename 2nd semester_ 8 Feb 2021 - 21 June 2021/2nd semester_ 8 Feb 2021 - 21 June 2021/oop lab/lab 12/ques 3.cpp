#include <iostream>
using namespace std;
template<class Tem> 
class ADD
{
	public:
	Tem sum(Tem a[], int n)
	{
	    Tem add = a[0];
		for(int i = 1; i < n; i ++)
	    	add = add +a[i];
	    return add;
	}
};

int main() 
{
	ADD <int> add1;
	ADD <double> add2;
	int i, n;
    int int_arr[] = {7,54,3,9,8,6};
	n = sizeof(int_arr) / sizeof(int_arr[0]);
	cout << "Sum of integers is: " << add1.sum(int_arr, n) << endl;
    
	double double_arr[] = {4.3, 2.5, -0.9, 100.2, 3.0};
    n = sizeof(double_arr) / sizeof(double_arr[0]);
    cout << "\nSum of doubles is: " << add2.sum(double_arr, n) << endl;
    return 0;
}
