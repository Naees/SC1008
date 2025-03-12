/*compressStr
Write a C function compressStr() that takes in a string str as argument, compresses the
adjacent repeated characters, and prints the compressed string to the display. The function
replaces strings of repeating character sequences by [nX] in the output, where n is an
integer count (greater than 1) of the number of repetitions, and X is the character. For
example, if str is "bbccccd", then the string "[2b][4c]d" will be printed on the display.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
void compressStr(char *str);
int main()
{
char str[40];
printf("Enter a sequence of characters: \n");
scanf("%s", str);
printf("compressStr(): ");
compressStr(str);
return 0;
}
void compressStr(char *str)
{
    /* Write your code here */
    while (*str != '\0'){
        char current = *str;
        int count = 1;
        while (*(str+1) != '\0' && *(str+1) == current){
            count++;
            str++;
        }
        if (count > 1){
            printf("[%d%c]", count, current);
        }
        else {
            printf("%c", current);
        }
        str++;
    }
}