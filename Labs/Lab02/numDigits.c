/*numDigits
Write a function that counts the number of digits for a non‐negative integer. For
example, 1234 has 4 digits. The function numDigits1() returns the result. The function
prototype is given below:

int numDigits1(int num);

Write another function numDigits2() that passes the result through the pointer
parameter, result. The function prototype is given below:

void numDigits2(int num, int *result);*/

#include <stdio.h>
int numDigits1(int num);
void numDigits2(int num, int *result);
int main()
{
    int number, result=0;
    printf("Enter the number:");
    scanf("%d", &number);
    printf("numDigits1():%d\n",numDigits1(number));
    numDigits2(number, &result);
    printf("numDigits2():%d\n",result);
    return 0;
}
int numDigits1(int num)
{
    if (num == 0)
    {
        return 1;
    }
    int count = 0;
    while(num>0)
    {
        count++;
        num /= 10;
    }
    return count;
    /* Don't need if else to check return value
    if (count > 0)
    {
        return count;
    }
    else
    {
        return 0;
    }
    */
}
void numDigits2(int num, int *result)
{ 
    if (num == 0)
    {
        *result = 1;
        return;
    }
    *result = 0;
    while(num>0)
    {
        (*result)++; // not the same as *result++ - Due to order precedence
        num /= 10;
    }
    return;
}