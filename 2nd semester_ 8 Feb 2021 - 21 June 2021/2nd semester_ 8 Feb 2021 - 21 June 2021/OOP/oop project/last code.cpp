#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<cstring>

using namespace std;
class Person {
	string name;
	string father_name;
public:
	Person(string name, string fathername);
	Person();
	void setName(string name);
	string getName();
	void setFatherName(string fathername);
	string getFatherName();
	virtual void display() = 0;		
};
class Subjects{
    public:
        string name;
        double assignment_marks = 0;
        double mid1 = 0;
        double mid2 = 0;
        double finals = 0;
        double project = 0;
        double total = 0; 
        int credithours = 0;
        string subjteacher;
        Subjects();
        Subjects(string aname);
        string getname();
        void addallmarks();
        void configuremarks();
        void setsubjectteacher(string ateacher);
        void setmarks();
        double givegpa();
        double getmarks();
        void setcredithours();
        int getcredithours();
};

class Student:public Person, public Subjects{
    protected:
        string id;
        string section;
        string username;
        string password;
        double fees;
        vector <Subjects> subs;
        vector <string> semester;
    public:
        vector <string> attendance;
        Student();
        Student(string aname, string afathername, string aid, string section);
        void setid(string aid);
        string getid();
        void setusername(string aname);
        string getusername();
        void setpassword(string apassword);
        string getpassword();
        void setsubjects();
        void checkmarks();
        void checkattendance();
        void payfees();
        bool login(string ausername, string apassword);
        void calculategpa();
        void checkgpa(int total, double totalmarks);
        void setfees();
        void setsemester(string number);
        void startsemester();
        void setsection(string asection);
        string getsection();
        void display();
};
class Teacher : public Person{
    protected:
        string username;
        string password;
        string id;
        double salary;
        vector <string> courses;
    public:
        Teacher(string aname, string afather_name, string aid, double asalary);
        void setusername(string ausername);
        void setpassword(string apassword);
        void setid(string aid);
        void setsalary(double amount);
        string getusername();
        string getpassword();
        string getid();
        double getsalary();
        void markattendence(Student &s);
        void assignmarks(Student &s);
        void setcourses();
        void showcourses();
        bool login(string ausername, string apassword);
        void display();
};
class Admin{
    private:
        string username = "Bahadur";
        string password = "1234";
    public:
        bool login(string ausername, string apassword){
            if(username == ausername){
                if(password == apassword)
                    return true;
                else return false;
            }
            else return false;
        }
};

int main(void)
{
    int select;
    string username;
    Student studs[100];
    string password;
    vector <Student> students;
    vector <Teacher> teachers;
    Admin bahadur;
    int x = 0;
    while(x == 0){
    cout << "1.Admin\n2.Teacher\n3.Student" << endl;
    cout << "Select: ";
    cin >> select;
    if(select == 1){
        cout << "Enter Username: ";
        cin >> username;
        cout << "Enter Password: ";
        cin >> password;
        if(bahadur.login(username, password)){
            int x =0;
            int choice_now;
            while(x==0){
                cout << "1.Add Student" << endl;
                cout << "2.Add Teacher" << endl;
                cout << "3.SAve Teacher Data"<< endl;
                cout << "4.Save Student Data" << endl;
                cout << "5.Logout" << endl;
                cout << "Select: ";
                cin.clear();
                cin >> choice_now;
                if(choice_now == 1)
				{
                    string name, id, fathername, section;
                    cout << "Enter Student Name: ";
                    cin >> name;
                    cout << "Enter Student Id";
                    cin >> id;
                    cout << "Enrer Fathername: ";
                    cin >> fathername;
                    cout << "Enter Section: ";
                    cin >> section;
                    Student s(name, fathername, id, section);
                    students.push_back(s);
                }
                else if(choice_now == 2){
                    string name, id, fathername;
                    double salary;
                    cout << "Enter Teacher Name: ";
                    cin >> name;
                    cout << "Enter Teacher Id";
                    cin >> id;
                    cout << "Enrer Fathername: ";
                    cin >> fathername;
                    cout << "Enter Salary: ";
                    cin >> salary;
                    Teacher t(name, fathername, id, salary);
                    teachers.push_back(t);
                }
                else if(choice_now == 3){
                    cout << "Working..........";
                    ifstream file("students.txt");
                    int i = 0;
                    int x = 1;
                        string name, father_name, id, section;
                        while(x == 1){
                            file >> name;
                            file >> father_name;
                            file >> id;
                            file >> section;
                            if(file.eof())
                                break;
                            studs[i].setName(name);
                            studs[i].setFatherName(father_name);
                            studs[i].setid(id);
                            studs[i].setsection(section);
                            i++;    // next time the object will be stored in the next array
                        }
                }
                else if(choice_now == 5){
                    x = 1;
                    break;
                }
            }
        }
        else
            cout << "Wrong Credentials";
    }
    else if(select == 2){
        cout << "Enter Username: ";
        cin >> username;
        cout << "Enter Password: ";
        cin >> password;
        for(int i =0; i<teachers.size(); i++){
            if(teachers[i].login(username, password)){
                cout << "Functions go Here";
            }
            else
                cout << "Wrong Credentials";
        }
    }
    else if(select == 3){
        cout << "Enter Username: ";
        cin >> username;
        cout << "Enter Password: ";
        cin >> password;
        for(int i =0; i<students.size(); i++){
            if(students[i].login(username, password)==true){
                int x = 0;
                int select;
                while(x = 0){
                    cout << "Functions " << endl;
                    cout << "1.Set Name"<< endl;
                    cout << "2.Set Pass" << endl;
                    cout << "3.Set Id" << endl;
                    cout << "4.Set Fathername" << endl;
                    cout << "5.Check Attendance" << endl;
                    cout << "6.Check Gpa" << endl;
                    cout << "7.Calculate Gpa" << endl;
                    cout << "8.Set Semester" << endl;
                    cout << "9. Check Marks" << endl;
                    cout << "10. Pay Fees" << endl;
                    cout << "11.Logout" << endl;
                    cout << "12. Save Data" << endl;
                    cout << "Select: ";
                    if(select == 1){
                        cout << "Enter Name: ";
                        string name;
                        cin >> name;
                        students[i].setName(name);
                    }
                    else if(select == 2){
                        cout << "Enter Pass: ";
                        string pass;
                        cin >> pass;
                        students[i].setpassword(pass);
                    }
                    else if(select == 3){
                        cout << "Enter Id";
                        string id;
                        cin >> id;
                        students[i].setid(id);
                    }
                    else if(select == 4){
                        cout << "Enter Father Name: ";
                        string name;
                        cin >> name;
                        students[i].setFatherName(name);
                    }
                    else if(select == 5)
                        students[i].checkattendance();
                    else if(select == 6)
                        students[i].checkgpa(students[i].getcredithours(), students[i].total);
                    else if(select == 7)
                        students[i].calculategpa();
                    else if(select == 8){
                        string number;
                        cout << "Enter semester Number: ";
                        cin >> number;
                        students[i].setsemester(number);
                    }
                    else if(select == 9)
                        students[i].checkmarks();
                    else if(select == 10){
                        students[i].payfees();
                    }
                    else if(select == 11){
                        x = 1;
                        break;
                    }
                    else
                        cout << "Invalid Selection";
                }
            }
            else
                cout << "Wrong Credentials";
        }
    }
    }
    return 0;
}

Person::Person(string name, string fathername)
{
	this->name = name;
	this->father_name = fathername;
}
Person::Person()
{
	this->name = "";
	this->father_name = "";
}
void Person::setName(string name)
{
	this->name = name;
}
string Person::getName()
{
	return name;
}
void Person::setFatherName(string fathername)
{
	this->father_name = fathername;
}
string Person::getFatherName()
{
	return father_name;
}
Subjects::Subjects(){}

Subjects::Subjects(string aname){
    string teacher;
    name = aname;
    cout << "Enter Teacher: ";
    cin >> teacher;
    setsubjectteacher(teacher);
}
string Subjects::getname(){
    return name;
}
void Subjects::addallmarks(){
    total = assignment_marks + mid1 + mid2 + finals + project;
    configuremarks();
}
void Subjects::configuremarks(){
    if(total > 100){
        total = total - 10;
    }
}
void Subjects::setmarks(){
    cout << "Enter Assignment Marks: ";
    cin >> assignment_marks;
    cout << "Enter Mid 1: ";
    cin >> mid1;
    cout << "Enter Mid 2: ";
    cin >> mid2;
    cout << "Enter Project Marks: ";
    cin >> project;
    cout << "Enter Finals Marks: ";
    cin >> finals;
    addallmarks();
}
void Subjects::setsubjectteacher(string ateacher){
    subjteacher = ateacher;
}
double Subjects::getmarks(){
    cout << "Total marks are: " << total << endl;
    return total;
}
double Subjects::givegpa(){
    return total/100 * 100;
}
void Subjects::setcredithours(){
    cout << "How much credit hours the subject is: ";
    cin >> credithours;
}
int Subjects::getcredithours(){
    return credithours;
}

// Student Class From Here
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Student::Student(){

}
Student::Student(string aname, string afathername, string aid, string asection){
    setName(aname);
    setFatherName(afathername);
    startsemester();
    setsubjects();
    id = aid;
    section = asection;
    username = aname;
    password = "1234";
}
bool Student::login(string ausername, string apassword){
    if(username == ausername){
        if(password == apassword)
            return true;
        else return false;
    }
    else return false;
}
void Student::startsemester(){
    string sem = "First";
    semester.push_back(sem);
    setfees();
}
void Student::setsemester(string number){
    semester.clear();
    semester.push_back(number);
}
void Student::setid(string aid){
    id = aid;
}
string Student::getsection(){
    return section;
}
void Student::setsection(string asection){
    section = asection;
}
void Student::setusername(string aname){
    username = aname;
}
void Student::setpassword(string apassword){
    password = apassword;
}
string Student::getid(){
    return id;
}
string Student::getusername(){
    return username;
}
string Student::getpassword(){
    return password;
}
void Student::checkattendance(){
    for(int i=0; i<attendance.size(); i++){
        cout << "Day " << i+1 << ": " << attendance[i] << endl;
    }
}
void Student::calculategpa(){
    cout << "The accurate GPA will be shown when all marks are added." << endl;
    double totat = 0;
    int totalcredits = 0;
    for(int i=0; i<subs.size(); i++){
        total = total + subs[i].givegpa(); 
        totalcredits = totalcredits + subs[i].getcredithours();
    }
    checkgpa(totalcredits, total);
}
void Student::checkgpa(int totalcredits, double totalmarks){
    double gpa = totalmarks/totalcredits;
    cout << "Your gpa is: " << gpa << endl;
}
void Student::checkmarks(){
    string subname;
    cout << "Enter the name of Suject: ";
    cin >> subname;
    for(int i=0; i<subs.size(); i++){
        if(subname == subs[i].getname()){
            subs[i].getmarks();
        }
        else
            cout << "No such Subject" << endl;
    }
}
void Student::payfees(){
    double amount;
    cout << "Your fees is: " << fees << endl;
    cout << "Enter Amount: ";
    cin >> amount;
    fees = fees - amount;
    if(fees == amount){
        cout << "Fees Paid.";
    }
    else
        cout << "Remaining: " << fees << endl;
}
void Student::setsubjects(){
    string name;
    cout << "Enter Name of Subject: ";
    cin >> name;
    Subjects s(name);
    subs.push_back(s);  // adding subject to the vector
}
void Student::setfees(){
    for(int i=0; i<subs.size(); i++){
        fees = fees + subs[i].getcredithours()*8000;  // credithours
    }
}
void Student::display(){
    cout << "Name: " << getName() << endl;
    cout << "Father name:" << getFatherName() << endl;
    cout << "Id: " << getid() << endl;
    cout << "Section: " << getsection() << endl;
    cout << "Courses: " << endl;
    for(int i=0; i<subs.size(); i++){
        cout << i+1 << ". " << subs[i].getname() << endl;
    }

}
/// Teacher Class From here
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Teacher::Teacher(string aname, string afathername, string aid, double asalary){
    setFatherName(afathername);
    setName(aname);
    setid(aid);
    setsalary(asalary);
}
void Teacher::setsalary(double asalary){
    salary = asalary;
}
void Teacher::setid(string aid){
    id = aid;
}
void Teacher::setpassword(string apassword){
    password = apassword;
}
void Teacher::setusername(string ausername){
    username = ausername;
}
double Teacher::getsalary(){
    return salary;
}
bool Teacher::login(string ausername, string apassword){
    if(username == ausername){
        if(password == apassword)
            return true;
        else return false;
    }
    else return false;
}
string Teacher::getusername(){
    return username;
}
string Teacher::getpassword(){
    return password;
}
string Teacher::getid(){
    return id;
}
void Teacher::setcourses(){
    string course;
    int n;
    cout << "How many courses do want to add: ";
    cin >> n;
    for(int i=0; i<n; i++){
        cout << "Enter course " << i+1 << " ";
        cin >> course;
        courses.push_back(course);
    }
}
void Teacher::showcourses(){
    for(int i=0; i<courses.size(); i++){
        cout << i + 1 << ". " << courses[i] << endl;
    }
}
void Teacher::markattendence(Student &s){
    string attend;
    cout << "P for Present and A for Absent || First Write Data then P or A" << endl;
    cout << "Attendence: ";
    cin >> attend;
    s.attendance.push_back(attend);
}
void Teacher::assignmarks(Student &s){
    s.setmarks();
}
void Teacher::display(){
    cout << "Name: " << getName() << endl;
    cout << "Father name:" << getFatherName() << endl;
    cout << "Id: " << getid() << endl;
    cout << "Salary: " << getsalary() << endl;
    cout << "Courses: " << endl;
    for(int i=0; i<courses.size(); i++){
        cout << i+1 << ". " << courses[i] << endl;
    }
}
