#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
class gpa
{
	private:
		float marks[26];
		float total[26];
		void getter();
		void calculate();
		int totalgpa();
		int fail = 0;
	public:
		gpa();
};

//================================
int gpa::totalgpa()
{
	int sum = 0,i;
	for(i=0;i<26;i++)
	{
		sum = sum + total[i];
	}
	sum = sum / 26;
	return sum;
}
//=================================
void gpa::calculate()
{	
	int i;
for(i=0;i<=25;i++)
{
	if(marks[i]<50){
		total[i]=0.0;
	}
	else if(marks[i]>=50&&marks[i]<54){
		total[i]=1.0;
	}
	else if(marks[i]>=54&&marks[i]<58){
		total[i]=1.33;
	}
	else if(marks[i]>=58&&marks[i]<62){
		total[i]=1.67;
	}
	else if(marks[i]>=62&&marks[i]<66)
	{
		total[i]=2.0;
	}
	else if(marks[i]>=66&&marks[i]<70){
		total[i]=2.33;
	}
	else if(marks[i]>=70&&marks[i]<74){
		total[i]=2.67;
	}
	else if(marks[i]>=74&&marks[i]<78){
		total[i]=3;
	}
	else if(marks[i]>=78&&marks[i]<82){
		total[i]=3.33;
	}
	else if(marks[i]>=82&&marks[i]<86)
	{
		total[i]=3.67;
	}
	else
		total[i]=4.0;	
	}
}
//===================================
void gpa::getter()
{
	int i;
	for(i=1;i<=26;i++)
	{
		cout<<"Marks of Credit Hour #"<<i<<": ";
		cin>>marks[i-1];
		while(marks[i-1]<0||marks[i-1]>100)
		{
			cout<<"INVALID MARKS! please enter again\nMarks of Credit Hour #"<<i<<": ";
			cin>>marks[i-1];
		}
		if(marks[i-1]<50)
		{
			fail = 1;
		}
	}
}
//===============================
gpa::gpa()
{
	getter();
	calculate();
	int t = totalgpa();
	cout<<"Your total gpa is: "<<t;
	if(t>=3.0 && fail == 0)
	{
		cout<<"\nCONGRATULATIONS! You are eligible for the Thesis.";
	}
	else if(t>=3.0 && fail == 1)
	{
		cout<<"\nSORRY! Your GPA is above 3.0 but You need to pass all subjects to get eligible for the Thesis.";
	}
	else
		cout<<"\nSORRY! better luck next time";
}
//==========================================main funtion

int main()
{
cout<<"Please enter the marks obtained in each of the 26 credit hours\n";
gpa user1;
}

