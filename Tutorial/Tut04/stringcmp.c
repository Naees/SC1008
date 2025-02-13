/*(stringcmp) Write a C function that compares the string pointed to by s1 to the string
pointed to by s2. If the string pointed to by s1 is greater than, equal to, or less than the
string pointed to by s2, then it returns 1, 0 or –1 respectively. Write the code for the
function without using any of the standard C string library functions. The function prototype
is given as follows:
int stringcmp(char *s1, char *s2);*/

#include <stdio.h>
#include <string.h>
#define INIT_VALUE 999
int stringcmp(char *s1, char *s2);

int main()
{
char source[80], target[80], *p;
int result = INIT_VALUE;
printf("Enter a source string: \n");
fgets(source, 80, stdin);
if (p=strchr(source,'\n')) *p = '\0';
printf("Enter a target string: \n");
fgets(target, 80, stdin);
if (p=strchr(target,'\n')) *p = '\0';
result = stringcmp(source, target);
if (result == 1)
printf("stringcmp(): greater than");
else if (result == 0)
printf("stringcmp(): equal");
else if (result == -1)
printf("stringcmp(): less than");
else
printf("stringcmp(): error");
return 0;
}

int stringcmp(char *s1, char *s2) {
    // Run through the strings arrays until we hit the end of the string
    while (*s1 != '\0' || *s2 != '\0'){
        if (*s1 != *s2){
            return (*s1 > *s2) ? 1 : -1;
        }
        s1++;
        s2++;
    }
    
    // Now we respond to the strings after they exit the loop
    // Case 1: s1 and s2 ends on simutaniously
    if (*s1 == *s2){
        return 0;
    }
    // Case 2: s1 ends first (S2 is bigger)
    if (*s1 == '\0'){
        return -1;
    }
    // Case 3: s2 ends first (S1 is bigger)
    if (*s2 == '\0'){
        return 0;  
    }
}
