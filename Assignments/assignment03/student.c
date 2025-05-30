/*student
You are required to write a C program to process an array of student records. For each student
record, it stores the student id and name. In the program, you need to write the following
three functions:
• The function inputStud() reads in students’ information according to an input student
size.
• The function printStud() prints the student information on the display. It will print the
message “Empty array“ if the student list is empty.
• The function removeStud() takes in three parameters. It removes the target student
name from the array which has *size numbers in it. If *size is equal to zero the
function should issue an error message “Array is empty“. If the target name does not
appear in the array, the function should issue an error message “The target does not
exist“. The program defines the constant SIZE as the maximum number of student
records which can be stored in the array. The function will return 0 if the removal
operation is successful, 1 if the array is empty or 2 if the number does not exist in the
array.
The prototypes of the three functions are given below:
void inputStud(Student *s, int size);
void printStud(Student *s, int size);
int removeStud(Student *s, int *size, char *target);
The structure definition for the structure Student is given below:
typedef struct {
int id;
char name[50];
} Student;*/

#include <stdio.h>
#include <string.h>
#define SIZE 50
typedef struct {
    int id;
    char name[50];
} Student;

void inputStud(Student *s, int size);
void printStud(Student *s, int size);
int removeStud(Student *s, int *size, char *target);

int main()
{
    Student s[SIZE];
    int size=0, choice;
    char target[80], *p;
    int result;
    char dummy[80];
    printf("Select one of the following options: \n");
    printf("1: inputStud()\n");
    printf("2: removeStud()\n");
    printf("3: printStud()\n");
    printf("4: exit()\n");
    do {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter size: \n");
                scanf("%d", &size);
                printf("Enter %d students: \n", size);
                inputStud(s, size);
                break;
            case 2:
                printf("Enter name to be removed: \n");
                fgets(dummy,80,stdin);
                fgets(target, 80, stdin);
                if (p=strchr(target,'\n')) *p = '\0';
                    printf("removeStud(): ");
                result = removeStud(s, &size, target);
                if (result == 0)
                    printf("Successfully removed\n");
                else if (result == 1)
                    printf("Array is empty\n");
                else if (result == 2)
                    printf("The target does not exist\n");
                else
                    printf("An error has occurred\n");
                break;
            case 3:
                printStud(s, size);
                break;
            }
        } while (choice < 4);
    return 0;
}
void inputStud(Student *s, int size)
{
    int i;
    for (i = 0; i < size; i++){
        printf("Student ID:\n");
        scanf("%d", &s[i].id);
        while (getchar() != '\n');
        printf("Student Name:\n");
        fgets(s[i].name,sizeof(s[i].name),stdin);
        char *p = strchr(s[i].name,'\n');
        if (p != NULL)
            *p = '\0';
    }
}
void printStud(Student *s, int size)
{
int i;
printf("The current student list: \n");
if (size==0)
printf("Empty array\n");
else
{
for (i=0; i<size; i++) {
printf("Student ID: %d ", s[i].id);
printf("Student Name: %s\n", s[i].name);
    }
}
}
int removeStud(Student *s, int *size, char *target)
{
    int i, j;
    if (*size == 0){
        return 1;
    }
    for (i = 0; i < *size; i++){
        if (strcmp(s[i].name, target) == 0){
            for (j = i; j < *size - 1; j++){
                s[j] = s[j+1];
            }
            (*size)--;
            return 0;
        }
    }
    return 2;
}