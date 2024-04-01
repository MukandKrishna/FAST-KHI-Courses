#include<iostream>
using namespace std ;
int main()
{
	char MV[20] = "Journey to Mars" ;
	float atp , ctp , nats , ncts , nts , pgmd , aa , ca , ga , ad , ns ; 
	atp = 5 ;
	ctp = 2.267 ;
	nats = 1150 ;
	ncts = 1500 ;
	nts = nats + ncts ;
	
	aa = nats*atp ;
	ca = ctp * ncts ;
	
	ga = ca + aa ;
	
	pgmd = 10.00;
	
	ad = ga / pgmd ;
	
	ns = ga - ad ;
	
	cout << "Movie name:.......................\t" << MV << endl ;
	cout << "Number of Tickets Sold:..............\t" << nts << endl ;
	cout << "Gross Amount:......................  $\t" << ga << endl ;
	cout<< "Percentage of Gross Amount Donated:\t " << pgmd << "%" << endl ;
	cout << "Amount Donated:.................... $\t" << ad << endl ;
	cout << "Net Sale:.......................... $\t" << ns << endl ;   
}
