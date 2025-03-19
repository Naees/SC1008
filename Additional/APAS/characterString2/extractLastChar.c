/*extractLastChar
Write a C function extractLastChar() that accepts two string parameters str1 and str2, constructs
a word formed by the last character of each word of the character string str1, and stores the
constructed word into string str2. The function returns str2 to the calling function via call by
reference. You may assume that any two words in str1 are separated by a space character. For
example, if the input string str1 is "How are you?", then the string str2 is "we?"*/

#include <stdio.h>
#include <string.h>
void extractLastChar(char *str1, char *str2);
int main()
{
char str1[80], str2[80], *p;
printf("Enter a string: \n");
fgets(str1, 80, stdin);
if (p=strchr(str1,'\n')) *p = '\0';
extractLastChar(str1, str2);
printf("extractLastChar(): %s\n", str2);
return 0;
}
void extractLastChar(char *str1, char *str2)
{
    /* Write your code here */
    while (*str1 != '\0'){
        if (*str1 == ' '){
            *str2 = *(str1-1);
            str2++;
        }
        str1++;
    }
    if (str1 != str1-1){
        *str2 = *(str1-1);
        str2++;
    }
    *str2 ='\0';
}