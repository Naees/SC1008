/*insertStr
Write a C function insertStr() that inserts the characters of string s into string a according to
alphabetical order. The characters in string a are ordered alphabetically, while the characters in
string s may not be ordered alphabetically. For example, if a is "cehiknqtw" and s is "fbla", then
the unpdated string a will be "abcefhiklnqtw" after the execution of the insertStr() function. In
addition, the string a will also be returned to the calling function.*/

#include <stdio.h>
#include <string.h>
char *insertStr(char *a, char *s);
int main()
{
char a[40],s[40];
printf("Enter the string a: \n");
scanf("%s",a);
printf("Enter the string s: \n");
scanf("%s",s);
insertStr(a,s);
printf("insertStr(): %s",a);
return 0;
}
char *insertStr(char *a, char *s)
{
    /* Write your code here */
    int i = 0;
    while (s[i] != '\0'){
        int pos = 0;
        while(a[pos] != '\0' && a[pos] < s[i]){
            pos++;
        }
        int currentLength = 0;
        while (a[currentLength] != '\0')
        {
            currentLength++;
        }
        for (int j = currentLength; j >= pos; j--){
            a[j+1] = a[j];
        }

        a[pos] = s[i];

        i++;
    }
    return a;
}