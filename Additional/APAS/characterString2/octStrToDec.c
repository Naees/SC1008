/*octStrToDec
Write a function octStrtodec() that accepts a character string str containing an octal
number as parameter, converts the octal string into the equivalent decimal number (i.e.
converts the number with base value 8 to base value 10), and returns the converted
decimal number to the calling function.*/

#include <stdio.h>
int octStrTodec(char *str);
int main()
{
char str[20],*sp;
int num;
printf("Enter an octal number: \n");
scanf("%s",str);
num=octStrTodec(str);
printf("octStrTodec(): %d\n",num);
return 0;
}
int octStrTodec(char *str)
{
    /* Write your code here */
    int result = 0;
    while (*str != '\0'){
        result = result * 8 + (*str - '0');
        str++;
    }
    return result;
}