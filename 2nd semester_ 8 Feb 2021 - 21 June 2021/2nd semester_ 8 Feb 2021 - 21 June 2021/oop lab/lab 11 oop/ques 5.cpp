#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class participant
{
	public:
	int id;
	string name;
	float score;

	void input()
	{
		cout << "\nEnter ID No.: ";
		cin >> id;
		cout << "Enter Name : ";
		cin >> name;	
		cout << "Enter Score : ";	
		cin >> score;	
		cout << endl;
	}
	
	void output(int ID)
	{
	    if (id== ID)
		{
			display();
	    }
	}

	int MAX(participant part[3])
	{
	    int i, max = 0;
	    for ( i = 0; i < 3; i++ ) 
		{
	        if ( part[i].score > part[max].score ) 
			{
	            max = i;
	        }
	    }
 	   return max;
	}
	
	void display()
	{
		cout << "Name: " << name;
		cout << "\nID: " << id;
		cout << "\nScore: " << score ;
	}
};

int main()
{
	int id, n;
	cout << "Enter number of participants: " ;
	cin >> n;
	participant p[3]; 
	fstream file;
	int i;

	file.open("participant.dat", ios :: out); // open file for writing
    cout << "\nWriting Participant information to the file :- " << endl;
    cout << "\nEnter Details of "<< n << " Participants to the File :- " << endl;

	for (i = 0; i < n; i++)
	{
    	p[i].input();
    	file.write((char*)&p[i], sizeof(p[i]));
    }

	file.close(); 

	file.open("participant.dat", ios :: in | ios::binary); // open file for reading
	
	for(i=0; i<n; i++)
	{
		file.read((char*)&p[i], sizeof(p[i]));
	}
	cout << " Enter ID of participant to show data: ";
	cin >> id;
	for(i=0; i<n; i++)
	{
		p[i].output(id);
	}

	file.close(); 
	
	cout << "\n\n***Highest score***\n";
	int max_score = p[n].MAX( p );
	cout <<p[max_score].name  << " has highest score, which is "<< p[max_score].score;
	
	return 0;
}

