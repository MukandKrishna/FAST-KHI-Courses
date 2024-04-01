#include<iostream>
#include<string.h>
#include<conio.h>
#include<iomanip>
using namespace std;
class book
{
	private:
	int ISBN;
	char bookname[100]; 
	char authorname[100];
	char publishername[100];

	public:
		void query(int i)
		{
				cout<<"\nEnter name of Book  "<<i<<": ";
				gets(bookname);
				cout<<"Enter ISBN number: ";
				cin>>ISBN;
				cout<<"Enter Author name: ";
				fflush(stdin);
				gets(authorname);
				cout<<"Enter Publisher's name: ";
				gets(publishername);
		}	
		
		void getinfo()
		{
			cout<<endl<<"\tBook name: ";
			puts(bookname);
			cout<<"\tISBN number: ";
			cout<<ISBN<<endl;
			cout<<"\tAuthor's name: ";
			cout<<authorname<<endl;
			cout<<"\tPublisher's name: ";
			cout<<publishername<<endl;
		}
		book();
};
	
book::book()
{
	int i , b;
	for(i=1;i<=3;i++)
	{
		query(i);
	}
	cout<<"\nEnter the Number of book to get information of it: ";
	cin>> b;
	
	for(i=1;i<=3;i++)
	{		
		if(i==b)
		{
			getinfo();
		}
	}
}

int main()
{
	book bookinfo[5];
	return 0;
}	
