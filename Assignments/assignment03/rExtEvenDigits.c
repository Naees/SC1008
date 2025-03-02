/*rExtEvenDigits
Write a recursive function rExtEvenDigits() that extracts the even digits from a positive number num, and
combines the even digits sequentially into a new number. If the input number num does not contain any
even digits, then returns -1. The function passes the result to the caller through the pointer parameter
evenPtr. For example, if num is 1234, then 24 is returned through evenPtr; and if num is 1357, then –1 is
returned. You may assume that the input number does not contain the digit 0. The function prototype is
given below:
void rExtEvenDigits(int num, int *evenPtr);
*/

#include <stdio.h>
void rExtEvenDigits(int num, int *evenPtr);
int main()
{
    int number, result;
    printf("Enter a number: \n");
    scanf("%d", &number);
    rExtEvenDigits(number, &result);
    printf("rExtEveneDigits(): %d\n", result);
    return 0;
}
void rExtEvenDigits(int num, int *evenPtr)
{
    if (num < 10){
        if (num % 2 == 0) {
            *evenPtr = num;
        } else {
            *evenPtr = -1;
        }
        return;
    }
    rExtEvenDigits(num/10, evenPtr);
    int lastDigit = num % 10;
    if (*evenPtr ==-1){
        if(lastDigit % 2 == 0){
            *evenPtr = lastDigit;
        }
    }
    else{
        if(lastDigit % 2 == 0){
            *evenPtr = *evenPtr * 10 + lastDigit;
        }
    }
}