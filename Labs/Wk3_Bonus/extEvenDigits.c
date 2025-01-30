/*extEvenDigits

Write a function that extracts the even digits from a positive number, and combines the
even digits sequentially into a new number. The new number is returned to the calling
function. If the input number does not contain any even digits, then the function returns
‐1. For example, if the input number is 1234567, then 246 will be returned; and if the
input number is 13, then –1 will returned. You do not need to consider the input number
such as 0, 10, 3033, etc. Write the function in two versions. The function extEvenDigits1()
returns the result to the caller, while the function extEvenDigits2() returns the result
through the pointer parameter, result. The function prototypes are given as follows:

int extEvenDigits1(int num);
void extEvenDigits2(int num, int *result);*/

#include <stdio.h>
#define INIT_VALUE 999
int extEvenDigits1(int num);
void extEvenDigits2(int num, int *result);

int main(){
    int number, result = INIT_VALUE;
    printf("Enter a number:\n");
    scanf("%d",&number);
    printf("extEvenDigits1():%d\n",extEvenDigits1(number));
    extEvenDigits2(number, &result);
    printf("extEvenDigits2():%d\n", result);
    return 0;
}

int extEvenDigits1(int num){
    int evenReversed = 0; // to hold the even numbers but in reversed order
    int found = 0; // to check if an even digit has been found

    while(num > 0){
        int digit = num % 10;
        if (digit % 2 == 0){
            evenReversed = evenReversed * 10 + digit;
            found = 1;
        }
        num /= 10;
    }
    if (!found){
        return -1;
    }
    int result = 0;
    while (evenReversed > 0){
        result = (result * 10) + (evenReversed % 10);
        evenReversed /= 10;
    }
    return result;
}
void extEvenDigits2(int num, int *result){
    int evenReversed = 0;
    int found = 0;
    while (num > 0){
        int digit = num % 10;
        if (digit % 2 == 0){
            evenReversed = evenReversed * 10 + digit;
            found = 1;
        }
        num /= 10;
    }
    if (!found){
        *result = -1;
        return;
    }
    *result = 0;
    while (evenReversed > 0){
        *result = (*result) * 10 + (evenReversed % 10);
        evenReversed /= 10;
    }
    return;
}