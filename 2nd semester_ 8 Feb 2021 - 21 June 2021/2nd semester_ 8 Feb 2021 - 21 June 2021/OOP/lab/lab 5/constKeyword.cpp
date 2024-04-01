/*#include<iostream>
using namespace std;
  
class Test 
{
private:
	int value;
public:
    Test(int v = 0) 
	{
		value = v;
	}
      
    // We get compiler error if we add a line like "value = 100;"
    // in this function.
    int getValue() const 
	{
		return value;
	}  
};
  
int main() 
{
    Test t(20);
    cout<<t.getValue();
    return 0;
}*/



#include<iostream>
using namespace std;
  
class Test 
{
	private:
    	int value;
	public:
    	Test(int v = 0) 
		{
			value = v;
		}
	    int getValue() 
		{
			return value;
		}
};
  
int main() 
{
    const Test t;
    cout << t.getValue();
    return 0;
}
