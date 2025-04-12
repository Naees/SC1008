#include "Student.h"
#include <iostream>
using namespace std;

// TODO: Implement Student class constructor and initialize studentID 
Student::Student(string n, int a, int id)
    : Person(n, a), studentID(id) {
        // StudentID = id;
}

void Student::displayInfo() const {
    // TODO: Output Student Information
    Person::displayInfo();

    cout << endl << "Student ID: " << studentID << endl;


}
