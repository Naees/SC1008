/*locateFirstChar

Write a C function that locates the first occurence of ch in the string str.
The function returns the index, or -1 if ch does not occur in the string.*/

#include <stdio.h>
#include <string.h>
int locateFirstChar(char *str, char ch);
int main()
{
    char str[40],ch, *p;
    printf("Enter a string: \n");
    fgets(str,40,stdin);
    if(p=strchr(str,'\n')) *p = '\0';
    printf("Enter the target character:\n");
    scanf("%c", &ch);
    printf("locateFirstChar():%d\n",locateFirstChar(str,ch));
    return 0;
}
int locateFirstChar(char *str, char ch){
    int count = 0;
    char *ptr = str;
    while (*ptr != '\0'){
        if(*ptr == ch){
            return count;
        }
        count++;
        ptr++;
    }
    return -1;
}