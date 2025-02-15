/*findSubstring

Write a C function that takes two character string arguements, 
str and substr as inputs and returns 1 if substr is a substring of str (i.e. if substr is contained in str) and 0 if not.
For example, the function will return 1 if substr is "123" and str is "abc123xyz", but it will return 0 if otherwise. 
Note that for this question you are not allowed to use any string functions from the standard C library.*/

#include <stdio.h>
#include <string.h>
#define INIT_VALUE 999
int findSubstring(char *str, char *substr);
int main(){
    char str[40],substr[40], *p;
    int result = INIT_VALUE;

    printf("Enter the string: \n");
    fgets(str,80,stdin);
    if(p=strchr(str,'\n')) *p = '\0';
    printf("Enter the substring: \n");
    fgets(substr,80,stdin);
    if(p=strchr(substr,'\n')) *p = '\0';
    result = findSubstring(str,substr);
    if(result ==1)
        printf("findSubstring(): Is a substring\n");
    else if (result == 0)
        printf("findSubstring(): Not a substring\n");
    else
        printf("findSubstring(): An error\n");
    return 0;
}
int findSubstring(char *str, char *substr){
    if (*substr == '\0'){
        return 0;
    }
    int i,j;
    for (i = 0; str[i] != '\0'; i++){
        for (j = 0; substr[j] != '\0'; j++){
            if (*(str + i + j) != substr[j]){
                break;
            }
        }
        if (substr[j] == '\0'){
            return 1;   
        }
    }
    return 0;
}