/*rReverseAr
Write a recursive function whose arguments are an array of integers ar and an integer size specifying
the size of the array and whose task is to reverse the contents of the array. The result is returned to the
caller through the array parameter. The function prototype is given as follows:
void rReverseAr(int ar[], int size);*/

#include <stdio.h>
void rReverseAr(int ar[], int size);
int main()
{
int array[80];
int size, i;
printf("Enter size: \n");
scanf("%d", &size);
printf("Enter %d numbers: \n", size);
for (i = 0; i < size; i++)
scanf("%d", &array[i]);
printf("rReverseAr(): ");
rReverseAr(array, size);
for (i = 0; i < size; i++)
printf("%d ", array[i]);
printf("\n");
return 0;
}
void rReverseAr(int ar[], int size)
{
    /* Write your code here */
    if (size <= 1){
        return;
    }
    int temp = ar[0];
    ar[0] = ar[size-1];
    ar[size-1] = temp;
    rReverseAr(ar+1, size-2);
}