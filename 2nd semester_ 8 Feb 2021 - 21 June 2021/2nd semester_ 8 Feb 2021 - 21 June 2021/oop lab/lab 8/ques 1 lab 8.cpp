#include<iostream>
using namespace std;
class animal
{
	public :
		void animal_sound()
		{
			cout << " The animal makes a sound."<< endl; 
		}
};
class cat : public animal
{
	public :
		void animal_sound()
		{
			cout << " The cat says meow."<< endl; 
		}
};
class dog : public animal
{
	public:
		void animal_sound()
		{
			cout << " The dog says bow wow."<< endl; 
		}
};

class duck : public animal
{
	public:
		void animal_sound()
		{
			cout << " The duck says quack quack."<< endl; 
		}
};

int main()
{
	animal a ;
	cat c ;
	dog d;
	duck du;
	a.animal_sound();
	c.animal_sound();
	d.animal_sound();
	du.animal_sound();
	return 0;	
}
