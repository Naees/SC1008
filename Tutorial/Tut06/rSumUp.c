/*1. (rSumup) A function rSumup() is defined as:
rSumup(1) = 1
rSumup(n) = n + rSumup(n-1) if n > 1
Implement rSumup() in two versions. The function rSumup1() computes and returns the
result. The function rSumup2() computes and returns the result through the parameter
result. The function prototypes are given as follows:
int rSumup1(int n);
void rSumup2(int n, int *result);*/

#include <stdio.h>
int rSumup1(int n);
void rSumup2(int n, int *result);
int main()
{
    int n, result;
    printf("Enter a number: \n");
    scanf("%d", &n);
    printf("rSumup1(): %d\n", rSumup1(n));
    rSumup2(n, &result);
    printf("rSumup2(): %d\n",result);
    return 0;
}
int rSumup1(int n)
{
    /* Write your code here */
    if (n == 1)
    {
        return 1;
    }
    if (n > 1){
        return n + rSumup1(n-1);
    }

}
void rSumup2(int n, int *result)
{
    /* Write your code here */
    if (n == 1){
        *result = 1;
        return;
    }
    else{
        rSumup2(n-1, result);
        *result = n + *result;
    }
}