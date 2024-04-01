#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("story2.txt");
	
	char str[100];
	int count=0;
	
	while(fin.eof()==0)
	{
		fin.getline(str,100);
	
		if(str[0]!='A')
			count++;
	}
	
	cout<<"The number of lines not starting with alphabet 'A' are :  "<<count;
	
	fin.close();
	return 0;
}
