/*rStrReverse1
The recursive function that accepts a character string s as parameter, and returns the
string in reverse order. For example, if s is "abcde", then the function will return
"edcba" via the same pointer parameter. The function prototype is given as follows:
int rStrReverse1(char *s);*/

#include <stdio.h>
#include <string.h>
void rStrReverse1(char *s);
void rStringReverseHelper(char *start, char *end);
int main()
{
char str[40], *p;
printf("Enter a string: \n");
fgets(str, 40, stdin);
if (p=strchr(str,'\n'))
*p = '\0';
rStrReverse1(str);
printf("rStrReverse1(): %s", str);
return 0;
}
void rStrReverse1(char *s)
{
    /* Write your code here */
    if (s == NULL)
        return;

    char *end = s;
    while(*end != '\0')
        end++;
    end--;
    char *start = s;

    rStringReverseHelper(start, end);

}
void rStringReverseHelper(char *start, char *end){
    if (start >= end){
        return;
    }
    char temp = *start;
    *start = *end;
    *end = temp;

    rStringReverseHelper(start+1, end-1);
}