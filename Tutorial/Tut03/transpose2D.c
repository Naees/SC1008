/*. (transpose2D) Write a function that takes a square matrix ar, and the array sizes for the
rows and columns as parameters, and returns the transpose of the array via call by
reference. For example, if the rowSize is 4, colSize is 4, and the array ar is {1,2,3,4,
5,1,2,2, 6,3,4,4, 7,5,6,7}, then the resultant array will be {1,5,6,7, 2,1,3,5, 3,2,4,6,
4,2,4,7}. That is, for the 4-by-4 matrix:
1 2 3 4
5 1 2 2
6 3 4 4
7 5 6 7
the resultant array after performing the transpose2D function is:
1 5 6 7
2 1 3 5
3 2 4 6
4 2 4 7
The function prototype is given below:
void transpose2D(int ar[][SIZE], int rowSize, int colSize);
SIZE is a constant defined at the beginning of the program. For example, #define SIZE 10.
The parameters rowSize and colSize are used to specify the dimensions of the 2-
dimensional array (e.g. 4x4) that the function should process.
Write a program to test the function*/

#include <stdio.h>

#define SIZE 10

void transpose2D(int ar[][SIZE],int rowSize, int colSize);
void printMatrix(int ar[][SIZE],int rowSize, int colSize);

int main()
{
    // We will use this as our test case
    int rowSize = 4;
    int colSize = 4;
    int i,j;

    int ar[SIZE][SIZE] = {
            {1, 2, 3, 4},
            {5, 1, 2, 2},
            {6, 3, 4, 4},
            {7, 5, 6, 7}
        };

    printf("Enter row size & column size of the 2D array: \n");
    scanf("%d", &rowSize);
    colSize = rowSize;
    for (i = 0; i<rowSize; i++){
        for(j=0; j<colSize; j++){
            printf("Enter the number in the element:\n");
            scanf("%d", &ar[i][j]);
        }
    }
    

    // Print the original matrix
    printf("Original matrix:\n");
    printMatrix(ar, rowSize, colSize);
    // Transpose the original matrix
    transpose2D(ar, rowSize, colSize);

    // Print the new matrix
    printf("\nNewly transposed matrix:\n");
    printMatrix(ar,rowSize,colSize);
    return 0;
}
/*
 * transpose2D:
 * Transposes a square matrix in place by swapping the elements above the main
 * diagonal with the corresponding elements below the main diagonal.
 *
 * Parameters:
 *  - ar: a 2D array of integers (with SIZE columns) to be transposed.
 *  - rowSize: the number of rows in the matrix.
 *  - colSize: the number of columns in the matrix.
 *
 * Note:
 *  This function assumes that the matrix is square, i.e. rowSize == colSize.
 */

void transpose2D(int ar[][SIZE],int rowSize, int colSize){
    // Only swap the elements above the main diagonal to prevent duplicated swaps
    for (int i = 0; i < rowSize; i++){
        for (int j = i + 1; j<colSize; j++){
            int temp = *(*(ar+i)+j);
            *(*(ar+i)+j) = *(*(ar+j)+i);
            *(*(ar+j)+i) = temp;
        }
    }
}

/*
 * printMatrix:
 * Prints the 2D array in matrix format.
 *
 * Parameters:
 *  - ar: a 2D array of integers (with SIZE columns).
 *  - rowSize: number of rows.
 *  - colSize: number of columns.
 */

void printMatrix(int ar[][SIZE],int rowSize, int colSize){
    for (int i = 0; i < rowSize; i++){
        for (int j = 0; j < colSize; j++){
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
}