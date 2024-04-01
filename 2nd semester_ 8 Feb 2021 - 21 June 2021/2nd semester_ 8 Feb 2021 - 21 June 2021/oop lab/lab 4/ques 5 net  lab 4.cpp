#include <iostream>
#include <string>
using namespace std;

const int MAX_ARRAY_SIZE=4;

class memberType 
{
	public:
	string name; // Name of the person
	int id; // Member ID
	int n_books; // Number of books
	double amount; // Total amount spent

	memberType();
	memberType(string ID, string first, string last, int books, double amount);
//
	void setMemberInfo(string ID, string fName, string lName, int bPurchased, double amount);

// member Name access methods
	void setMemberID(string);
	void setName(string, string); // set new name
	string getName(); // get Name

	bool isMemberID(string) const;
	int getBooksPurchased() const;
	double getTotalAmountSpent() const;
	void purchaseBook(double amount);
	void resetbooksBoughtAndAmount();
	void printMemberID() const;
	void printName() const;
	void printInfo() const;

	private:
	string memberID;
	string firstName;
	string lastName;
	int booksPurchased;
	double amountSpent;

};

class bookType
{
	public:
	void setTitle(string); //functions dealing with the title
	string getTitle();
	bool compareTitle(string);

//functions dealing with the copies of book
	void setCopies(int);
	void showCopies();
	void updateCopies(int);
	int getCopies();

	void setPublisher(string); //functions dealing with publisher of book
	void showPublisher();
	void updatePublisher(string);
	string getPublisher();

	void setISBN(string); //functions dealing with ISBN of book
	void showISBN();
	void updateISBN(string);
	string getISBN();
	bool compareISBN(string);

	void setPrice(double bookPrice); //functions dealing with price of book
	void showPrice();
	void updatePrice(double compPrice);
	double getPrice();

	void setAuthors(string); //functions dealing with author of book
	void showAuthors();
	void updateAuthor(string compAuthor);
	string getAuthors(int i); //ith number of author will return
	bookType();

private:
string title;
string authors[4]; //objects of type bookType can contain up to 4 authors
string publisher;
string ISBN;
double price;
int copies;
int authorsNo;
};

bookType::bookType()
{
	title = "moon";
	for (int i = 0; i < 4; i++)
	authors[i] = "r";
	publisher = "seth";
	ISBN = "1234567891011";
	price = 0;
	copies = 0;
	authorsNo = 0;
}

void bookType::setTitle(string myTitle)
{
	title = myTitle;
}

string bookType::getTitle()
{
	return title;
}

bool bookType::compareTitle(string otherTitle)
{
	return (title.compare(otherTitle) == 0);
}

void bookType::setAuthors(string myAuthor)
{
	authorsNo = authorsNo % 4;

	if(myAuthor.compare("r") == 0)
	return;

	else
	{
		authors[authorsNo] = myAuthor; //store the author name
		authorsNo++; //keep track of authors count
	}
}

void bookType::showAuthors()
{
	for (int i = 0; i < authorsNo; i++)
	cout << authors[i] << ", ";
	cout << "\r\r";
}

void bookType::updateAuthor(string myAuthor)
{
	setAuthors (myAuthor);
}

string bookType::getAuthors(int i)
{
	return authors[i];
}

void bookType::setCopies(int myCopies)
{
	copies = myCopies;
}

void bookType::showCopies()
{
	cout << "\n\tThe number of copies " << copies;
}

void bookType::updateCopies(int myCopies)
{
	copies = myCopies;
}

int bookType::getCopies()
{
	return copies;
}

void bookType::setPublisher(string myPublisher)
{
	publisher = myPublisher;
}

void bookType::showPublisher()
{
	cout << publisher;
}

void bookType::updatePublisher(string myPublisher)
{
	publisher = myPublisher;
}

string bookType::getPublisher()
{
	return publisher;
}

void bookType::setISBN(string myISBN)
{
	ISBN = myISBN;
}

void bookType::showISBN()
{
	cout << ISBN;
}

void bookType::updateISBN(string myISBN)
{
	ISBN = myISBN;
}

string bookType::getISBN()
{
	return ISBN;
}

bool bookType::compareISBN(string myISBN)
{
	return (myISBN.compare(myISBN));
}

void bookType::setPrice(double myPrice)
{
	price = myPrice;
}

void bookType::showPrice()
{
	cout << "\n\tThe book price is " << price;
}

void bookType::updatePrice(double myPrice)
{
	price = myPrice;
}

double bookType::getPrice()
{
	return price;
}

memberType::memberType()
{
	memberID="2";
	firstName="ali";
	lastName="anwer";
	booksPurchased=0;
	amountSpent=0;
}
memberType::memberType(string ID, string first, string last, int books, double amount)
{
	memberID=ID;
	firstName=first;
	lastName=last;
	booksPurchased=books;
	amountSpent=amount;
}
// member Name access methods
void memberType::setMemberInfo(string ID, string fName, string lName, int bPurchased, double amount)
{
	memberID=ID;
	firstName=fName;
	lastName=lName;
	booksPurchased=bPurchased;
	amountSpent=amount;
}

// member Id access methods
void memberType::setMemberID(string id)
{
	memberID=id;
}

void memberType::setName(string fName, string lName)
{
	firstName=fName;
	lastName=lName;
}

bool memberType::isMemberID(string id) const
{
	return memberID == id;
}

int memberType::getBooksPurchased() const
{ // get number of books
	return booksPurchased;
}

double memberType::getTotalAmountSpent() const
{
	return amountSpent;
}

// Books methods
void memberType::purchaseBook(double price)
{
	amountSpent+=price; // more money have been spent
	booksPurchased++; // and more books has been aquired
}

void memberType::resetbooksBoughtAndAmount()
{
	amountSpent=0;
	booksPurchased=0;
}

void memberType::printMemberID() const
{
	cout << memberID;
}

void memberType::printName() const
{
	cout << firstName << " " << lastName;
}

void memberType::printInfo() const
{
	printMemberID(); cout << endl;
	printName(); cout << endl;
	cout << booksPurchased << endl;
	cout << amountSpent << endl;
}
void showChoices();

int main()
{
	int choice; // holds the selection

do
{
	showChoices();
	cin >> choice;
	cout << endl;

	switch(choice)
		{
		case 1:
	
		break;

		case 2:

		break;

		default:
			cout << "Invalid input." << endl;
		}
	}while (choice != 99);
	
}

void showChoices()
{
cout << "Enter--" << endl;
cout << "1: To enter member ID." << endl;
cout << "2: To seach for a book. " << endl;
cout << "3: To purchase a book. " << endl;
cout << "99: To quit the program." << endl;
}
