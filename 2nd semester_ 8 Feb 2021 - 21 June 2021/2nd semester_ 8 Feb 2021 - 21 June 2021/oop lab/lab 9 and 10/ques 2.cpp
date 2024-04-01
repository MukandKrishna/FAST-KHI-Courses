#include<iostream>
using namespace std;
class Quad
{
    protected:
        float length, width, area;
    public:
        virtual float Area() = 0;
        void setdata(float l, float w)
		{
            length = l;
            width = w;
        }
};

class Rectangle : public Quad
{
    public:
        Rectangle(float l, float w)
		{
            setdata(l, w); 
        }
        float Area()
		{
            return length * width;
        }
};

float top_level(Quad &q)
{
    return q.Area();
}

int main()
{
	Quad *quad;
    Rectangle r(10,15);
    quad = &r;
    quad->setdata(3,4);
    cout << "\tArea is: " << quad->Area();
    
	cout << "\n\n\tArea from the top level function is:  "; 
    cout<<top_level(r);
    return 0;
}
