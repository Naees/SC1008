/*findMinMax2D
Write a C function that takes a 5x5 two‐dimensional array of integers ar as a parameter.
The function returns the minimum and maximum numbers of the array to the caller
through the two pointer parameters min and max respectively. The function prototype is
given as follows:
void findMinMax2D(int ar[SIZE][SIZE], int *min, int *max);*/

#include <stdio.h>
#define SIZE 5
void findMinMax2D(int ar[SIZE][SIZE], int *min, int *max);
int main()
{
    int A[5][5];
    int i,j,min,max;
    printf("Enter the matrix data (%dx%d): \n", SIZE, SIZE);
    for (i=0; i<5; i++)
        for (j=0; j<5; j++)
            scanf("%d", &A[i][j]);
    findMinMax2D(A, &min, &max);
    printf("min = %d\nmax = %d", min, max);
    return 0;
}
void findMinMax2D(int ar[SIZE][SIZE], int *min, int *max)
{
    int *pointer;
    *min = ar[0][0];
    *max = ar[0][0];
    /* Write your code here */
    for (int i = 0; i < SIZE * SIZE; i++){
        int row = i / SIZE;
        int col = i % SIZE;
        if (ar[row][col] < *min){
            *min = ar[row][col];
        }
        if (ar[row][col] > *max){
            *max = ar[row][col];
        }
    }
}