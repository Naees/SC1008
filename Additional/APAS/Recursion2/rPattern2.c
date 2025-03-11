/*rPattern2
Write a recursive C function that prints a pattern with a specified height (between 1 and 9).
For example, rPattern2(5) will print the pattern below:
*****
****
***
**
*
The prototype of the function is given as follows:
void rPattern2(int height);*/

#include <stdio.h>
void rPattern2(int height);
int main()
{
int height;
printf("Enter the height: \n");
scanf("%d", &height);
printf("The pattern is: \n");
rPattern2(height);
return 0;
}
void rPattern2(int height)
{
    /* Write your code here */
    if (height == 0){
        return;
    }
    for (int i = 0; i < height; i++){
        printf("*");
    }
    printf("\n");
    rPattern2(height-1);
}