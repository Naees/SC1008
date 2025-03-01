/*rSquare
Write a recursive function that returns the square of a positive integer number num, by computing the
sum of odd integers starting with 1. The result is returned to the calling function. For example, if num
= 4, then 4 2 = 1 + 3 + 5 + 7 = 16 is returned; if num = 5, then 5 2 = 1 + 3 + 5 + 7 + 9 = 25 is returned.
Write two versions of the function. The function rSquare1() returns the result. The function
rSquare2() returns the result through the parameter result. The function prototypes are:

int rSquare1(int num);

void rSquare2(int num, int *result);*/

#include <stdio.h>
int rSquare1(int num);
void rSquare2(int num, int *result);
int main()
{
    int number, result=0;
    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("rSquare1(): %d\n", rSquare1(number));
    rSquare2(number, &result);
    printf("rSquare2(): %d\n", result);
    return 0;
}
int rSquare1(int num)
{
    if (num == 1)
        return 1;
    
    return rSquare1(num-1) + (2 * num - 1);
}
void rSquare2(int num, int *result)
{
    if (num == 1){
        *result = 1;
        return;
    }

    int temp;
    rSquare2(num - 1, result);
    *result = *result + (2 * num - 1);
}