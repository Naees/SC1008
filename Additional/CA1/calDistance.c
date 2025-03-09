/*calDistance
Write a C program that accepts four decimal values representing the coordinates of two
points, i.e. (x1, y1) and (x2, y2), on a plane, and calculates and displays the distance
between the points 

Your program should be implemented using functions. Provide two versions of the
function for calculating the distance: (a) one uses call by value only for passing
parameters; and (b) the other uses call by reference to pass the result to the calling
function.
The function prototypes are given below:
void inputXY(double *x1, double *y1, double *x2, double *y2);
void outputResult(double dist);
double calDistance1(double x1, double y1, double x2, double y2);
void calDistance2(double x1, double y1, double x2, double y2,
double *dist);
*/

#include <stdio.h>
#include <math.h>
void inputXY(double *x1, double *y1, double *x2, double *y2);
void outputResult(double dist);
double calDistance1(double x1, double y1, double x2, double y2);
void calDistance2(double x1, double y1, double x2, double y2, double *dist);
int main()
{
    double x1, y1, x2, y2, distance=-1;
    inputXY(&x1, &y1, &x2, &y2);
    distance = calDistance1(x1, y1, x2, y2);
    printf("calDistance1(): ");
    outputResult(distance);
    calDistance2(x1, y1, x2, y2, &distance);
    printf("calDistance2(): ");
    outputResult(distance);
    return 0;
// call by reference
// call by value
// call by reference
// call by value
}
void inputXY(double *x1, double *y1, double *x2, double *y2)
{
    /* Write your code here */
    printf("Input x1 y1 x2 y2:\n");
    scanf("%lf %lf %lf %lf", x1, y1, x2, y2);
}
void outputResult(double dist)
{
    /* Write your code here */
    printf("%.2lf\n",dist);
}
double calDistance1(double x1, double y1, double x2, double y2)
{
    /* Write your code here */
    double xValue = x2 - x1;
    xValue = xValue * xValue;
    double yValue = y2 - y1;
    yValue = yValue * yValue;
    return sqrt(xValue + yValue);
}
void calDistance2(double x1, double y1, double x2, double y2, double *dist)
{
    /* Write your code here */
    double xValue = x2 - x1;
    xValue = xValue * xValue;
    double yValue = y2 - y1;
    yValue = yValue * yValue;
    *dist = sqrt(xValue + yValue);
}