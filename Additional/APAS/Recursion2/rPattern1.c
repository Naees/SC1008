/*rPattern1
Write a recursive C function that prints a pattern with a specified height (between 1 and 9).
For example, rPattern1(5) will print the pattern below:
*
**
***
****
*****
The prototype of the function is given as follows:
void rPattern1(int height);*/


#include <stdio.h>
void rPattern1(int height);
int main()
{
int height;
printf("Enter the height: \n");
scanf("%d", &height);
printf("The pattern is: \n");
rPattern1(height);
return 0;
}
void rPattern1(int height)
{
    /* Write your code here */
    if (height == 0){
        return;
    }
    rPattern1(height-1);
    for (int i = 0; i < height; i++){
        printf("*");
    }
    printf("\n");
}