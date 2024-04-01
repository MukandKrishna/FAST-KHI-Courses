#include <iostream>
#include <fstream>
using namespace std;
class person
{
	private :
		int age;
		string name;
	public:
		person(int a, string n){ age = a ; name = n ;}
	
		void details()
		{
			cout << "Name of the person: " << name << endl;
			cout << "Age of the person: " << age << endl;
		}

};
int main()
{
	person person1(19,"Mukand");
	
	fstream file;
		//opening file 
	file.open("details.bin", ios::out|ios::binary);
		//writing object into the file	
	file.write((char*)&person1,sizeof(person));
	file.close();	
	
		//open file again
	file.open("details.bin",ios::in|ios::binary);
	
	//reading object from the file	
	file.read((char*)&person1,sizeof(person1));
	
	cout<<"\nDetails from file\n";
	//printing the object
	person1.details();
	
	file.close();
	
	return 0;
}

