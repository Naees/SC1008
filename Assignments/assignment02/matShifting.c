/*matShifting

Write a C function matShifting() that tkaes in a two-dimensional array a (nxn square matrix with n<=10) a parameter, 
shifts the column of the array will be shifted to the first column.
The resultant data will be stored into another two-dimensional square array b (as parameter) which will be returned to the calling function via call by reference.
For example, if the matrix of the array a (3x3 matrix) is:*/

#include <stdio.h>
#define M 10
void matShifting(int a[M][M], int b[M][M], int n);
int main()
{
    int a[M][M], b[M][M];
    int n,i,j;
    printf("Enter array (nxn) size (n<=10): \n");
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        printf("Enter row %d: \n", i);
        for (j=0; j<n; j++)
        scanf("%d",&a[i][j]);
        }
        
    matShifting(a,b,n);
    printf("Array b: \n");
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++)
        printf("%d ",b[i][j]);
        printf("\n");
    }
    return 0;
}
void matShifting(int a[M][M], int b[M][M], int n)
{
    int i, j;
    for (i = 0; i < n; i++){
        b[i][0] = a[i][n-1];
        for (j = 1; j < n; j++){
            b[i][j] = a[i][j-1];
        }
    }
}
