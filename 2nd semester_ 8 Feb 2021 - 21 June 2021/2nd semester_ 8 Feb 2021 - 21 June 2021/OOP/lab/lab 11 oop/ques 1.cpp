#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
 
int main()
{
	ofstream write;
	string line;
	
	int length ;
	
	write.open("string.txt");
	while(write)
	{
		getline(cin,line);
		
		if(line == "0")
			break;
	
		write << line <<endl;
		
	}
		write.close();
		cout << endl;

		cout << "The length of the string is: " << line.length() << endl;
		
				// Reading from file 
		
		cout  << "\n\n\t\tREADING FROM FILE " << endl;
		ifstream read;
		
		int count=0;

		read.open("string.txt");
		
		if(read.is_open())
		{
			while(getline(read,line))
			{
				cout <<endl;
				cout<<line<<endl;
			  	count = count + line.length();   
			}
				cout<<"\nNumber of words in file are "<<count;
		}
		
		read.close();
		return 0;
}

