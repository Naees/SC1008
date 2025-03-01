/*rDigitPos
Write a recursive function that returns the position of the first appearance of a specified digit in a
positive number. The position of the digit is counted from the right and starts from 1. If the required
digit is not in the number, the function should return 0. Write two versions of the function. The
function rDigitPos1() returns the result. The function rDigitPos2() returns the result through
the pointer parameter pos. The function prototypes are given as follows:

int rDigitPos1(int num, int digit);
void rDigitPos2(int num, int digit, int *pos);
*/

#include <stdio.h>
int rDigitPos1(int num, int digit);
void rDigitPos2(int num, int digit, int *pos);
int main()
{
int number, digit, result=0;
printf("Enter the number: \n");
scanf("%d", &number);
printf("Enter the digit: \n");
scanf("%d", &digit);
printf("rDigitPos1(): %d\n", rDigitPos1(number, digit));
rDigitPos2(number, digit, &result);
printf("rDigitPos2(): %d\n", result);
return 0;
}
int rDigitPos1(int num, int digit)
{
    if (num == 0){
        return 0;
    }
    if (num % 10 == digit){
        return 1;
    }
    else {
        int pos = rDigitPos1(num/10, digit);
        if (pos == 0){
            return 0;
        }
        else
            return pos + 1;
    }
}
void rDigitPos2(int num, int digit, int *pos)
{
    if (num == 0){
        *pos = 0;
        return;
    }
    if (num % 10 == digit){
        *pos = 1;
        return;
    }
    rDigitPos2(num / 10, digit, pos);
    if (*pos == 0){
        *pos = 0;
    }
    else{
        *pos = *pos + 1;
    }
}