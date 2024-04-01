#include<iostream>
#include<string>
using namespace std;
class person
{
        int id;
        string name ;

public:
        virtual void getdata()
        {
			cout <<"\n\n Enter the name and ID of the employee: "<< endl;
			cin >> name>>id;
		}
        virtual void display()
        {
        	cout <<"\n Employee Name  = "<< name<<"\n ID =  "<<id;
		}
        virtual void bonus()
        {
        	cout <<"\n Bonus function of person base class\n";
		}
};

class admin : public virtual person
{
	private:
		int sale_admin;

public:
        void getdata()
        {
  	    	cout <<"\n Enter the Sale amount of the admin : "<< endl;
  	    	cin >> sale_admin;
		}
        void display()
		{
			cout <<"\n Admin sale amount  = "<< sale_admin;
		}
        void bonus()
		{
    		if (sale_admin >450)
    		cout << "\n The bonus of the admin is : "<< (sale_admin*0.50);
	    	else
    		{
    			cout << "\nNo bonus of the admin" << endl;
			}
		}
};

class account : public virtual person
{
        long int amt;

public :
        void getdata()
		{
   	    	cout <<"\n Amount accumulated in the account : "<< endl;
    		cin >> amt;
		}
        void display()
        {
        	cout <<"\n Employee Account amount  = "<< amt;	
		}
        void bonus()
        {
			if (amt >500)
			{
				cout << "\n Bonus of the account is : "<< (amt*0.75);
			}
    		else
    		{
    			cout << "\nNo bonus of the account" << endl;
			}
		}

};


class master : public admin, public account
{
public:
        void getdata()
		{
    	    cout <<"\n  ******Getdata of master class******";
    	    person::getdata();cout << endl;
    	    admin::getdata();cout << endl;
    	    account::getdata();cout << endl;
	}

        void display()
        {
        	cout <<"\n ******Display of master class******";
        	person::display();cout << endl;
        	admin::display();cout << endl;
       		account::display();cout << endl;
		}
		void bonus()
		{
 	    	cout <<"\n ******Bonus of master class******";
    		person::bonus();cout << endl;
    		admin:: bonus();cout << endl;
    		account::bonus();cout << endl;
		}
};


int main()
{
    person per, *per_ptr;
    admin ad, *ad_ptr;
    account acc, *acc_ptr;
    master  ma, *ma_ptr;

    cout <<"\t\tAddress of base class person to base class pointer ";
    per_ptr=&per;
    per_ptr->getdata();
    per_ptr->display();
    per_ptr->bonus();

    cout <<"\n\n\n\t\tAddress of admin class to base class pointer ";
    per_ptr=&ad;
    per_ptr->getdata();
    per_ptr->display();
    per_ptr->bonus();

    cout <<"\n\n\n\t\tAddress of account class to base class pointer ";
    per_ptr=&acc;
    per_ptr->getdata();
    per_ptr->display();
    per_ptr->bonus();

    cout <<"\n\n\n\t\tAddress of class master to base class pointer ";
    per_ptr=&ma;
    per_ptr->getdata();
    per_ptr->display();
    per_ptr->bonus();
    return 0;
}
