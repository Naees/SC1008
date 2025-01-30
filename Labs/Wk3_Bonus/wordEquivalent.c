/*wordEquivalent
Write a C program that read in a non-negative integer between 0 and 99 inclusively and
prints the word-equivalent of each input digit in reverse. The function should also check
whether the input integer exceeds 99. If the input integer exceeds 99, then the program
should print the error message “Input exceeds 99”. */

#include <stdio.h>
#include <string.h>
const char* digitToWords(int digits);
void processNumber(int number, const char** result);

int main(){
    int num;
    const char* word = NULL;

    printf("Enter the number:\n");
    scanf("%d",&num);

    processNumber(num, &word);
    printf("wordEquivalent(): %s", word);

    return 0;
}

const char* digitToWords(int digits){
    const char* words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    return (digits >= 0 && digits <= 9) ? words[digits] : "Invalid";
}
void processNumber(int number, const char** words){
    static char buffer[50];
    buffer[0] = '\0';

    if (number == 0){
        *words = "zero";
        return;
    }else if (number > 99){
        *words = "Input exceeds 99";
        return;
    }else if (number < 0){
        *words = "Input exceeds 0";
        return;
    }

    int isFirst = 1;

    while (number > 0){
        int digit = number % 10;
        const char* word = digitToWords(digit);

        if (!isFirst) {
            strcat(buffer, " ");
        }
        else {
            isFirst = 0;
        }

        strcat(buffer, word);
        number /= 10;
    }

    *words = buffer;
}