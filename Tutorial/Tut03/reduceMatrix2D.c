/*
reduceMatrix2D) A square matrix (2-dimensional array of equal dimensions) can be
reduced to upper-triangular form by setting each diagonal element to the sum of the
original elements in that column and setting to 0s all the elements below the diagonal.
For example, the 4-by-4 matrix:
4 3 8 6
9 0 6 5
5 1 2 4
9 8 3 7
would be reduced to
Page 2
27 3 8 6
0 9 6 5
0 0 5 4
0 0 0 7
Write a function reduceMatrix2D() to reduce a matrix with dimensions of rowSize and
colSize. The prototype of the function is:
void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize);
SIZE is a constant defined at the beginning of the program. For example, #define SIZE 10.
The parameters rowSize and colSize are used to specify the dimensions of the 2-
dimensional array (e.g. 4x4) that the function should process*/

#include <stdio.h>
#define SIZE 10

void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize);
void printMatrix(int ar[][SIZE], int rowSize, int colSize);

int main()
{
    int rowSize = 4, colSize = 4;
    int ar[SIZE][SIZE] = {
        {4, 3, 8, 6},
        {9, 0, 6, 5},
        {5, 1, 2, 4},
        {9, 8, 3, 7}
    };
    
    printf("Original martrix:\n");
    printMatrix(ar, rowSize, colSize);
    
    reduceMatrix2D(ar, rowSize, colSize);

    printf("\nReduced matrix:\n");
    printMatrix(ar, rowSize, colSize);

    return 0;
}
/*
 * reduceMatrix2D:
 * Reduces a square matrix to upper-triangular form by performing the following:
 *   - For each column j, the diagonal element ar[j][j] is replaced with the sum
 *     of the elements from row j to the last row in that column.
 *   - All elements below the diagonal in column j are set to 0.
 *
 * This implementation uses pointer variables to access and modify matrix elements.
 */

void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize){
    for (int j = 0; j < colSize; j++){
        int sum = 0;
        // Ues a pointer to iterate down column j from row j to rowSize - 1.
        for (int i = j; i < rowSize; i++){
            // Get pointer to ar[i][j]
            int *ptr = *(ar + i) + j;
            sum += *ptr;
        }
        // Get a pointer to the diagonal element at ar[i][j] and update it with the sum.
        int *diagElementPtr = *(ar + j) + j;
        *diagElementPtr = sum;

        // Now update the elements below the diagonal in column j to 0.
        for (int i = j + 1; i < rowSize; i++){
            int *clearingPtr = *(ar + i) + j;
            *clearingPtr = 0;
        }
    }
}

/*
 * printMatrix:
 * Prints the 2D array in a matrix format.
 * This version uses a pointer to the start of each row.
 */
void printMatrix(int ar[][SIZE], int rowSize, int colSize){
    for (int i = 0; i < rowSize; i++){
        int *rowPtr = *(ar + i);
        for(int j = 0; j < colSize; j++){
            printf("%4d ", *(rowPtr + j));
        }
        printf("\n");
    }
}
