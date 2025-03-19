/*2. (calArea1) Write three overloaded functions calArea() in C++ to calculate the area of
a square, a rectangle and a trapezoid. The detailed math equations are as follows.
a) The area of a square:
where s is the side length of the square.
b) The area of a rectangle:
where l is the length of the rectangle and w is the width of the rectangle.
c) The area of a trapezoid:
where b1 and b2 are the top and bottom base lengths, and h is the height.
Suppose that all the function parameters of calArea() are integers. Below is the main
function for you to test your implementations. Note: the main function below assumes that the
users will NOT input an invalid type of data*/
#include <string.h>
#include <iostream>
using namespace std;

// Area of a square A = s^2
int calArea (int side){
    return side * side;
}
// Area of a rectangle A = length x width
int calArea (int length, int width){
    return length * width;
}
// Area of a trapezoid A = 1/2*(b1+b2)*h
float calArea (int b1, int b2, int height){
    return (b1 + b2) * (height/2);
}

int main() {
    int choice;

    while (true) {
        // Display menu options
        cout << "\nChoose an option:\n";
        cout << "1 - Square\n";
        cout << "2 - Rectangle\n";
        cout << "3 - Trapezoid\n";
        cout << "Other - Exit\n";
        cout << "Enter your choice (int): ";
        cin >> choice;

        if (choice == 1) {
            // Square
            int side;
            cout << "Enter the side length of the square (int): ";
            cin >> side;
            cout << "Area of Square: " << calArea(side) << endl;
        }
        else if (choice == 2) {
            // Rectangle
            int length, width;
            cout << "Enter the length and width of the rectangle (int): ";
            cin >> length >> width;
            cout << "Area of Rectangle: " << calArea(length, width) << endl;
        }
        else if (choice == 3) {
            // Trapezoid
            int base1, base2, height;
            cout << "Enter the two bases and height of the trapezoid (int): ";
            cin >> base1 >> base2 >> height;
            cout << "Area of Trapezoid: " << calArea(base1, base2, height) << endl;
        }
        else {
            // Exit program
            cout << "Exiting program..." << endl;
            break;
        }
    }

    return 0;
}
