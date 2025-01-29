/*Write a C program that reads in several lines of non-negative integer numbers,
computes the average for each line and prints out the average. The value –1 in each line
of user input is used to indicate the end of input for that line. */

#include <stdio.h>
int main()
{
    int numberOfLines, sum, value, count = 0;
    float avg = 0;
    
    printf("Enter number of lines:\n");
    scanf("%d", &numberOfLines);
    for (int i = 1; i<numberOfLines+1; i++)
    {
        avg = 0, sum = 0, count = 0;
        printf("Enter line %d (end with -1):\n", i);
        while(1)
        {
            scanf("%d", &value);
            if (value == -1)
            {
                break;
            }
            sum += value;
            count++;
        }
        if (count > 0) {
            float avg = (float)sum / count;
            printf("Average = %.2f\n", avg);
        }
    }
    return 0;
}
