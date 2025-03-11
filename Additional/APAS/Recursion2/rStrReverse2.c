/*rStrReverse2
The recursive function that accepts a character string str and its string size as
parameters, and returns the the string in reverse order. For example, if str is "abcde",
then the function will return "edcba" via the pointer parameter. The function prototype
is given as follows:
void rStrReverse2(char *str, int n);*/

#include <stdio.h>
#include <string.h>
void rStrReverse2(char *str, int n);
int main()
{
char str[40], *p;
printf("Enter a string: \n");
fgets(str, 40, stdin);
if (p=strchr(str,'\n'))
*p = '\0';
rStrReverse2(str,strlen(str));
printf("rStrReverse2(): %s", str);
return 0;
}
void rStrReverse2(char *str, int n)
{
    /* Write your code here */
    if (n <= 1)
        return;
    
    char temp = str[0];
    str[0] = str[n-1];
    str[n-1] = temp;

    rStrReverse2(str+1, n-2);
}