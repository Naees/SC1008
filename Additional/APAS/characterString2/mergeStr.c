/*mergeStr
Write a C function mergeStr(), which takes in 3 parameters a, b and c, merges two
alphabetically ordered character strings a and b into character string c according to
alphabetical order. For example, if a is "agikmpq" and b is "bcdefhjlnr", then the resultant
string c will be "abcdefghijklmnpqr". The string c will be passed to the caller via call by
reference*/

#include <stdio.h>
#include <string.h>
void mergeStr(char *a, char *b, char *c);
int main()
{
char a[80],b[80];
char c[80];
printf("Enter the first string a: \n");
scanf("%s",a);
printf("Enter the second string b: \n");
scanf("%s",b);
mergeStr(a,b,c);
printf("mergeStr(): %s", c);
return 0;
}
void mergeStr(char *a, char *b, char *c)
{
    /* Write your code here */
    while ((*a != '\0' ) && (*b != '\0')){
        if (*a < *b){
            *c = *a;
            a++;
        }
        else{
            *c = *b;
            b++;
        }
        c++;
    }
    
    while (*a != '\0'){
        *c = *a;
        a++;
        c++;
    }
    
    while (*b != '\0'){
        *c = *b;
        b++;
        c++;
    }
    *c = '\0';
}