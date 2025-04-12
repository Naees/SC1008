/*1. (Inheritance and Redefining a Base Class Function) Create a base class Person
with attributes for name and age. Then, create a derived class Student that adds a
studentID attribute.
Header/Source Separation: Define the class interfaces in header files (.h) with
include guards (or #pragma once) and implement the member functions in
separate source files (.cpp).
The details for members of the two classes are as follows:
Base Class Person
• Attributes:
- string name
- int age
• Constructor: Person(string n, int a)
• Function: void displayInfo() const
Derived Class Student (inherits from Person)
• Attribute: studentID
• Constructor: Student(string n, int a, int id)
• Function: void displayInfo() const (override the base class function*/

#include "Student.h"
#include <iostream>
using namespace std;

int main() {
    Student s1("Alice", 20, 12345);
    s1.displayInfo();
    cout<<endl;

    // Base class pointer points to the derived class object
    Person* p = &s1;
    p->displayInfo();

    return 0;
}
