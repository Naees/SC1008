/*minCharToEnd
Write a C function minCharToEnd() that accepts a character string str as parameter, finds the
smallest character from the string (based on ASCII values), and moves it to the end of the string.
E.g., if the string is "adecb", then the string will be "decba" after executing the function. You
may assume that the string contains only lower case characters. The string will be passed to the
caller via call by reference. If more than one smallest characters are in the string, then the first
appearance of the smallest character will be moved to the end of the string. For example, if the
string is "adeabe", then the resultant string will be "deabea".*/

#include <stdio.h>
#include <string.h>
void minCharToEnd(char *str);
int main()
{
char str[80];
printf("Enter a string: \n");
scanf("%s",str);
minCharToEnd(str);
printf("minCharToEnd(): %s",str);
return 0;
}
void minCharToEnd(char *str)
{
    /* Write your code here */
    int n = 0;
    int minPointer = 0;
    char minValue = str[0];
    while (str[n] != '\0'){
        if (minValue > str[n]){
            minValue = str[n];
            minPointer = n;
        }
        n++;
    }

    if (minPointer == n - 1){
        return;
    }
    while(str[minPointer] != '\0'){
        str[minPointer++] = str[minPointer+1];
    }
    str[n-1] = minValue;
}