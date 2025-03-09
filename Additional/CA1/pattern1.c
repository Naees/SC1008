/*pattern1
Write a C program that reads in a positive number on height between 1 and 9, and prints
a triangular pattern according to height. For example, if the height is 9, then the
following pattern will be printed. There is no need to check user input errors in your
program.*/

#include <stdio.h>
int main()
{
    int height = 0;
    int i, j;
    printf("Enter the height:\n");
    scanf("%d", &height);
    for (i = 1; i <= height; i++){
        for (int j = 0; j < height - i; j++){
            printf(" ");

        }
        int stars = 2*i-1;
        for (int p = 1; p <= stars; p++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}