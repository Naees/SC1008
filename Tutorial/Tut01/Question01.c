/*(linearSystem) Write a C program that computes the solutions for x and y in the linear
system of equations:
a1x + b1y = c 1
a2x + b2y = c 2

The solutions for x and y are given by:

x = (b2c1 - b1c2)/(a1b2 - a2b1)

y = (a1c2 - a2c1)/(a1b2 - a2b1)

The program reads in a 1, b1, c 1, a2, b2 and c 2, and then computes and prints the solutions.
In your program, if the denominator (a1b2 - a2b 1) of the above equations is zero, then it
prints an error message “Unable to compute because the denominator is zero!”.*/

#include <stdio.h>

int main()
{
    int a1, b1, c1, a2, b2, c2 = 0;
    float x, y;
    printf("Enter the values for a1, b1, c1, a2, b2, c2:\n");
    scanf("%d %d %d %d %d %d", &a1, &b1, &c1, &a2, &b2, &c2);
    int denominator = (a1*b2 - a2*b1);
    if (abs(denominator) != 0)
    {
        x = (float)(b2*c1 - b1*c2)/denominator;
        y = (float)(a1*c2 - a2*c1)/denominator;
        printf("x = %.2f and y = %.2f\n", x, y);
    }
    else
    {
        printf("Unable to compute because the denominator is zero!\n");
    }
    return 0;
}