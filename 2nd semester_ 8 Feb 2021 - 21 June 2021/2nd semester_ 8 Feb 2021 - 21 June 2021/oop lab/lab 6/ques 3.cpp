#include<iostream>
#include<string>
using namespace std;
class Employee
{
	private:
	    string Name;
	    int Number;
    public:
        Employee(string Name , int Number)
        {
            this-> Name = Name ;
            this ->Number = Number;
        }
    void setName(string Name)
    {
        this-> Name = Name;
    }
    string getName()
    {
        return Name;
    }
    void setNumber(int Number)
    {
        this -> Number = Number;
    }
    int getNumber()
    {
        return Number;
    }

};
class Manager : public Employee
{
private:
    string Title;
    double Club_Dues;
public:
    Manager( string Name , string Title , int Number , double Club_Dues) : Employee(Name , Number)
    {
        this-> Title = Title;
        this -> Club_Dues = Club_Dues;
    }
 	void setTitle(string Title)
	{
		this-> Title = Title;
  }
    string getTitle()
     {
       return Title;
     }
    void setClub(double Club_Dues)
    {
        this -> Club_Dues = Club_Dues;
    }
    double getClub()
    {
        return Club_Dues;
    }
    void Display()
    {
        cout<<"Name : " <<getName()<< endl;
        cout<<"Number : " <<getNumber()<< endl;
        cout<<" Club Duies :" <<Club_Dues<< endl;
        cout<<"Title :" <<Title<< endl;
    }

};
class Scientist : public Employee
{
private :
    int Publication;
    string Title;
public :
    Scientist(string Name , string Title , int Number , int Publication) : Employee(Name , Number)
    {
        this -> Publication = Publication;
        this -> Title = Title ;
    }
    void setTitle(string Title)
    {
        this-> Title = Title;
    }
    string getTitle()
    {
    	return Title;
    }
      void setPublication(int Publication)
    {
        this-> Publication = Publication;
    }
    int getPublication()
    {
    	return Publication;
    }
     void Display()
    {
        cout<<"Name : " <<getName()<< endl;
        cout<<"Number : " <<getNumber()<< endl;
        cout<<"Publication :" <<Publication<< endl;
        cout<<"Title :" <<Title<< endl;
    }

};
class Laborer : public Employee
{
private:
    string Title, Name;
public:
    Laborer(string Name , int Number, string Title ) : Employee(Name , Number)
    {
        this -> Title = Title;
    }
    void setTitle(string Title)
    {
        this-> Title = Title;
    }
    string getTitle()
    {
    	return Title;
    }
    void Display()
    {
        cout<<"Name : " <<getName()<< endl;
        cout<<"Number : " <<getNumber()<< endl;
        cout<<"Title :" <<getTitle()<< endl;
	}
};

int main()
{
    Scientist s1("Success" , "title" , 1012 , 24);
	Manager m1("ALI", "Warriors", 32, 12.3);
	Laborer l1("Ahsan",12,"mazdoor");
	cout << "******Scientist******\n";
	s1.Display();
	cout << endl;
	cout << "*******Manager********\n";
	m1.Display();
	cout << endl;
	cout << "*******Laborer*******\n";
	l1.Display();
	return 0;
}
