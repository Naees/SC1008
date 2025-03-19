/*matTriSum
Write a C function matTriSum() that takes in a two‐dimensional array x and size n (in nxn
square matrix with n<=10) as parameters, computes the sum of the elements of the upper
triangular matrix of the array, and returns the sum to the calling function. For example, for the
following 3x3 (n=3) square matrix:
1 2 3
4 5 6
7 8 9
the sum of the upper triangular matrix in the array is 26 (=1+2+3+5+6+9) will be returned to the
calling function.*/

#include <stdio.h>
#define M 10
int matTriSum(int x[M][M], int n);
int main()
{
int x[M][M];
int n,i,j,s;
printf("Enter array (nxn) size (n<=10): \n");
scanf("%d",&n);
for (i=0;i<n;i++) {
printf("Enter row %d: \n",i);
for (j=0;j<n;j++)
scanf("%d",&x[i][j]);
}
s=matTriSum(x,n);
printf("The sum is: %d\n",s);
return 0;
}
int matTriSum(int x[M][M], int n)
{
    /* Write your code here */
    int sum = 0;
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            sum += x[i][j];
        }
    }
    return sum;
}