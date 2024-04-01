#include<iostream>
#include<stdio.h>
#include<string>
#include<conio.h>
using namespace std;
class bookstore
{
	private:  
		// private data from class q3
		string title;
		string authors[4];
		string publisher;
		long long int ISBN;
		float price;
		int no_copy;
		// private data from class q4
		string Name;
		int ID;
		int no_books;
		float amount;
	
		public:  
		// functions from class of q3
		void Book();		
		void show_title();
		void check_title(string t);
		void update_copy();
		int return_copy();
		void update_price();
		float return_price();
		void update_ISBN();
		string return_ISBN();
		void update_author();
		return_author();
		void print_det();
		
		// functions from class of q4
		void set(string name, string id, int no, float a);
		void modify(string name);
		void modify(int no);
		void modify(float a);
		void show();
		void getter();
		// to check the if number of books > 11 and to give the discount 
		void check();
		// function for members and non members 
		void member();
		void n_member();
		// constructor
		//bookstore();
};

void bookstore::Book()
{
	string t, pb, no;
	long long int is;
	float pr;
	int c;
cout<<"\tEnter the details of the book!"<<endl;

cout<<"Enter the Authors (upto 4) of the book"<<endl;
	for(int i=0;i<4;i++)
	{
		cin>>authors[i];
	}

cout<<"Enter the Title, Publisher, Price, ISBN, and Number of Copies of the Book/s"<<endl;
	cin>>t>>pb>>pr>>is>>c;

	title = t;
	publisher = pb;
	price = pr;
	no_copy = c;
	ISBN = is;
}

void bookstore::print_det()
{
	int i;
	for(i=0;i<4;i++)
	{
		cout<<"\nAuthor no "<<i+1<<" : "<<authors[i];
	}
cout <<"\nTitle: "<<title<<"\nPublisher:  "<<publisher;
cout<<"\nPrice: "<<price<<"\nISBN: "<<ISBN<<"\nNo of copies: "<<no_copy<<endl;
}


void bookstore::getter()
	{
		cout<<"Enter person's Name: ";
//		cin >> Name ;
		fflush(stdin);
		getline(cin,Name);
		cout<<"Enter ID: ";
		cin>>ID;
		cout<<"Enter number of books bought: ";
		cin>>no_books;
	}

void bookstore::show()
{
	cout<<"\nName of person is: "<<Name<<endl;
	cout<<"ID of person is: "<<ID<<endl;
	cout<<"Number of Books is: "<<no_books<<endl;
	cout <<"Amount of the books is:  "<<amount<<endl;
}

void bookstore::modify(string name)
{
	Name=name;
}

void bookstore::modify(int no)
{
	no_books=no;
}


void bookstore::check()
{
	float amt;
	for(int i=0;i<no_books;i++)
	{
		cout<<"Enter Amount of book number "<<i+1<<" : ";
		cin>>amount;
		if(no_books>11)
		{
//			amount = amount/no_books;
			amount=0;
		}
		else if(no_books<11)
		{
			amt = (amount/10)*0.5;
			amount = amount-amt;
		}
	}
		cout << "The Amount of the book is: " << amount <<  endl;
}
	
void bookstore::check_title(string t)
{
	if(title==t)
	{
		cout <<"\nYes, Title is same: "<<title<<endl;
	}
	else
	{
		cout<<"No, Title is not same"<<endl;
	}
}

void bookstore::show_title()
{
	cout<<"\tShowing the title of book only: "<<title<<endl;
}

int bookstore::return_copy()
{
	return (no_copy);
}
void bookstore::update_copy()
{
	int c;
	cout <<"Enter updated no of copies"<<endl;
	cin >>c;
	no_copy = c ;
	cout <<"Updated no of copies: "<<no_copy<<endl;
}

void bookstore::update_price()
{
	float pr;
	cout <<"Enter the price of book: ";
	cin >> pr;
	cout <<"Updated price: "<<pr<<endl;
}
float bookstore::return_price()
{
	return price;
}
void bookstore::update_ISBN()
{
	string i;
	cout <<"Enter the ISBN: ";
	cin >> i;
	cout << "\nUpdated ISBN: "<<i<<endl;
}
string bookstore::return_ISBN()
{
	cout <<"ISBN: "<<ISBN;
}

void bookstore::update_author()
{
	cout <<"Enter the authors\n";
	for(int i=0;i<4;i++)
	{
		cout<<"Author no "<<i+1<<" : ";
		cin>>authors[i];
	}
	cout << endl;
	for(int i=0;i<4;i++)
	{
		cout << "Updated Authors:  "<<authors[i]<<endl;
	}
}

bookstore::return_author()
{
	for(int i=0;i<4;i++)
	{
		cout<<" "<<authors[i];
	}
}
void bookstore::member()
{
	cout << "\nAs person is member, giving person discount of 5%" << endl;
	check();
}
void bookstore::n_member()
{
	cout << "\nPerson is not member" << endl;
	amount = no_books * price;
	cout << "The Amount of the books is:  "<< amount<<endl;
}

/*bookstore::bookstore()
{
	
}
*/
int main()
{
	int  s;
	char m;
	bookstore b;
	bookstore mem;

	float amt;
	string nm;

	b.Book();

	cout << endl;
	
	mem.getter();
	system("cls");
	cout << "\nEnter member type of person( Enter (M) for member (N) for non-member): " ;
	cin >> m;
	switch(m)
	{
		case 'M':
			mem.member();
			getch();
			break;
		case 'N':
			mem.n_member();
			getch();
			break;	
	}

	cout << endl;

	mem.show();
	getch();
	cout<< "Thanks for coming to MUKAND BOOK STORE!"<<endl;
	
	system("cls");
	cout << "\n\t\tFOR ADMIN!!" << endl;

	cout <<"\tPerforming the functions!!\n"<<endl;
cout<<"\tEnter \n1 to show title\t\t\t\t2 to check the title\n"
"3 to to update the no of copies\t\t4 return(_show_) no of copies"
"\n5 update the price of the book\t\t6 to return price of the book"
"\n7 to update the ISBN\t\t\t8 to return ISBN\n9 to update Authors"
"\t\t\t10 to return the Authors\n11 To print the details of the book"
"\t12 To modify the name of person\n13 To modify the number of books\t0 To set details of the book"
"\n\n\t\t Enter any key if NO" << endl;	
	int i;
	cin >> i;
	cout << endl;
	switch(i)
	{
	case 0:
		{
			b.Book();
			getch();
			break;
		}	
	case 1:
		{
			b.show_title();
			getch();
			break;
		}	
	case 2:
		{
			string t;
			cout <<"Enter title: "<<endl;
			cin >> t;
			b.check_title(t);
			getch();
			break;
		}
		
	case 3:
		{
			b.update_copy();
			getch();
			break;
		}	
	case 4:
		{
			b.return_copy();
			getch();
			break;
		}
	case 5:
		{
			b.update_price();
			getch();
			break;
		}
	case 6:
		{
			b.return_price();
			getch();
			break;
		}		
	case 7:
		{
			b.update_ISBN();
			getch();
			break;
		}	
	case 8:
		{
			b.return_ISBN();
			getch();
			break;
		}
	case 9:
		{
			b.update_author();
			getch();
			break;
		}
	case 10:
		{
			b.return_author();
			break;
		}
	case 11:
		{
			cout<<"\nPrinting the details of the book!"<<endl;
			b.print_det();
			getch();
			break;		
		}
	case 12:
		{
			string name;
			cin >> name;
			mem.modify(name);
		}
	case 13:
		{
			int no;
			cin >> no;
			mem.modify(no);
		}		
	default:
		{
			cout << "BOOK STORE" <<endl;
			getch();
		}
	}
	return 0;	
}
