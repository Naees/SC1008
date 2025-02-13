/*2. (stringncpy) Write a C function stringncpy() that copies not more than n characters
(characters that follow a null character are not copied) from the array pointed to by s2 to
the array pointed to by s1. If the array pointed to by s2 is a string shorter than n characters,
null characters are appended to the copy in the array pointed to by s1, until n characters in
all have been written. The stringncpy() returns the value of s1. The function prototype is
given below:
char *stringncpy(char *s1, char *s2, int n); */

#include <stdio.h>
#include <string.h>

char *stringncpy(char *s1, char *s2, int n);

int main()
{
    char targetStr[40], sourceStr[40], *target, *p;
    int length;
    printf("Enter the string: \n");
    fgets(sourceStr, 40, stdin);
    if (p=strchr(sourceStr,'\n')) *p = '\0';
    printf("Enter the number of characters: \n");
    scanf("%d", &length);
    target = stringncpy(targetStr, sourceStr, length);
    printf("stringncpy(): %s\n", target);
    return 0;
}

char *stringncpy(char *s1, char *s2, int n)
{
    char *startPtr = s1;
    while (n && (*s1 = *s2) != '\0'){
        s1++;
        s2++;
        n--;
    }

    while(n--){
        *s1++ = '\0';
    }
    return startPtr;
}