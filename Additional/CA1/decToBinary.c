/*decToBinary
Write a program that reads in a positive decimal number, converts the decimal number
into the equivalent binary number (i.e. converts the number with base value 10 to base
value 2) and prints the converted binary number to the screen. You do not need to
check user input errors in the program.
A sample program template is given below:
*/
#include <stdio.h>
#include <math.h>
int main()
{
// /* Write your code here */
//     int digit, binary[32], size = 0;
//     printf("Enter a decimal number:\n");
//     scanf("%d", &digit);
//     while (digit > 0){
//         binary[size] = digit % 2;
//         size++;
//         digit = digit / 2;
//     }
//     printf("The equivalent binary number: ");
//     for (int i = size-1; i>=0; i--){
//         printf("%d",binary[i]);
//     }
//     return 0;

    printf("Enter a decimal number:\n");
    int number, tempArray[32], size = 0;
    scanf("%d", &number);
    while (number > 0){
        tempArray[size] = number % 2;
        size++;
        number /= 2;
    }
    for (int i = size-1; i >= 0; i--){
        printf("%d", tempArray[i]);
    }
    return 0;
}