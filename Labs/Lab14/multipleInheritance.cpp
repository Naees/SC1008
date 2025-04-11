/*1. (Multiple Inheritance) [10 marks] Create two base classes—Sports and
Academics—and a derived class StudentAthlete that inherits from both. The Sports
class will store sports-related information, and the Academics class will store academic
information. The derived StudentAthlete class will combine these with additional details
about the student, such as their name, age, and studentID. The members you should
define in each class is as follows:

    • Class Sports
        o Attribute: string sport
        o Constructor: Sports(string s)
        o Destructor: ~Sports()
        o Display sport info function: void displaySports() const
    • Class Academics
        o Attribute: float gpa
        o Constructor: Academics(float g)
        o Destructor: ~Academics()
        o Display academic info function: void displayAcademics() const
    • Class StudentAthlete inherits from the above two classes
        o Attributes: string name;
        int age;
        int studentID;
        o Constructor: StudentAthlete(string s, float g, string n, int a,
        int id)
        o Destructor: ~StudentAthlete()
        o Display information function: displayInfo()
You are asked to use the following starting code, fill the missing parts, and print out the
sample output*/

///////// Student Info/////////
//
//           Your Name: Er Jia Liang Sean
//      Your NTU Email: erji0002@e.ntu.edu.sg
//
//
//
#include <iostream>
#include <string>
using namespace std;

// Base class: Sports
class Sports {
protected:
    string sport; // sport name
public:
    // TO-DO 1: Implement the constructor and descructor
    Sports(string s) : sport(s) {
        cout << "Sports constructor!" << endl;
    }
    ~Sports() {
        cout << "Sports destructor!" << endl;
    }

    // Display sports information
    void displaySports() const {
        cout << "Sport: " << sport << endl;
    }
};

// Base class: Academics
class Academics {
protected:
    float gpa; // GPA
public:
    // TO-DO 2: Implement the constructor and destructor
    Academics(float g) : gpa(g) {
        cout << "Academic constructor!" << endl;
    }
    ~Academics() {
        cout << "Academic destructor!" << endl;
    }

    // Display academic information
    void displayAcademics() const {
        cout << "GPA: " << gpa << endl;
    }
};

// TO-DO 3: Implement the Derived class: StudentAthlete, which inherits from both Academics and Sports
class StudentAthlete : public Sports, public Academics {
private:
    string name;
    int age;
    int studentID;
public:
    // Constructor: Initializes both base classes and member variables.
    StudentAthlete(string s, float g, string n, int a, int id) 
    : Sports(s), Academics(g), name(n), age(a), studentID(id) {
        cout << "StudentAthlete constructor!" << endl;
    }
    // Destructor: Outputs message.
    ~StudentAthlete() {
        cout << "StudentAthlete destructor!" << endl;
    }
    // Display academic information
    void displayInfo() const {
        cout << "Name: " << name << ", Age: " << age << ", Student ID: " << studentID << endl;
        cout << "Sport: " << sport << endl;
        cout << "GPA: " << gpa << endl;
    }
};

int main() {
    //Create a StudentAthlete instance
    StudentAthlete stu("Basketball", 3.8, "Bob", 21, 1001);

    // Display all the information
    cout<<endl;
    stu.displayInfo();
    cout<<endl;

    // Test code to demonstrate multiple inheritances
    stu.displaySports();
    stu.displayAcademics();
    cout<<endl;
}
