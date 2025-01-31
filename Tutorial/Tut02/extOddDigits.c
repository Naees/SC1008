/*(extOddDigits) Write a function that extracts the odd digits from a positive number, and
combines the odd digits sequentially into a new number. The new number is returned to the
calling function. If the input number does not contain any odd digits, then the function returns -
1. For example, if the input number is 1234567, then 1357 will be returned; and if the input
number is 24, then –1 will returned. Write the function in two versions. The function
extOddDigits1() returns the result to the caller, while the function extOddDigits2() returns the
result through the pointer parameter, result. The function prototypes are given as follows:

int extOddDigits1(int num);
void extOddDigits2(int num, int *result);
*/
#include <stdio.h>
#define INIT_VALUE 999
int extOddDigits1(int num);
void extOddDigits2(int num, int *result);

int main()
{
    int number, result = INIT_VALUE;
    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("extOddDigits1(): %d\n", extOddDigits1(number));
    extOddDigits2(number, &result);
    printf("extOddDigits2(): %d\n", result);
    return 0;
}

int extOddDigits1(int num)
{
    int reversedOddNumbers = 0;
    int oddNumberCounter = 0;
    while (num > 0)
    {
        int digit = num % 10;
        if (digit % 2 != 0)
        {
            reversedOddNumbers = reversedOddNumbers * 10 + digit;
            if (oddNumberCounter == 0)
            {
                oddNumberCounter = 1;
            }
        }
        num /= 10;
    }

    if(oddNumberCounter == 0){
        return -1;
    }

    int finalResult = 0; 
    while (reversedOddNumbers > 0){
        finalResult = finalResult * 10 + reversedOddNumbers % 10;
        reversedOddNumbers /= 10;
    }
    return finalResult;
}
void extOddDigits2(int num, int *result)
{
    int extracted = 0;
    int multiplier = 1;
    int hasOdd = 0;

    while (num > 0)
    {
        int digit = num % 10;
        if (digit % 2 != 0) 
        {
            extracted += digit * multiplier;
            multiplier *= 10;
            hasOdd = 1;       
        }
        num /= 10;
    }
    *result = hasOdd ? extracted : -1;
}
/*
void extOddDigits2(int num, int *result)
{
    int reversedOddNumbers = 0;
    int oddNumberCounter = 0;
    while (num > 0)
    {
        int digit = num % 10;
        if (digit % 2 != 0)
        {
            reversedOddNumbers = reversedOddNumbers * 10 + digit;
            if (oddNumberCounter == 0)
            {
                oddNumberCounter = 1;
            }
        }
        num /= 10;
    }

    if(oddNumberCounter == 0){
        *result = -1;
        return 0;
    }

    int finalResult = 0; 
    while (reversedOddNumbers > 0){
        finalResult = finalResult * 10 + reversedOddNumbers % 10;
        reversedOddNumbers /= 10;
    }
    *result = finalResult;
    return;
}
*/