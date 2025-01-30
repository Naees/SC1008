/*digitPos
Write the function digitPos1() that returns the position of the first appearance of a
specified digit in a positive number. The position of the digit is counted from the right
and starts from 1. If the required digit is not in the number, the function should return 0.
For example, digitPos1(12315, 1) returns 2 and digitPos1(12, 3) returns 0. The function
prototype is given below:

int digitPos1(int num, int digit);

Write another function digitPos2() that passes the result through the pointer parameter,
result. For example, if num = 12315 and digit = 1, then *result = 2 and if num=12 and
digit = 3, then *result = 0. The function prototype is given below:

void digitPos2(int num, int digit, int *result);*/

#include <stdio.h>
int digitPos1(int num, int digit);
void digitPos2(int num, int digit, int *result);
int main()
{
    int number, digit, result=0;

    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("Enter the digit: \n");
    scanf("%d",&digit);
    printf("digitPos1(): %d\n", digitPos1(number, digit));
    digitPos2(number, digit, &result);
    printf("digitPos2(): %d\n", result);
    return 0;
}

int digitPos1(int num, int digit)
{
    int pos = 0;
    while (num > 0)
    {
        pos++;
        int current = num % 10;
        if (current == digit)
        {
            return pos;
        }
        num /= 10;
    }
    return 0;
}
void digitPos2(int num, int digit, int *result)
{
    *result = 0;
    while (num > 0)
    {
        (*result)++;
        int current = num % 10;
        if (current == digit)
        {
            return;
        }
        num /= 10;
    }
    *result = 0;
    return;
}