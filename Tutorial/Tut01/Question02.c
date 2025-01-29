/*(countChars) Write a C program that reads in character by character from an input
source, until ‘#’ is entered. The output of the program is the number of English letters
and the number of digits that appear in the input.*/

#include <stdio.h>
int main()
{
    char inputChar;
    int letterCount = 0;
    int digitCount = 0;

    printf("Enter your characters (# to end):\n");
    while(1)
    {
        inputChar = getchar();

        if (inputChar == '#')
        {
            break;
        }
        if ((inputChar >= 'A' && inputChar <= 'Z') || (inputChar >= 'a' && inputChar <= 'z'))
        {
            letterCount++;
        }
        else if (inputChar >= '0' && inputChar <= '9')
        {
            digitCount++;
        }
    }
    printf("The number of digits: %d\n", digitCount);
    printf("The number of letters: %d\n", letterCount);
}