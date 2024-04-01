#include <iostream>
using namespace std;

class student 
{
  private:
    // Private attribute
    string name;
    int id;

  public:
    // Setter
    void setid(int i) {
      id = i;
    }
    // Getter
    int getid() {
      return id;
    }
     void setname(string n) {
      name = n;
    }
    // Getter
    string getname() {
      return name;
    }
};

int main() {
  student stud;
  stud.setname("aqsa");
  cout << stud.getname();
  return 0;
}

