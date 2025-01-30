/*
Write a C program that reads in a positive number on height between 1 and 9, and prints
a pattern according to height. For example, if the height is 9, then the following pattern
will be printed. There is no need to check user input errors in your program.

*
**
***
****
*****
******
*******
********
*********

(Please take note that the star are right-aligned)
*/

#include <stdio.h>
int main(){
    int height = 0;

    printf("Enter the height:\n");
    scanf("%d", &height);
    printf("The pattern is:\n");

    for (int i = 1; i <= height; i++)
    {
        printf("%*s", height-i, "");
        for (int stars = 1; stars <= i; stars++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}