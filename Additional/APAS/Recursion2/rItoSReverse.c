/*rItoSReverse
Write a recursive C function that takes a positive integer number (e.g. 1, 2, 3, etc.), and
converts it into a sequence of characters in reverse order. That is, the function takes a positive
integer number num and returns a string of the corresponding characters in reverse order via
numStr. For example, if num is 12345, then the string numStr is "54321". You may
assume that the last digit of the number num will not be 0 (i.e. 10, 1110, etc.). The function
prototype is given as follows:
void rItoSReverse(int num, char *numStr);*/

#include <stdio.h>
void rItoSReverse(int num, char *numStr);
int main()
{
int num;
char numStr[20];
printf("Enter a positive integer number (greater than 0): \n");
scanf("%d", &num);
rItoSReverse(num, numStr);
printf("rItoSReverse(): %s\n", numStr);
return 0;
}
void rItoSReverse(int num, char *numStr)
{
    /* Write your code here */
    if (num == 0){
        *numStr = '\0';
        return;
    }
    
    *numStr = (num%10) + '0';
    rItoSReverse(num/10, numStr + 1);

}