/*rCountEvenDigits
Write a recursive C function that counts the number of even digits in a specified positive number (bigger
than 0), num. For example, if num is 105006, then the function will return 4; and if num is 1357, the
function will return 0. Write the recursive function in two versions. The function rCountEvenDigits1()
computes and returns the result. The function rCountEvenDigits2() passes the result through the pointer
parameter, result. The function prototypes are given as follows:
int rCountEvenDigits1(int num);
void rCountEvenDigits2(int num, int *result);*/

#include <stdio.h>
int rCountEvenDigits1(int num);
void rCountEvenDigits2(int num, int *result);
int main()
{
    int number, result;
    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("rCountEvenDigits1(): %d\n", rCountEvenDigits1(number));
    rCountEvenDigits2(number, &result);
    printf("rCountEvenDigits2(): %d\n", result);
    printf("rCountEvenDigits3(): %d\n", rCountEvenDigits3(number));
    return 0;
}
int rCountEvenDigits1(int num)
{
    /* Write your code here */
    if (num == 0){
        return 0;
    }
    if ((num % 10) % 2 == 0){
        return 1 + rCountEvenDigits1(num/10);   
    }
    else{
        return rCountEvenDigits1(num/10);
    }

}
void rCountEvenDigits2(int num, int *result)
{
    /* Write your code here */
    if (num == 0){
        *result = 0;
        return;
    }
    rCountEvenDigits2(num/10, result);
    if ((num%10) % 2 == 0){
        *result = 1 + *result;
        return;
    }
}
int rCountEvenDigits3(int num){
    if (num == 0){
        return 0;
    }
    int add = ((num % 10) % 2 == 0) ? 1:0;
    return add + rCountEvenDigits3(num/10);
}