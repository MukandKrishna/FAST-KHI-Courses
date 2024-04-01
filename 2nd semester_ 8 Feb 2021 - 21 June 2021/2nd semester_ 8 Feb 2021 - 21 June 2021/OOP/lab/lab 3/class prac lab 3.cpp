#include <iostream>
#include<string.h>
 using namespace std;

 // class definition
 class subject
 {
 public:
 /
 void displayMessage(string courseName )
 {
 cout << " Entered subject is: \n" << courseName<< "!"
 << endl;
 } // end function displayMessage
 }; // end class subject

 // function main begins program execution
  int main() {
// string of characters to store the course name
 subject sub; // create a subject object named sub
string nameOfCourse;
 // prompt for and input course name
  cout << "Please enter the course name:" << endl;
getline( cin, nameOfCourse ); 
 cout << endl; // output a blank line
sub.displayMessage( nameOfCourse );
 // call subject's displayMessage function
 // and pass nameOfCourse as an argument

 } 
 
 
 // member functions 
 
 #include <iostream>
using namespace std; 
class student 
{ 
   // public: 
    string name; 
    int id; 
      
    // printname is not defined inside class definition 
    void printname(); 
      
    // printid is defined inside class definition 
    void printid() 
    { 
        cout << "student id is: " << id; 
    } 
}; 
  
// Definition of printname using scope resolution operator :: 
void student::printname() 
{ 
    cout << "student name is: " << name;  
} 
int main() { 
      
    student obj1; 
    obj1.name = "zabc"; 
    obj1.id=15; 
      
    // call printname() 
    obj1.printname(); 
    cout << endl; 
      
    // call printid() 
    obj1.printid(); 
    return 0; 
}
