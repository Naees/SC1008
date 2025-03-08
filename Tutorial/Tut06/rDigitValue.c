/*2. (rDigitValue) Write a recursive function that returns the value of the k th digit (k>0) from the
right of a non-negative integer num. For example, if num is12348567 and k is 3, the function will
return 5 and if num is 1234 and k is 8, the function will return 0. Write the recursive function in
two versions. The function rDigitValue1() computes and returns the result. The function
rDigitValue2() computes and returns the result through the parameter result using call by
reference. The function prototypes are given below:
int rDigitValue1(int num, int k);
void rDigitValue2(int num, int k, int *result);*/

#include <stdio.h>
int rDigitValue1(int num, int k);
void rDigitValue2(int num, int k, int *result);
int main()
{
    int k;
    int number, digit;
    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("Enter k position: \n");
    scanf("%d", &k);
    printf("rDigitValue1(): %d\n", rDigitValue1(number, k));
    rDigitValue2(number, k, &digit);
    printf("rDigitValue2(): %d\n", digit);
    return 0;
}
int rDigitValue1(int num, int k)
{
    /* Write your code here */
    if (k == 1){
        return num % 10;
    }
    else
        rDigitValue1(num/10, k-1);
}
void rDigitValue2(int num, int k, int *result)
{
    /* Write your code here */
    if (k==1)
    {
        *result = num % 10;
        return;

    }
    else
    {
        rDigitValue2(num/10,k-1,result);
        return;
    }
}