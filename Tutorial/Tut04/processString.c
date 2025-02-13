/*1. (processString) Write a C function that accepts a string str and returns the total number of
vowels totVowels and digits totDigits in that string to the caller via call by reference. The
function prototype is given as follows:
void processString(char *str, int *totVowels, int *totDigits); */


#include <stdio.h>
#include <string.h>
void processString(char *str, int *totVowels, int *totDigits);
int main()
{
char str[50], *p;
int totVowels, totDigits;
printf("Enter the string: \n");
fgets(str, 50, stdin);
if (p=strchr(str,'\n')) *p = '\0';
processString(str, &totVowels, &totDigits);
printf("Total vowels = %d\n", totVowels);
printf("Total digits = %d\n", totDigits);
return 0;
}
void processString(char *str, int *totVowels, int *totDigits)
{
    /*int totalVowels = 0;
    int totalDigits = 0;*/
    while (*str != '\0'){
        char ch = *str;
        if (ch >= '0' && ch <= '9'){
            // totalDigits++;
            (*totDigits)++;
        }
        ch = (ch >= 'A' && ch <= 'Z') ? ch + ('a' - 'A') : ch;
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            // totalVowels++;
            (*totVowels)++;
        }
        str++;
    }

}