/*extractFirstChar
Write a C function extractFirstChar() that takes in two strings str1 and str2 as parameters,
constructs a word formed by the first character of each word of the string str1, and stores the
newly constructed word into the string str2. You may assume that any two words in str1 are
separated by a space character. If the input string str1 is "How are you?", then the string str2 is
"Hay". The function returns str2 to the calling function via call by reference.*/

#include <stdio.h>
#include <string.h>
void extractFirstChar(char *str1, char *str2);
void extractFirstChar1(char *str1, char *str2);

int main()
{
    char str1[80], str2[80], *p;
    printf("Enter a string: \n");
    fgets(str1, 80, stdin);
    if (p=strchr(str1,'\n')) *p = '\0';
        extractFirstChar(str1, str2);
    printf("extractFirstChar(): %s\n", str2);
    return 0;
}
void extractFirstChar1(char *str1, char *str2)
{
    char output_str = "";
    int checker = 0;
    char *tempP = str2;
    if (str1[0] != ' ' && str1[0] != '\0'){
        *tempP = *str1;
        tempP++;
    }
    while (*str1 != '\0'){
        if (checker == 1){
            *tempP = *str1;
            tempP++;
            checker = 0;
        }
        if (*str1 == ' '){
            checker = 1;
        }
        str1++;
    }
}

void extractFirstChar(char *str1, char * str2)
{
    int i = 0, j = 1;
    if (str1[0] != ' ' && str1[0] != '\0')
    {
        str2[0] = str1[0];

    }
    for (i = 1; str1[i] != '\0'; i++){
        if (str1[i] == ' ' && str1[i+1] != ' ' && str1[i+1] != '/0'){
            str2[j++] = str1[i+1];
        }
    }
    str2[j] = '\0';
}