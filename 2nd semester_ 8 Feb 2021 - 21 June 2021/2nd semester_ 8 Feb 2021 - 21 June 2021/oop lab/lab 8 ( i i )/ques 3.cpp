#include <iostream>
using namespace std;
class printClass;
class Perimeter
{
	private:
		int width, length;
	public:
		int set(int w, int l)
		{
			width = w ;
			length = l;
		}
	friend class printClass;	
};
class printClass
{
	private:
		int x;
	public:

		void display(Perimeter obj)
		{
			x  = obj.length + obj.width ;
			cout << "The perimeter is : " << x << endl;
		}
};
int main()
{
	Perimeter p;
	p.set(3,5);
	printClass pt;
	pt.display(p);
	return 0;
}
