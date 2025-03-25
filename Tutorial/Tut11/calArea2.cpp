/*(calArea2) Question 2 assumes that the input of calArea()can only be integers, which
is actually not true in real world. You are asked write function templates to calculate the
area of squares, rectangles and trapezoids, where the input parameter type can be any
types of numbers, e.g., int, double, float, long.
Below is the main function for you to test your implementations.*/
#include <iostream>
using namespace std;

// TO-DO: Write your functions here
template <typename T>
T calArea(T side){
    return side * side;
}
template <typename T>
T calArea(T length, T height){
    return length * height;
}
template <class T>
T calArea(T b1, T b2, T height){
    return (b1 + b2) * (height/2);
}


int main() {
    // Test cases
    int side1 = 5;
    cout << "Area of Square: " << calArea(side1) << endl;
    double side2 = 11.11;
    cout << "Area of Square: " << calArea(side2) << endl;

    int length1 = 10, width1 = 20;
    cout << "Area of Rectangle: " << calArea(length1, width1) << endl;
    float length2 = 23.4, width2 = 10.8;
    cout << "Area of Rectangle: " << calArea(length2, width2) << endl;

    long b1 = 20, b2 = 40, height = 10;
    cout << "Area of Trapezoid: " << calArea(b1, b2, height) << endl;

    return 0;
}
