/*rPrintStars1
Write a recursive function that will read an array of numbers and print lines of asterisks that
correspond to the numbers in reverse order. For example, if the size is 3 and the array data is
{4, 6, 1}, then the output should be:
*
******
****
The prototype of the function is given as follows:
void rPrintStars1(int ar[20], int size);*/


#include <stdio.h>
void rPrintStars1(int ar[20], int size);
int main()
{
int ar[20], size, i;
printf("Enter size: \n");
scanf("%d", &size);
printf("Enter array data: \n");
for (i=0; i<size; i++)
scanf("%d", &ar[i]);
printf("The output is: \n");
rPrintStars1(ar, size);
return 0;
}
void rPrintStars1(int ar[20], int size)
{
    /* Write your code here */
    if  (size == 0){
        return;
    }
    for (int i = 0; i < ar[size-1];i++){
        printf("*");
    }
    printf("\n");
    rPrintStars1(ar, size-1);
}