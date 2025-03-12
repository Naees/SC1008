/*rotateAr
Write a C program that reads in the size of an array and the corresponding numbers (each
number is between 0 and 9) for the array, and prints a pattern to the screen. In the pattern, it
prints the number of lines according to the size of the array. For each line, the program moves
the last element of the array to be the first element of the array, shifts the rest of the elements
by one index position, and prints all the elements of the array to the screen. The printing will
stop when all the lines of data have been printed. For example, if the array size is 6 and the
array data is {7,4,8,9,1,5}, then the following 6 lines of data pattern will be printed to the
screen:
574891
157489
915748
891574
489157
748915*/

#include <stdio.h>
#define N 20
int main()
{
    int a[N],i,j,k,m;
    int size;
    /* Write your code here – for additional local variables */
    printf("Enter array size: \n");
    scanf("%d",&size);
    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++)
    scanf("%d", &a[i]);
    printf("Result: \n");
    /* Write your code here */
    
    for (int i = 0; i < size; i++){
        int last = a[size-1];
        for (j = size -1; j > 0; j--){
            a[j] = a[j-1];
        }
        a[0] = last;
        for (int k = 0; k < size; k++){
            printf("%d", a[k]);
        }
        printf("\n");
    }

return 0;
}