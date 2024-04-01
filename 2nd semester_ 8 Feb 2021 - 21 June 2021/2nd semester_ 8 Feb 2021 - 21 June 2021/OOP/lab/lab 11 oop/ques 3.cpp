#include <iostream>
#include<string.h>
#include <fstream>
using namespace std;
int main() 
{
	ifstream in;
	in.open("story.txt");
	char word[50];
	
	int count=0;
	while(in.eof()==0)
	{
		in>>word;
		
		if(strcmp(word,"the")==0)
			count++;
	}
	cout<<"Number of the word is:  "<<count << " times\n";
	
	in.close();
	
	return 0;
}
