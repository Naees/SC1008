/*2. (computeAverage) Assume the following structure is defined to represent a grade record of
a student:

struct student{
char name[20];  student name 
double testScore;  test score 
double examScore;  exam score 
double total;   total = (testScore+examScore)/2 
};

Write a C function average() that creates a database of maximum 50 students using an array
of structures. The function reads in student name. For each student, it takes in the test
score and exam score. Then it computes and prints the total score of the student. The input
will end when the student name is "END". Then, it computes and returns the average score
of all students to the calling function (i.e. main()). The calling function then prints the
average score on the display. The function prototype is given below:
double average();*/

#include <stdio.h>
#include <string.h>
struct student {
    char name[20];
    double testScore;
    double examScore;
    double total;
};
double average();
int main()
{
    printf("average(): %.2f\n", average());
    return 0;

}
double average()
{
    struct student studentDB[50];
    int i;
    double sumOfScores = 0;
    char *p;
    char nameOfStudent[20];
    for (i=0; i<50; i++){
        printf("\nEnter student name:\n");
        // scanf("%s", studentDB[i].name);
        scanf("\n");
        fgets(studentDB[i].name, 20, stdin);
        if (p=strchr(studentDB[i].name,'\n')) *p = '\0';
        if (strcmp(studentDB[i].name, "END") == 0){
            i++; // Do with i-- as END will be added in and you don't want it to be inside as it is used as a divisor
            break;
        }
        printf("Enter test score:\n");
        scanf("\n");
        scanf("%lf", &studentDB[i].testScore);
        printf("Enter exam score:\n");
        scanf("\n");
        scanf("%lf", &studentDB[i].examScore);

        studentDB[i].total = (studentDB[i].testScore + studentDB[i].examScore) / 2.0;

        printf("Student %s total = %.2f", studentDB[i].name,studentDB[i].total);

        // Calculate the average of all students
        sumOfScores += studentDB[i].total;
    }
    if (i == 0){
        return 0.0;
    }
    return sumOfScores/i;
}