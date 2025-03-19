/*findMiddleAge
Write a function that takes in an array of three persons, finds the person whose age is the
middle one of the three persons, and returns the name and age of that person to the caller. For
example, if the array is {{"Tom",18},{"John",19}, {"Jim",20}}, then the person John and his age
will be returned. In this question, you may assume that the three persons have different ages.
The structure Person is defined below:
typedef struct {
char name[20];
int age;
} Person;

The function prototype is given below:
Person findMiddleAge(Person *p);

In addition, you are also required to write another function to read the three persons’
information. The input data are passed to the calling function via the pointer parameter p. The
function prototype is given below:
void readData(Person *p);*/

#include <stdio.h>
typedef struct {
char name[20];
int age;
} Person;

void readData(Person *p);
Person findMiddleAge(Person *p);
Person findMiddleAge1(Person *p);

int main()
{
    Person man[3], middle;
    readData(man);
    middle = findMiddleAge(man);
    printf("findMiddleAge(): %s %d\n", middle.name, middle.age);
    return 0;
}
void readData(Person *p)
{
    /* Write your code here */
    for (int i = 0; i < 3; i++){
        printf("Enter person %d:\n", i+1);
        scanf("%s %d", p[i].name, &p[i].age);
    }
}
Person findMiddleAge(Person *p)
{
    /* Write your code here */
    int minAge = p[0].age;
    int maxAge = minAge;
    int totalAge = maxAge;
    for (int i = 1; i < 3; i++){
        totalAge += p[i].age;
        if (minAge > p[i].age)
            minAge = p[i].age;
        if (maxAge < p[i].age)
            maxAge = p[i].age;
    }
    int middleAge = totalAge - minAge - maxAge;
    for (int i = 0; i < 3; i++){
        if (p[i].age == middleAge)
            return p[i];
    }
}
Person findMiddleAge1(Person *p)
{
    // Check if the first person's age lies between the other two.
    if ((p[0].age > p[1].age && p[0].age < p[2].age) ||
        (p[0].age < p[1].age && p[0].age > p[2].age))
    {
        return p[0];
    }
    // Otherwise, check if the second person's age is the middle one.
    else if ((p[1].age > p[0].age && p[1].age < p[2].age) ||
                (p[1].age < p[0].age && p[1].age > p[2].age))
    {
        return p[1];
    }
    // If neither the first nor the second is in the middle, the third must be.
    else
    {
        return p[2];
    }
}