/* 1. Write a C program that prints the ID and grade of each student in a class. The input
contains the student IDs and their marks. The range of the marks is from 0 to 100. The
relationships of the marks and grades are given below:

Grade Mark
A 100-75
B 74-65
C 64-55
D 54-45
F 44-0
Use the sentinel value –1 for student ID to indicate the end of user input*/

#include <stdio.h>
int main()
{
    int mark = 0, studentid = 0;
    char grade = 0;
    while (1)
    {
        printf("Enter Student ID:\n");
        scanf("%d", &studentid);
        if (studentid == -1)
        {
            break;
        }
        printf("Enter Mark:\n");
        scanf("%d", &mark);
        if (mark > 100 || mark < 0)
        {
            printf("Invalid marks! Please enter marks between 0 and 100\n");
            continue;
        }
        if (mark >= 75 && mark <= 100)
        {
            grade = 'A';
        }
        else if (mark >= 65 && mark <= 74)
        {
            grade = 'B';
        }
        else if (mark >= 55 && mark <= 64)
        {
            grade = 'C';
        }
        else if (mark >= 45 && mark <= 54)
        {
            grade = 'D';
        }
        else 
        {
            grade = 'F';
        }

        printf("Grade = %c\n", grade);
    }
    return 0;
}