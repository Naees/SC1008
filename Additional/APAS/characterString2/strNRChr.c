/*strNRChr
Write a C function strNRChr() that locates the last n th occurrence of ch in the string pointed
to by str. The function returns a pointer to the character, or a NULL pointer if ch does not
occur in the string. For example, if str = "abacadae", ch = 'a' and n = 2, then the function
returns the address of the substring "adae" within "abacadae". In this function, there is no
need to check input error.*/

#include <stdio.h>
#include <string.h>
char *strNRChr(char *str, int n, char ch);
int main()
{
char str[80], ch, dummy;
char *temp=NULL;
int n;
printf("Enter a string: \n");
scanf("%s",str);
scanf("%c",&dummy);
printf("Enter a char: \n");
scanf("%c",&ch);
printf("Enter the occurrence: \n");
scanf("%d", &n);
temp = strNRChr(str, n, ch);
if (temp!=NULL)
printf("strNRChr(): %s\n", temp);
else
printf("strNRChr(): null string\n");
return 0;
}
char *strNRChr(char *str, int n, char ch)
{
    /* Write your code here */
    int size = 0; char *pointer;
    char *temp = str;
    while (*temp != '\0'){
        ++size;
        temp++;
    }

    for (int i = size-1; i >= 0; i--){
        if (str[i] == ch){
            n--;
            if (n == 0)
                return &str[i];
        }
    }
    return NULL;
}