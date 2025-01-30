/*computeSalaryGrade
The salary scheme for a company is given as follows:
Salary range for grade A: $700 - $899
Salary range for grade B: $600 - $799
Salary range for grade C: $500 - $649
In addition, a person whose salary is between $600 and $649 is in grade C if his merit
points are below 10, otherwise he is in grade B. A person whose salary is between $700
and $799 is in grade B if his merit points are below 20, otherwise he is in grade A. Write
a program to read in a person’s salary and his merit points, and displays his grade.
A sample program is given below:*/

#include <stdio.h>

char computeSalaryGrade(int salary, int merit);

int main(){
    int salary, merit = 0;
    printf("Enter the salary:\n");
    scanf("%d",&salary);
    printf("Enter the merit:\n");
    scanf("%d",&merit);
    char grade = computeSalaryGrade(salary, merit);
    printf("The grade: %c\n", grade);

    return 0;
}
char computeSalaryGrade(int salary, int merit){
    if (salary >= 600 && salary <= 649){    // additonal case 1
        return (merit < 10) ? 'C' : 'B';
    } else if (salary >= 700 && salary <= 799) {    // additional case 2
        return (merit < 20) ? 'B' : 'A';
    } else if (salary > 799 && salary < 899) {      // grade a
        return 'A';
    } else if (salary > 649 && salary < 700) {      // grade b
        return 'B';
    } else if (salary >= 500 && salary < 600) {     // grade c
        return 'C';
    } 
    return ' '; // Handlae exemptions if needed
}