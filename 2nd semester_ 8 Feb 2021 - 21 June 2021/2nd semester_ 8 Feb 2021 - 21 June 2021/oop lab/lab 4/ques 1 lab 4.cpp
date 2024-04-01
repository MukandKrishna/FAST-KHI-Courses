#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
class daytype{
	private:
		const string days[7]= {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
		const string actualdays[7]= {"Monday","Tuesday","Wednesday","Thrusday","Friday","Saturday","Sunday"};
	public:
	   int addday(int ad,int no){
		if(ad>7)
		ad = ad % 7;
	   	no = ad + no + 1;
		if(no>7 && no!= 7)
		no = no - 7 ;
		return no-1;
		}
	   
	   int printday(string input){
			int check = 0,i;
			for(i=0;i<7;i++){
				if( days[i].compare(input) == 0){
				check = 1;
				cout<<"The entered day is: "<<actualdays[i];
				return i;
							}
			}
			if(check == 0){
				cout<<"\nInput is invalid";
				exit(0);
			}
			
		}
		
		string prvday(int prevday){
			if( prevday != 0){
				return actualdays[prevday-1];
			}
			else{
				return actualdays[6];
			}
		}
		
		string nxtday(int nxtday){
			return actualdays[nxtday];
			}
		
	   
	   
	   string setday(){
	   	string day;
	   cin  >> day;
       return day;
	   }
	   
	   daytype(){
	   string d;
	   int add,dayno;
       cout <<"Please enter 'Mon' for Monday"<< endl;
       cout <<"Please enter 'Tue' for Tuesday"<< endl;
       cout <<"Please enter 'Wed' for Wednesday"<< endl;
       cout <<"Please enter 'Thu' for Thursday"<< endl;
       cout <<"Please enter 'Fri' for Friday"<< endl;
       cout <<"Please enter 'Sat' for Saturday"<< endl;
       cout <<"Please enter 'Sun' for Sunday"<< endl;
       cout <<"Day: ";
	   d = setday();
	   dayno = printday(d);
	   cout<<"\nThe previous day from the entered day is: "<<prvday(dayno);
	   cout<<"\nThe next day from the entered will be "<<nxtday(dayno+1);
	   cout <<"\nEnter the no of days you want to add: ";	
	   cin>>add;
	   cout<< "The day after adding is "<< actualdays[addday(add,dayno)];
	   }		
};
int main()
{
	daytype obj1;
}

