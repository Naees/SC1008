/*computeTotal2D
Write a C function that takes a 4x4 two‐dimensional array matrix of integer numbers as a
parameter. The function computes the total of the first three elements of each row of the array
and stores it at the last element of the row. The function prototype is given as follows:
void computeTotal2D(int matrix[SIZE][SIZE]);*/

#include <stdio.h>
#define SIZE 4
void computeTotal2D(int matrix[SIZE][SIZE]);
int main()
{
    int a[SIZE][SIZE];
    int i,j;
    printf("Enter the matrix data (%dx%d): \n", SIZE, SIZE);
    for (i=0; i<SIZE; i++)
        for (j=0; j<SIZE; j++)
            scanf("%d", &a[i][j]);
    printf("computeTotal2D(): \n");
    computeTotal2D(a);
    for (i = 0; i < SIZE; i++) 
    {
        for (j = 0; j < SIZE; j++)
        printf("%d ", a[i][j]);
        printf("\n");
    }
return 0;

}
void computeTotal2D(int matrix[SIZE][SIZE])
{
    /* Write your code here */
    int i, j;
    // Row Loop
    for (i = 0; i < SIZE; i++){
        // Column Loop
        int sum = 0;
        for (j = 0; j < SIZE-1; j++){
            // Sum the results in each row
            sum += matrix[i][j];
        }
        // Put the result in the last row
        matrix[i][SIZE-1] = sum;
    }
}