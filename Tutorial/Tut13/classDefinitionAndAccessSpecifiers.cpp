/*1. (Class Definition and Access Specifiers) Suppose we need to develop a system to
manage student records in a university. The foundation of such a system is to implement
a Student class with the following members.

    • Private members
        o string name: the name of the student
        o int age: the age of the student
        o double gpa: the GPA of the student
    • Public members
        o A constructor that initializes the name, age and gpa
        o A method displayDetails() that prints out the student details
        o Getters – return private member values
            § getName()
            § getAge()
            § getGPA()
        o Setters – modify private member values
            § setName(string newName)
            § setAge(int newAge)
            § setGPA(double newGPA)*/

#include <iostream>
#include <string>

class Student {
private: // TODO: define the private members here
    std::string name;
    int age;
    double gpa;

public:
    // Constructor
    Student(std::string studentName, int studentAge, double studentGPA) {
        // TODO: Define the constructor
        name = studentName;
        age = studentAge;
        gpa = studentGPA;
    }

    // Display function
    void displayDetails() const {
        std::cout << "Student Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "GPA: " << gpa << std::endl;
    }

    // Getters
    // TODO: Implement the getters here
    std::string getName(){
        return name;
    }

    int getAge(){
        return age;
    }

    double getGPA(){
        return gpa;
    }

    // Setters
    // TODO: Implement the setters here
    void setName(std::string newName){
        name = newName;
    }

    void setAge(int newAge){
        age = newAge;
    }

    void setGPA(double newGPA){
        gpa = newGPA;
    }
};

int main() {
    // Creating Student objects
    Student student1("Alice", 20, 3.8);
    Student student2("Charlie", 19, 3.5);

    // Display details of students
    std::cout << "Initial Student Details:\n";
    student1.displayDetails();
    std::cout << std::endl;
    student2.displayDetails();
    std::cout << std::endl;

    // Modify student1 details using setters
    student1.setName("Bob");
    student1.setAge(22);
    student1.setGPA(3.9);

    // Display updated details
    std::cout << "Updated Student Details:\n";
    student1.displayDetails();

    return 0;
}
            