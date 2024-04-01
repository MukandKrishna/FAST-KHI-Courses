#include <iostream>
#include <string>  
using namespace std;
class person
{
protected:
        string name;
public:
        void get()
        {
            cout<<"enter name: ";
            cin>>name;
        }
        void print ()
        {
            cout<<"\nName is: "<<name;
        }

        virtual void read()=0;                // pure virtual  functions
        virtual bool isoutstanding()=0;
};

class student:public person
{
protected:
        float cgpa;
public:
        void read()
        {
            person::get();
            cout<<"Enter cgpa: ";
            cin>>cgpa;
        }
        bool isoutstanding()
        {
    		if(cgpa>=3.5)
            	return true;
            else
                return false;
        }
};

class professor:public person
{
protected:
            int nop;
public:
        void read()
        {
            person::get();
            cout<<"Enter number of publications : ";
            cin>>nop;
        }
        bool isoutstanding ()
        {
            if(nop>=100)
                return true;
            else 
				return false;
        }
};

int main ()
{
    person *arr[30];
    int n=0;
	char choice;
	do
    {
        cout<<"Enter data for (s/p): ";
        cin>>choice;
		if(choice=='s')
			arr[n]=new student;
        else
			arr[n]=new professor;
        
		arr[n]->read();
        n++;
        cout<<"Continue it or not? (y/n): "<< endl;
        cin>>choice;
    }
    while(choice=='y');
    for(int i=0;i<n;i++)
    {
		arr[i]->print();
	
		if(arr[i]->isoutstanding() )
			cout<<"\n\tThis person is outstanding\n"<< endl;
	
		else
			cout<<"\n\tThis person is not outstanding";
	}
}




