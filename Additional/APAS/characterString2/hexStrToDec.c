/*hexStrToDec
Write a C function hexStrToDec() that takes in a string hex which contains a hexadecimal
number as parameter, converts the hexadecimal string into its equivalent decimal
number (i.e. converts the number (in str) with base value 16 to base value 10) and
returns the converted decimal number to the calling function.*/

#include <stdio.h>
#include <math.h>
#include <string.h>
int hexStrToDec(char *hex);
int main()
{
int num;
char hex[100];
printf("Enter a hexadecimal number: \n");
scanf("%s",hex);
num=hexStrToDec(hex);
printf("hexStrToDec(): %d\n", num);
return 0;
}
int hexStrToDec(char *hex)
{
    /* Write your code here */
    int result = 0;
    while (*hex != '\0'){
        int digit = 0;
        
        if (*hex >= '0' && *hex <= '9')
        digit = *hex - '0';

        if (*hex >= 'A' && *hex <= 'F')
        digit = *hex - 'A' + 10;

        if (*hex >= 'a' && *hex <= 'f')
        digit = *hex - 'a' + 10;

        result = result * 16 + digit;
        hex++;
    }
    return result;
}