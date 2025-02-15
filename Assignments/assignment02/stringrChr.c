/*Write a function that locates the last occurrence of ch in the string pointed to by s. 
The function returns a pointer to the character, or a null pointer if ch does not occur in the string.
Write the code for the function without using any of the standard library string functions*/

#include <stdio.h>
#include <string.h>
char *stringrChr(char *s, char ch);
int main(){
    char s[80],c,*p;
    char *temp=NULL;

    printf("Enter a string:\n");
    fgets(s, 80, stdin);
    if (p=strchr(s,'\n')) * p = '\0';
    printf("Enter a char:\n");
    scanf("%c",&c);
    temp = stringrChr(s,c);
    if(temp!=NULL)
        printf("stringrChr(): %s\n", temp);
    else
        printf("stringrChr(): null string\n");
    return 0;
}
char *stringrChr(char *s, char ch){
    char *lastFound = NULL;
    while (*s != '\0'){
        if (*s == ch){
            lastFound = s;
        }
        s++;
    }
    return lastFound;
}