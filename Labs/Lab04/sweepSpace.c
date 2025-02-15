/*sweepSpace
Write a C function that removes all the blank spaces in a string. The function accepts a
character string as its parameter and returns the updated string to the calling function. The
function prototype is given below:
char *sweepSpace(char *str);*/

#include <stdio.h>
#include <string.h>
char *sweepSpace(char *str);
int main(){
    char str[80], *p;

    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p='\0';
    printf("sweepSpace(): %s\n", sweepSpace(str));
    return 0;
}

char *sweepSpace(char *str){
    char *src = str, *dst = str;
    while(*src != '\0'){
        if(*src != ' '){
            *dst = *src;
            dst++;
        }
        src++;
    }
    *dst = '\0';
    return str;
}