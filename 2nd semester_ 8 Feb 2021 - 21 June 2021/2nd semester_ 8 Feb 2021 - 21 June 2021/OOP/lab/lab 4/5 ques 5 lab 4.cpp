#include<iostream>
#include<string>
using namespace std;
class bookstore
{
private: 
	//PRIVATE DATA FROM CLASS OF Q4
	string Name;
	string ID;
	int no_books;
	float amount;
	//PRIVATE DATA FROM CLASS OF Q3
	string title; //stores the title of an oject
	string Authors[4]; //stores the Authors names
	int n_Author; //stores number of Authors
	string publishr; //Stores the name of Publisher
	string ISBN;//store ISBN NUmber
	double price; //Stores the price
	int booksbought=0;
	int copies;
	void setTitle(string); //function declaration to set the title
	void SetAuthors(int); //function declaration to set the Author(s)
	void setPublishr(string); //function declaration to set the Publisher name
	void setIBSN(string); //function declaration to set the IBSN No.
	void setPrice(double); //function declaration to set the price
	void setCopies(int); //function declaration to set the No.of Copies
	void print(); //function declaration to print the all data about the book
	void search() //function to serach the book by ISBN no. or by title
	{
       int choice,check=0,n,i;
       char ch;
       string name;
       cout <<"Enter 1 for to Search by 'Title'\n'2' for to search by IBSN No. : \nEnter choice: ";
       cin >> ch; //takes the choice
       switch (choice)
	   {
       
	   case 1: //executes if user enters 1
       {
              cout <<"Enter the title to search :";
              getline(cin, name);
              for (i = 0; i < 1000; i++)
              {
                     string t = title;
                     if (name == t)
                     {
                    	check = 1;
                        print();
                        cout <<"Do you want to modify the no of copies enter 'y' if YES and 'n' if NO :";
                        cin >> ch;
                        switch (ch)
                        {
                        case'y':
                           {
                                  cout <<"Enter the nmuber of Copies :";
                                  cin >> n;
                                   copies=n;
                                  cout << endl <<"Updated successfully the updated Data is as followed: \n"<< endl << endl;
                                  print(); 
                                  break;
                           }
                           case'n':
                                  break;
                           default:
                                  cout <<"Invalid Input"<< endl;
                           }
                     }
                     if (check == 0 && i == 1000)
                           cout <<"Not found a book with this title"<< endl;
              }
              break;
       }
       case 2: //executes if user enters 2
       {
              cout <<"Enter the IBSN :";
              getline(cin, name);
              for (i = 0; i < 1000; i++)
              {
                     string t = ISBN;
                     if (t == name)
                     {
                           check = 0;
                           print();
                           cout <<"Do you want of modify the no of copies enter 'y' if YES and 'n' if NO :";
                           cin >> ch;
                           switch (ch)
                           {
                           case'y':
                           {
                                cout <<"Enter the nmuber of Copies :";
                                cin >> n;
                                copies=n;
                                cout << endl <<"Updated successfully the updated Data is as followed: \n"<< endl << endl;
                                print(); 
                                break;
                           }
                           case'n':
                                  break;
                           default:
                                  cout <<"Invalid Input"<< endl;
                           }
                           }
                     }
                     if (check = 1 && i == 1000)
                           cout <<"Not found a book with this ISBN NO."<< endl;
                           break;
              }
              
       
       default: //exectes if user enter invalid choice
              cout <<"Invalid choice"<< endl;
       }
	
}      
public:
	void set(string name, string id, int no, float a);
	void modify(string name);
	void modify(int no);
	void modify(float a);
	void checker(int b);
	void show();
	void getter();
	void books(); //constructor
}members[500];
//==================function from class of q3=======================

//Functon to set the title
void bookstore::setTitle(string t) 
{
       title = t;
}

//Functon to set the name of publisher
void bookstore::setPublishr(string p)
{
       publishr = p;
}

//Functon to set ISBN no.
void bookstore::setIBSN(string i) 
{
       ISBN = i;
}
void bookstore::SetAuthors(int n) //Functon to set the names of author(s)
{
       for (int i = 0; i <n; i++)
       {
       		  fflush(stdin);
              cout <<"\tAuthor no "<< i + 1<<" : ";
              getline(cin, Authors[i]);
       }

}
//Functon to set the price of a book
void bookstore::setPrice(double p)  
{
       price = p;
}


//Functon to set the no. of copies of a book
void bookstore::setCopies(int n) 
{
       copies = n;
}


//Functon to print the book information
void bookstore::print() 
{
       cout <<"\tTitle : "<< title << endl;
       cout <<"\tAuthor(s):";
       for(int i = 0 ;i<4 ;i++)
	   {
       	 if (Authors[i] != "")
              cout <<endl<<"\t->"<< Authors[i];
	   }
       cout <<"\tPublisher : "<< publishr << endl;
       cout <<"\tISBN : "<< ISBN << endl;
       cout <<"\tPrice : "<< price << endl;
       cout <<"\tCopies in Stock : "<< copies << endl;
}

void bookstore::books() 
{
   
       string name;
       int n,i,c=1;
       double p;
       char co;
       for (i=0 ; i<1000 ; i++) //loop to take the data of  multiple books
       {	fflush(stdin);
              cout <<"Enter details for Book No."<< i + 1;
              cout <<"\nEnter the Title of the Book :";
              fflush(stdin);
			  getline(cin, name); //Takes the title from the user
              //-------------------set title
			  fflush(stdin);
			  setTitle(name); 
              //-------------------set title
			  cout <<"Enter the Numbers of Authors : ";
              fflush(stdin);
			  cin >> n;
              while (n>4 || n<1)
			   { //-----------------checking of number of authors
                     cout <<"Invalid input You can only store 1-4 authors!\nPlease Enter the Numbers of Authors again :";
                     fflush(stdin);
					 cin >> n;
              }
              //------------------set authors
              fflush(stdin);
			  SetAuthors(n); 
              //------------------set authors
              cout <<"Enter the Name of Publisher :";
              fflush(stdin);
			  getline(cin, name); 
              //-------------------sets the publisher name
			  fflush(stdin);
			  setPublishr(name); 
              //--------------------sets the publisher name
			  fflush(stdin);
			  cout <<"Enter the ISBN no : ";
              fflush(stdin);
			  getline(cin, name); 
              //--------------------sets the ISBN name
              fflush(stdin);
			  setIBSN(name); 
              //--------------------sets the ISBN name
			  fflush(stdin);
			  cout <<"Enter the price : ";
			  fflush(stdin);
			  cin >> p;
              fflush(stdin);
			  while (p<0) 
			  { //-----------------------checking if prize is negatively entered by the user
                     cout <<"Invalid input! \nPlease Enter the Price again :";
                     cin >> p;
              }
              //--------------------------sets the price of the book
              fflush(stdin);
			  setPrice(p); 
			  //------------------sets the price of the book
              cout <<"Enter the number of copies :";
              fflush(stdin);
			  cin >> n; 
              while (n<0) 
			  { //checking of no of copies entered by the user
			  		cout <<"Invalid input! \nPlease Enter the Number of copies again :";
                     cin >> n;
              }
              fflush(stdin);
              //-------------------set the no. of copies
              setCopies(n); 
			  //-------------------set the no. of copies
              cout << endl;
       }
       for (int i = 0; i < 1000; i++) //loop to diplay the data of multiple books
       {
       		fflush(stdin);
            print();
            cout << endl;
       }
       search(); //calling of search function
}

//==================function from class of q4======================
void bookstore::getter()
{
		cout<<"Enter person's Name: ";
		cin>>Name;
		cout<<"Enter ID: ";
		cin>>ID;
		cout<<"Enter number of Books bought: ";
		cin>>no_books;
		checker(no_books);		
		
}
//----------------------------------
void bookstore::checker(int b)
{
	for(int i=0;i<b;i++)
	{
			booksbought++;
			cout<<"Enter Amount of book no "<<i+1<<" : ";
			cin>>amount;
			
			if(	booksbought>11)
			{
					amount= amount/booksbought;
					booksbought=0;
			}
			else
				amount=amount-((amount/10)*0.5);
	}
}

//----------------------------------
void bookstore::set(string n, string id, int no, float a)
{
	Name=n;
	ID=id;
	no_books=no;
	amount=a;
}

//-------------------------------------

void bookstore::show()
{
cout<<"Person's Name is: "<<Name<<endl;
cout<<"Person's ID is: "<<ID<<endl;
cout<<"Number of Books is: "<<no_books<<endl;
cout<<"Amount Spent is: "<<amount<<endl;
}

//-----------------------------------------------------------

void bookstore::modify(string name)
{
	Name=name;
}

//------------------------------

void bookstore::modify(int no)
{
	amount=amount+(amount*(no-no_books));
	no_books=no;

}
void bookstore::modify(float amt)
{
	amount=amt*no_books;
}
//---------------------------

//------------------------------

int main()
{
	int books;
	float amount;
	char ch;
	string n;
	bookstore b[1000];
	bookstore members[500];
	for(int i=0;i<100;i++)	
		{
			b[i].books();
		}	
	for(int i=0;i<500;i++)
	{
		cout<<"\n Now enter details for members No "<<i+1<<" : ";
		members[i].getter();
	}
	for(int i=0;i<500;i++)
	{
		cout<<"\nDetails for members no "<<i+1<<" : ";
		members[i].show();
	}
	for(int i=0;i<500;i++)
	{
		cout <<"Do you want to modify the name enter 'y' if YES and 'n' if NO :";
	   cin >> ch;
	   switch (ch)
	   {
	 	  case'y':
	   		{
			cout<<"ENTER UPDATED NAME: ";
			cin>>n;
			members[i].modify(n);
			members[i].show();
			break;
			}
		}
			
cout <<"Do you want to update number of books enter 'y' if YES and 'n' if NO :";
	   cin >> ch;
	   switch (ch)
	   {
		   case'y':
		   	{			   
			cout<<"ENTER UPDATED BOOKS: ";
			cin>>books;	
			members[i].modify(books);
			members[i].show();
			break;
			}
		}
cout <<"Do you want to update book prices enter 'y' if YES and 'n' if NO :";
	   cin >> ch;
	   switch (ch)
	   {
	   		case'y':
	   		{			   
				cout<<"ENTER UPDATED PRICE: ";
				cin>>amount;	
				members[i].modify(amount);
				members[i].show();break;
			}
		}
}
}

