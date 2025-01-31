/*
(digitValue) Write a function that returns the value of the kth digit (k>0) from the right of a non-
negative integer num. For example, if num is1234567 and k is 3, the function will return 5 and if
num is 1234 and k is 8, the function will return 0. Write the function in two versions. The
function digitValue1() returns the result, while digitValue2() passes the result through pointer
parameter result. The prototypes of the function are given below:
int digitValue1(int num, int k);
void digitValue2(int num, int k, int *result);
*/

#include <stdio.h>
int digitValue1(int num, int k);
void digitValue2(int num, int k, int *result);

int main()
{
    int num, digit, result =- 1;

    printf("Enter the number:\n");
    scanf("%d", &num);
    printf("Enter k position:\n");
    scanf("%d",&digit);
    printf("digitValue1(): %d\n", digitValue1(num,digit));
    digitValue2(num, digit, &result);
    printf("digitValue2(): %d\n", result);
    return 0;
}
int digitValue1(int num, int k)
{
    if (num == 0){
        return 0;
    }  
    if (k <= 0) {
        return 0;
    }
    for (int i = 1; i < k; i++){
        num /= 10;
    }
    return num % 10;
}

void digitValue2(int num, int k, int *result)
{
    if (k <= 0) {   // check if the digit receive is invalid
        *result = 0;
        return;
    }   
    if (num == 0) { // edge case 0
        *result = 0;
        return;
    }

    for (int i = 1; i < k; i++){
        num /= 10;
    }
    *result = (num % 10);
    return;
}