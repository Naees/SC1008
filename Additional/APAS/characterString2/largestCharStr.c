/*largestCharStr
Write a function largestCharStr() that takes in an array of strings str (all characters are in lower
letter cases) with size > 0 and an array a as parameters, finds the larget character (based on
ASCII values) for each string in the array of strings, and stores them into the array a which is
then returned to the calling function via call by reference. For example, if size is 5 and the array
of strings str is {"peter", "john", "mary", "jane", "kenny"}, then the characters {‘t’, ‘o’, ‘y’, ‘n’, ‘y’}
will be stored in the array a after executing the function.*/

#include <stdio.h>
#include <string.h>
#define N 20
void largeCharStr(char str[N][20], char a[N], int size);
int main()
{
char str[N][20],dummy;
char a[N],i,j,size;
printf("Enter number of strings: \n");
scanf("%d", &size);
scanf("%c", &dummy);
for (i=0;i<size;i++){
printf("Enter string %d: \n", i+1);
scanf("%s",str[i]);
}
largeCharStr(str,a,size);
printf("largeCharStr(): \n");
for (i=0;i<size;i++) {
printf("String %d: ",i+1);
printf("%c\n",a[i]);
}
return 0;
}
void largeCharStr(char str[N][20], char a[N], int size)
{
    /* Write your code here */
    int i, j;
    for (i = 0; i < size; i++){
        char maxChar = str[i][0];
        for (j = 1; str[i][j] != '\0'; j++){
            if (str[i][j] > maxChar) {
                maxChar = str[i][j];
            }
        }
        a[i] = maxChar;
    }
}