#include<iostream>
#include<string>
using namespace std;
class memberType
{
	private: 
		string Name;
		string ID;
		int no_books;
		float amount;

	public:
		void set(string name, string id, int no, float a);
		void modify(string name);
		void modify(int no);
		void modify(float a);
		void show();
		void getter();
		memberType();
};

void memberType::getter()
{
	cout<<"Enter person's Name: ";
	cin>>Name;
	cout<<"Enter ID: ";
	cin>>ID;
	cout<<"Enter number of Books bought: ";
	cin>>no_books;
	cout<<"Enter Amount spent per book: ";
	cin>>amount;
	amount=amount*no_books;
}

void memberType::show()
{
cout<<"\nName of person is: "<<Name<<endl;
cout<<"ID of person is: "<<ID<<endl;
cout<<"Number of Books is: "<<no_books<<endl;
cout<<"Amount Spend is: "<<amount<<endl;
}

void memberType::set(string n, string id, int no, float a)
{
	Name=n;
	ID=id;
	no_books=no;
	amount=a;
}

void memberType::modify(string name)
{
	Name=name;
}

void memberType::modify(int no)
{
	cout << "Enter the new number of copy: ";
	cin >> no;
	no_books=no;
}

void memberType::modify(float amt)
{
	amount=amt*no_books;
}


memberType::memberType()
{
	int books;
	float amount;
	int i;
	string n;
	getter();
	show();
cout <<"Enter 1 to modify name otherwise enter any key if NO :";
	   cin >> i;
	   switch (i)
	{
	  	 case 1:
	   	{
			cout<<"Enter name: ";
			cin>>n;
			modify(n);
			show();
			break;
		}
		default:
			cout <<"Thanks for coming!!"<<endl;
			break;	
		
	}

cout <<"Enter 1 to update number of book otherwise enter any key if NO :";
		cin >> i;
	   switch (i)
	   {
	   		case 1:
	   		{			   
				cout<<"Enter updated no of books: ";
				cin>>books;	
				modify(books);
				show();
				break;
			}
			default:
				cout <<"Thanks for coming!!"<<endl;
				break;
		}

cout <<"Enter 1 to update book prices otherwise enter any key if NO :";
	   cin >>i;
	   switch (i)
   {
		   case 1:
	   	{			   
			cout<<"Enter updated prices: ";
			cin>>amount;	
			modify(amount);
			show();
			break;
		}
		default:
			cout <<"Thanks for coming!!"<<endl;
			break;
	}	

}
int main()
{
	memberType data;
	return 0;
}
