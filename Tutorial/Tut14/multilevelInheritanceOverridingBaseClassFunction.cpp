/*2. (Multilevel Inheritance and Overriding a Base Class Function) Extend the Student
class in Question 1 to create a GraduateStudent class, which has an additional
attribute researchTopic. The details of class GraduateStudent (inherits from
Student) are as follows:

• New attribute: string researchTopic
• Constructor: GraduateStudent(string n, int a, int id, string
topic)
• Function: void displayInfo() (overrides the base class function)

Your tasks are as follows:
1) Implement the Person and Student class within the given starting code file,
i.e., implement their member functions within the class definition, given that
the two classes are simple.

2) Update the displayInfo() function of the Person and Student class as a
virtual function, so that the class GraduateStudent can correctly override
this function.

3) Finish the definition of the class GraduateStudent to ensure it can be used
and run correctly by following the sample output.*/

#include <iostream>
#include <string>
using namespace std;


// TODO: Update your implementation for Student Class and Person Class in Question 1 
//       Declare displayInfo() as virtual 
class Person {
    protected:
        // TODO: Define the member variables (name and age, which are string and integer)
        string name;
        int age;
    
    public:
        // Constructor declaration
        Person(string n, int a) : name(n), age(a) {}
    
        // Function to display person details
        virtual void displayInfo() const {
            cout << "Name: " << name << ", Age: " << age;
        }
};
    

class Student : public Person {
private:
    // TODO: Define the additional attribute (studentID), studentID is an integer
    int studentID;

public:
    // Constructor declaration
    Student(string n, int a, int id) : Person(n, a), studentID(id) {}

    // Function to display student details (redefine base class function)
    virtual void displayInfo() const {
        cout << "Name: " << name << ", Age: " << age << ", Student ID: " << studentID; 
    }
};



// Derived class: GraduateStudent (inherits from Student)
class GraduateStudent : public Student {
private:
    // TODO: Define the additional attribute (researchTopic)
    string researchTopic;

public:
    // TODO: Implement the Constructor
    GraduateStudent(string n, int a, int id, string topic) 
    : Student(n, a, id), researchTopic(topic) {}
        

    // TODO: Implement displayInfo() (Note: it is virtual function in Student)
    virtual void displayInfo() const override {
        Student::displayInfo();
        cout << ", Research Topic: " << researchTopic;
    }
};


int main() {
    GraduateStudent gs1("Alice", 25, 56789, "Machine Learning");
    gs1.displayInfo();
    cout<<endl;

    Student* stu = &gs1;
    stu->displayInfo();
    cout<<endl;

    Person* per = &gs1;
    per->displayInfo();

    return 0;
}
