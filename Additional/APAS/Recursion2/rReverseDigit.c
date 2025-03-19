/*rReverseDigits
Write a recursive C function rReverseDigits() that that takes an non-negative
integer argument num and returns an integer whose digits are obtained by
reversing those of the argument number. The result is passed to the calling
function through a pointer variable result. For example, if num is 1234, then the
function should return 4321 through the pointer variable. If num is 10, then the
function should return 1. You may assume that the last digit of the input number
is not 0, i.e. the number will not be in the form of 1110, 1200, etc.*/

#include <stdio.h>
void rReverseDigits(int num, int *result);
int main()
{
int result=0, number;
printf("Enter a number: \n");
scanf("%d", &number);
rReverseDigits(number, &result);
printf("rReverseDigits(): %d\n", result);
return 0;
}
void rReverseDigits(int num, int *result)
{
    /* Write your code here */
    if (num == 0){
        *result /= 10;
        return;
    }
    *result += num%10;
    *result *= 10;
    rReverseDigits(num/10, result);
}