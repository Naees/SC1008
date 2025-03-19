/*extractFirstChar
Write a C function extractFirstChar() that takes in two strings str1 and str2 as parameters,
constructs a word formed by the first character of each word of the string str1, and stores the
newly constructed word into the string str2. You may assume that any two words in str1 are
separated by a space character. If the input string str1 is "How are you?", then the string str2 is
"Hay". The function returns str2 to the calling function via call by reference.*/

#include <stdio.h>
#include <string.h>
void extractFirstChar(char *str1, char *str2);
int main()
{
char str1[80], str2[80], *p;
printf("Enter a string: \n");
fgets(str1, 80, stdin);
if (p=strchr(str1,'\n')) *p = '\0';
extractFirstChar(str1, str2);
printf("extractFirstChar(): %s\n", str2);
return 0;
}
void extractFirstChar(char *str1, char *str2)
{
    /* Write your code here */
    int found = 1;
    while (*str1 != '\0'){
        if (found == 1 && *str1 != ' '){
            *str2 = *str1;
            str2++;
            found = 0;
        }
        if (*str1 == ' '){
            found = 1;
        }
        str1++;
    }
    *str2 = '\0';
}