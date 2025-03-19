/*1. (Valid Input Data Type) [5 Marks] In Q2 and Q4 of Tutorial 1, we assume the users will
always input the correct type of data we requested. But this is actually not true in real
world. Write a C++ program to ask users to input student information, including name
(char []), student ID (int) and math mark (float). You need to check if the user
input the correct type of data, i.e., int and float. More specifically,

• If we want users to input a number (int or float), but they input non-digit
characters, then your program should keep requesting the data until they provide the
appropriate inputs;

• If we expect an integer, but users input “23#”, it is still regarded as a valid user input,
as cin in C++ can still read “23” correctly from the input stream;

• You do not need to consider whether the input is semantically meaningful, for
example, a negative student ID, a negative math mark, a student name like
“#$wang”.

The function prototypes for getting valid int input and float input are as follows:
float getValidFloat();
int getValidInt(); */

#include <iostream>
#include <string.h>
#include <limits>
using namespace std;
// Function to get a valid int input
int getValidInt() {
// TO-DO: Write Your Code Here
    int value;
    while (true) {
        if (cin >> value){
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return value;
        }
        else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Inalid input! Please enter a valid float number: ";
        }
    }
}
// Function to get a valid float input
float getValidFloat() {
// TO-DO: Write Your Code Here
    float value;
    while(true){
        if (cin >> value){
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return value;
        }
        else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a valid float number: ";
        }
    }
}
int main() {
    char name[50]; // Student name
    int studentID; // Student ID
    float mathMark; // Math mark
    while (true) {
        // Get student name
        cout << "Enter student name (or enter '#' to exit): ";
        cin.getline(name, 50);
        // Check if user wants to exit
        if (strcmp(name, "#") == 0) {
        break;
        }
        // Get student ID
        cout << "Enter student ID (integer): ";
        studentID = getValidInt();
        // Get math mark
        cout << "Enter math mark (float): ";
        mathMark = getValidFloat();
        // Display student information
        cout << "\nStudent Information:\n";
        cout << "Name: " << name << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Math Mark: " << mathMark << endl;
        cout << "-------------------------\n";
    }
    cout << "Program exited successfully." << endl;
    return 0;
}