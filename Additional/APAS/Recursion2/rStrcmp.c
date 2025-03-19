/*rStrcmp
The recursive C function that compares the string pointed to by s1 to the string pointed to by
s2. If the string pointed to by s1 is greater than, equal to, or less than the string pointed to by
s2, then it returns 1, 0 or –1 respectively. Write the code for the function without using any of
the standard string library functions. The function prototype is given as follows:
int rStrcmp(char *s1, char *s2);*/

#include <stdio.h>
#include <string.h>
#define INIT_VALUE 100
int rStrcmp(char *s1, char *s2);
int main()
{
char source[40], target[40], *p;
int result = INIT_VALUE;
printf("Enter a source string: \n");
fgets(source, 40, stdin);
if (p=strchr(source,'\n')) *p = '\0';
printf("Enter a target string: \n");
fgets(target, 40, stdin);
if (p=strchr(target,'\n')) *p = '\0';
result = rStrcmp(source, target);
printf("rStrcmp(): %d", result);
return 0;
}
int rStrcmp(char *s1, char *s2)
{
    /* Write your code here */
    if (*s1 == '\0' && *s2 =='\0')
        return 0;
    if (*s1 == '\0')
        return -1;
    if (*s2 == '\0')
        return 1;
    if (*s1 != *s2)
        return (*s1 > *s2) ? 1 : -1;

    rStrcmp(s1 + 1, s2 + 1);
}