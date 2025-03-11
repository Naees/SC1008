/*rFindMaxAr
Write a recursive C function that finds the maximum number in an array of integer
numbers. In the function, the parameter ar accepts an array passed in from the calling
function. The integer parameter size indicates the size of the array. The pointer
parameter max is used for passing the maximum number to the caller via call by
reference. The function prototype is given as follows:
void rFindMaxAr(int *ar, int size, int *max);*/

#include <stdio.h>
void rFindMaxAr(int *a, int size, int *max);
int main()
{
int ar[50],i,max,size;
printf("Enter array size: \n");
scanf("%d", &size);
printf("Enter %d numbers: \n", size);
for (i=0; i < size; i++)
scanf("%d", &ar[i]);
max=ar[0];
rFindMaxAr(ar,size,&max);
printf("rFindMaxAr(): %d\n", max);
return 0;
}
void rFindMaxAr(int *ar, int size, int *max)
{
    /* Write your code here */
    if (size == 0)
        return;
    if (ar[0]> *max)
        *max = ar[0];
    rFindMaxAr(ar+1, size-1,max);
}