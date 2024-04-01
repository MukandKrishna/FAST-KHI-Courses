#include<iostream>
#include<fstream>
using namespace std;
 
int main()
{
    string line;
    ifstream in;
	in.open("original.txt");
    
	ofstream out;
    out.open("copy.txt");

	while(in.eof()==0)
	{
		getline(in,line);
		cout << line << endl;
	}
	
    if(in && out)
	{
        while(in.eof()==0)
		{
			getline(in,line);
            out << line << endl;
		}
	}
    	cout << "Copy Finished \n";
		
	in.close();
    out.close();
 
    return 0;
}
