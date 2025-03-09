/*4. (rCountArray) Write a recursive C function rCountArray() that returns the number of times the
integer a appears in the array which has n integers in it. Assume that n is greater than or equal
to 1. The function prototype is:
int rCountArray(int array[], int n, int a);*/

#include <stdio.h>
#define SIZE 20
int rCountArray(int array[], int n, int a);
int rCountArrayVersion2(int array[], int n, int a);
int main()
{
    int array[SIZE];
    int index, count, count2, target, size;
    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d numbers: \n", size);
    for (index = 0; index < size; index++)
        scanf("%d", &array[index]);
    printf("Enter the target number: \n");
    scanf("%d", &target);
    count = rCountArray(array, size, target);
    count2 = rCountArrayVersion2(array, size, target);
    printf("rCountArray(): %d\n", count);
    printf("rCountArrayVersion2(): %d\n", count2);
    return 0;
}
int rCountArray(int array[], int n, int a)
{
    if (n == 0)
        return 0;
    if (array[n] == a)
        return 1 + rCountArray(array, n-1, a);
    else
        return rCountArray(array, n-1, a);
}
int rCountArrayVersion2(int array[], int n, int a)
{
    /* Write your program code here */
    if (n == 0)
        return 0;
    if (array[0] == a){
        return 1 + rCountArrayVersion2(&array[1], n-1, a);
    }
    else{
        return rCountArrayVersion2(&array[1], n-1, a);
    }
}