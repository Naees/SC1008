/*sortCharStr
Write a C function sortCharStr() that accepts a character string str as parameter, sorts the
characters in the string according to ascending order and returns the resultant string to the
calling function via str. You may assume that the character string contains only lower case
characters. For example, if str = ”goodies”, the resultant string will be “degioos”.*/

#include <stdio.h>
void sortCharStr(char *str);
int main()
{
char str[80];
printf("Enter a string: \n");
scanf("%s",str);
sortCharStr(str);
printf("sortCharStr(): %s\n", str);
return 0;
}
void sortCharStr(char *str)
{
    /* Write your code here */
    int size = 0;
    char *temp = str;
    while (*temp != '\0'){
        size++;
        temp++;
    }
    for (int i = 0; i < size-1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if (str[j] > str[j+1]){
                char temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
}