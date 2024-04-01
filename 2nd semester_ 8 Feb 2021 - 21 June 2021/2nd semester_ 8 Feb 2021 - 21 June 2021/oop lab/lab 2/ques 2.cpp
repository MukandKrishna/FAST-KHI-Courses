#include<iostream>
using namespace std ;

float feetAndInchesToMetersAndCent(float feet , float inches)
	{
		float fmeter , fcm , imeter ,icm;
						
		fmeter = feet * 0.308 ;
		fcm = feet * 30.48 ;
		
		imeter = inches * 0.0254 ;
		icm =  inches * 2.54 ;
		
		cout << "feet to meter is : " << fmeter  << endl  ;
		cout << "feet to centimeter is : "  << fcm << endl ;
		
		cout << "inches to meter is : " << imeter << endl ;
		cout << "inches to centimeter is : " << icm << endl ;

	}
	
	
float metersAndCentTofeetAndInches(float meter, float cm ) 
	{
		
		float mfeet , minches , cfeet , cinches ;		

		mfeet = meter * 3.28084 ;
		minches = meter  * 39.3701 ;
		
		cfeet = cm * 0.0328084;
		cinches = cm * 0.393701;
		
		cout << "meter to feet is  : " << mfeet << endl;
		cout << "meter to inches is : " << minches << endl;
		
		cout << "centimeter to feet is  : " << cfeet << endl;
		cout << "centimeter to inches is : " << cinches << endl <<  endl;
		
	}

int main()

{
	float meter , centimeter , inches , feet ;
	
	cout << "enter the value of meter : " << endl;
	cin >> meter ;
	cout << "enter the value of centimeter : " <<  endl;
	cin >> centimeter ;
	
	metersAndCentTofeetAndInches( meter ,  centimeter) ; 
	
	cout << "enter the value of feet :  " <<  endl ;
	cin >> feet ;
	
	cout << "enter the value of  inches : " << endl ;
	cin >> inches ;
	
	feetAndInchesToMetersAndCent( feet ,  inches );

}
