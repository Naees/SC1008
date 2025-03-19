/*compareChar
Write a C function compareChar() that accepts two strings str1 and str2 as parameters,
compares the two strings character by character according to the same index positions, stores
the larger character of the two into the string str3 which is also a parameter of the function.
You may assume that the two strings contain only lower case letter characters. For example, if
str1="big" and str2="small", then the resultant string str3 is "smgll".*/

#include <stdio.h>
#include <string.h>
void compareChar(char *str1, char *str2, char *str3);
int main()
{
char str1[80],str2[80],str3[80];
printf("Enter the first string: \n");
scanf("%s",str1);
printf("Enter the second string: \n");
scanf("%s",str2);
compareChar(str1, str2, str3);
printf("compareChar(): %s\n", str3);
return 0;
}
void compareChar(char *str1, char *str2, char *str3)
{
    /* Write your code here */
    while (*str1 != '\0' && *str2 != '\0'){
        if (*str1 > *str2){
            *str3 = *str1;
        }
        else{
            *str3 = *str2;
        }
        str1+=1;
        str2+=1;
        str3+=1;
    }
    while(*str1 != '\0'){
        *str3 = *str1;
        str3+=1;
        str1+=1;
    }
    while(*str2 != '\0'){
        *str3 = *str2;
        str3+=1;
        str2+=1;
    }
    *str3 = '\0';
}