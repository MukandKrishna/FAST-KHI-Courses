#include <iostream>
using namespace std;
class prefix
{
   private:
    int value;
   public:
    prefix() : value(9) {}
    void operator -- ()  // overload -- used as prefix
	{
        --value;
        value = value * 4;
    }
    
    void operator -- (int) // Overload ++ when used as postfix
	{
        value--;
        value = value / 4 ;
    }

    void display() 
	{
        cout << "Result: " << value << endl;
    }
};

int main() 
{
    prefix change;
    cout<<  "for postfix" << endl;
    change--; 
    change.display();
    cout<<  "\nFor prefix" << endl;
    --change;
    change.display();
    return 0;
}
