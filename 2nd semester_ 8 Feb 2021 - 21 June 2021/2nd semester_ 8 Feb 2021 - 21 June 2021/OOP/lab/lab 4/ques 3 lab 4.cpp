#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class bookType
{
	private:
		string title;
		string authors[4];
		string publisher;
		long long int ISBN;
		float price;
		int no_copy;
		
	public:
		void set_details(); // function which set the details of book
							// i.e., title, author, no of copy, ISBN, price	
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
		bookType();
		void another();
};
void bookType::set_details()
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

cout<<"Enter the Title, Publisher and Price and ISBN and Number of Copies of the Book"<<endl;
	cin>>t>>pb>>pr>>is>>c;

	title = t;
	publisher = pb;
	price = pr;
	no_copy = c;
	ISBN = is;
}

void bookType::print_det()
{
	for(int i=0;i<4;i++)
	{
		cout<<"\nAuthor no "<<i+1<<" : "<<authors[i];
	}
cout <<"\nTitle: "<<title<<"\nPublisher:  "<<publisher;
cout<<"\nPrice: "<<price<<"\nISBN: "<<ISBN<<"\nNo of copies: "<<no_copy<<endl;

}

void bookType::check_title(string t)
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

void bookType::show_title()
{
	cout<<"\tShowing the title of book only: "<<title<<endl;
}

int bookType::return_copy()
{
	return (no_copy);
}
void bookType::update_copy()
{
	int c;
	cout <<"Enter updated no of copies"<<endl;
	cin >>c;
	no_copy = c ;
	cout <<"Updated no of copies: "<<no_copy<<endl;
}

void bookType::update_price()
{
	float pr;
	cout <<"Enter the price of book: ";
	cin >> pr;
	cout <<"Updated price: "<<pr<<endl;
}
float bookType::return_price()
{
	return price;
}
void bookType::update_ISBN()
{
	string i;
	cout <<"Enter the ISBN: ";
	cin >> i;
	cout << "\nUpdated ISBN: "<<i<<endl;
}
string bookType::return_ISBN()
{
	cout <<"ISBN: "<<ISBN;
}

void bookType::update_author()
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

bookType::return_author()
{
	for(int i=0;i<4;i++)
	{
		cout<<" "<<authors[i];
	}
}

bookType::bookType()
{
	set_details();
	string t;
	int i ;
cout <<"\tPerforming the functions!!\n"<<endl;
cout<<"\tEnter \n1 to show title\t\t\t\t2 to check the title\n"
"3 to to update the no of copies\t\t4 return(_show_) no of copies"
"\n5 update the price of the book\t\t6 to return price of the book"
"\n7 to update the ISBN\t\t\t8 to return ISBN\n9 to update Authors"
"\t\t\t10 to return the Authors\n\n\t\t11 to print the details of the book "<<endl;	

	cin >> i;
	cout << endl;
	switch(i)
	{
	case 1:
		{
			show_title();
			getch();
			break;
		}	
	case 2:
		{
			cout <<"Enter title: "<<endl;
			cin >> t;
			check_title(t);
			getch();
			break;
		}
		
	case 3:
		{
			update_copy();
			getch();
			break;
		}	
	case 4:
		{
			return_copy();
			getch();
			break;
		}
	case 5:
		{
			update_price();
			getch();
			break;
		}
	case 6:
		{
			return_price();
			getch();
			break;
		}		
	case 7:
		{
			update_ISBN();
			getch();
			break;
		}	
	case 8:
		{
			return_ISBN();
			getch();
			break;
		}
	case 9:
		{
			update_author();
			getch();
			break;
		}
	case 10:
		{
			system("cls");
			return_author();
			break;
		}				
	case 11:
		{
			cout<<"\nPrinting the details of the book!"<<endl;
			print_det();
			getch();
			break;		
		}
	default:
		{
			cout<<"Wrong input!!\n"<<endl;
			system("pause");
		}		
	}

}

int main()
{
	bookType book[100];
	return 0;
}
