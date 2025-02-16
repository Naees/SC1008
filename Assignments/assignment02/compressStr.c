/*compressStr

Write a C function compressStr() that takes in a str as arguement,
compresses the adjacent repeated characters, and print the compressed string to the display. 
The function replaces strings oif repeating character sequences by [nX] in the output , 
where n is an integer count (greater than 1) of the number of repetition,
and X is the character.
For example, if str is "bbccccd", then the string "[2b][4c]d" will be printed on the display.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
void compressStr(char *str);

int main()
{
    char str[40];
    printf("Enter a sequence of character: \n");
    scanf("%s", str);
    printf("compressStr(): ");
    compressStr(str);
    return 0;
}

void compressStr(char *str){
    int i = 0;
    while(str[i] != '\0'){
        char current = str[i];
        int count = 1;
        while (str[i+1] != '\0' && str[i+1] == current){
            count++;
            i++;
        }
        if (count > 1){
            printf("[%d%c]", count, current);
        }
        else {
            printf("%c", current);   
        }
        i++;
    }
    printf("\n");

}