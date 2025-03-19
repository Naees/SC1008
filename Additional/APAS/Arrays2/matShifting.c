/*matShifting
Write a C function matShifting() that takes in a two‐dimensional array a (nxn square matrix
with n<=10) as parameter, shifts the column data of the array a to the right by one column
position. The last column of the array will be shifted to the first column. The resultant data will
be stored into another two‐dimensional square array b (as parameter) which will be returned
to the calling function via call by reference. For example, if the matrix of the array a (3x3 matrix)
is:
Shift column data by one position
1 2 3
4 5 6
7 8 9
After program execution, the matrix of the array b (3x3) is:
3 1 2
6 4 5
9 7 8*/

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
    /* Write your code here */
    int i, j;
    for (i = 0; i < M-1; i++){
        b[i][0] = a[i][2];
        for (j = 1; j < M-1; j++){
            b[i][j] = a[i][j-1];
        }
    }
}