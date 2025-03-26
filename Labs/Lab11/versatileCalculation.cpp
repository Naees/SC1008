/*2. (Versatile Calculation) [5 Marks] Write a C++ function template called calculate(),
which takes 3 parameters. The first two parameters are numbers of the same type (int
or float). The third parameter is a character (i.e., char) representing the operation as
given below:
● `+’ for addition
● `-’ for subtraction
● `*’ for multiplication
● `/’ for division
The function should return the result of the operation. Also, you should handle the edge case for
division by zero by returning 0 if the divisor is 0 (for any numeric type). A function isZero()is
given for your to check if the divisor is 0. When the divisor is 0, the program should output an
error message and return 0.
The main function is given below for your testing. Note: For simplicity, we assume users
will not input invalid type of data or operator here. */

#include <iostream>
#include <cmath>
using namespace std;
bool isZero(float num, float epsilon = 1e-6) 
{
return fabs(num) < epsilon; // Check if num is very close to 0
}
template <typename T>
T calculate(T a, T b, char op){
    switch(op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            // reminder to self: check FP_ documentation for more details
            if (fpclassify(b) == FP_ZERO){
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
            return a / b;
        default:
            return 0;
    }
}

int main() 
{
cout << "Addition (10 + 5): " << calculate(10, 5, '+') << endl;
cout << "Subtraction (10.5 - 3.2): " << calculate(10.5, 3.2, '-') << endl;
cout << "Multiplication (4 * 2): " << calculate(4, 2, '*') << endl;
cout << "Division (10 / 2): " << calculate(10, 2, '/') << endl;
cout << "Division (10.6 / 0.0): " << calculate(10.6, 0.0, '/') << endl;
cout << "Division by zero (10 / 0): " << calculate(10, 0, '/') << endl;
return 0;
}