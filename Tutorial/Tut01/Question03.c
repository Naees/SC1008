/*(printPattern) Write a C program that reads a positive number height between 1 and 9
as its input value, and prints a triangular pattern according to height. Note that only 1, 2
and 3 are used to generate the patterns. For example, when height = 3, it will print the
following pattern:
1
22
333

while height = 7 will print the following pattern:
1
22
333
1111
22222
333333
1111111*/

#include <stdio.h>

int main()
{   
    int height = 0;
    int number;
    printf("Enter the height:\n");
    scanf("%d", &height);
    printf("Pattern:\n");
    for (int i = 1; i <= height; i++) // i represents the row
    {
        number = i % 3;
        if (number == 0)
        {
            number = 3;
        }
        for (int p = 0; p <= i-1; p++) // p reprsents the col
        {
            printf("%d", number);
        }
        printf("\n");
    }
}
